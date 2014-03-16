/*
 * Given a sorted array of integers, write a function 
 * that will return the number with the biggest number of repetitions.
 * (Asked to refine the solution to be more efficient)
 */
package com.ugurdonmez.careercup.array.biggestrepetation;

/**
 * O(n) solution
 * @author uğur
 */
public class BiggestRepetation {
    
    public static void main (String args [] ) {
        
        // int [] array = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,3,3,3,3,3,4,4,4,4,4,4,4,5};
        int [] array = {1,1,2,2,3,3,3,3,3,4,4,4,4,4,4,4,5};
        
        int bigRep = 0;
        int currentRep = 0;
        int current = -1;
        
        for (int i : array ) {
            if ( i == current ) {
                currentRep++;
            }
            else {
                if ( currentRep > bigRep ) {
                    bigRep = currentRep;
                }
                current = i;
                currentRep = 1;
            }
        }
        
        System.out.println(bigRep);
        
    }
    
}
