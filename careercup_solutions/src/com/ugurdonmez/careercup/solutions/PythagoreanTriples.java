/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ugurdonmez.careercup.solutions;

import java.util.HashSet;

/**
 *
 * @author uğur
 */
public class PythagoreanTriples {
    
    public static void main (String args[]) {
        
        
        int[] arr = new int[]{1,3,4,5,6,7,8,10,11};

        HashSet<Integer> set = new HashSet<Integer>();
        
        for (int i : arr) {
            set.add(i * i);
        }
        
        for (int i = 0 ; i < arr.length ; i++ ) {
            for (int j = i+1 ; j < arr.length ; j++ ) {
                if ( set.contains( arr[i] * arr[i] + arr[j] * arr[j]) ) {
                    System.out.println( arr[i] + " " + arr[j] );
                }
            }
        }
        
        
    }
    
}
