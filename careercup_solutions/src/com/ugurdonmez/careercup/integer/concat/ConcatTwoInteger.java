/*
 * what is time complexity of concatenating two int in java example :-
 * 
 * int a=18965;
 * int b=78521369741;
 * after concatenation i want ans in primitive integer data types like,
 * 
 * int c=1896578521369741;
 * i want to know what is the fastest way to do this and what 
 * will be the time complexity ?
 */
package com.ugurdonmez.careercup.integer.concat;

/**
 *
 * O(k) k is the size of second int
 * 
 * @author uğur
 */
public class ConcatTwoInteger {
    
    public static void main (String args []) {
        
        System.out.println(concatInteger(123, 456));
        
    }
    
    public static int concatInteger(int int1 , int int2 ) {
        
        int temp = int2;
        
        while (int2 > 0) {
            int2 /= 10;
            int1 *= 10;
        } 
        
        return int1 + temp;
    }
    
}
