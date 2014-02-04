/*
 * Consider the following array {1,2,3,4,5,2,5,4,4};
 * In the above array, index 4 could be considered as breaking point 
 * where summation of 0 to 4 in the array is equal to summation of 5 to end of 
 * array. We need to find the breaking point for the given array.
 */
package com.ugurdonmez.careercup.array.breakingpoint;

/**
 *
 * @author uğur
 */
public class ArrayBreakingPoint {
    
    public static void main (String args[]) {
        
        int [] arr1  =  {1,2,3,4,5,2,5,4,4};
        System.out.println( getBreakingPoint( arr1 ) );
        
        int [] arr2  =  {1,0,-1,-1,1};
        System.out.println( getBreakingPoint( arr2 ) );
        
        
        int [] arr3  =  {1,-1,0,1,1};
        System.out.println( getBreakingPoint( arr3 ) );
        
    }
    
    public static int getBreakingPoint (int arr []) {
        
        int sumFirst = 0;
        int sumLast = 0;
        
        for (int i : arr ) {
            sumLast += i;
        }
        
        int i;
        for (i = 0 ; i < arr.length ; i++ ) {
            sumFirst += arr[i];
            sumLast -= arr[i];
            
            if (sumFirst == sumLast) {
                break;
            }
        }
        
        return i;
    }
    
}
