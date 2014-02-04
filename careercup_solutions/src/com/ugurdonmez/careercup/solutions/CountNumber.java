/*
 * Count the number of positive integers less than N 
 * that does not contains digit 4.
 */
package com.ugurdonmez.careercup.solutions;

import java.util.Scanner;

/**
 *
 * @author uğur
 */
public class CountNumber {
    
    public static void main (String args[]) {
        
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        int count = 0;
        
        for (int i = 0 ; i < n ; i++ ) {
            if ( !containFour(i)) {
                count++;
            }
        }
        
        System.out.println(count);
        
    }
    
    public static boolean containFour(int i) {
        
        return String.valueOf(i).contains("4");
                
    }
    
}
