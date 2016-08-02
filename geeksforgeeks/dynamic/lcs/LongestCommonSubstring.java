/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dynamic.lcs;

import java.util.Scanner;

/**
 *
 * @author ugurdonmez
 */
public class LongestCommonSubstring {
    
    public static int lcs(int i, int j, String str1, String str2) {
                
        if (i >= str1.length()) {
            return 0;
        }
        
        if (j >= str2.length()) {
            return 0;
        }
        
        if ( str1.charAt(i) == str2.charAt(j) ) {
            return 1 + lcs(i+1, j+1, str1, str2);
        } else {
            return Integer.max( lcs (i+1, j , str1, str2) , lcs(i, j+1, str1, str2));
        }
    }
    
    public static int lcsDynamic (String str1, String str2) {
        
        int size1 = str1.length();
        int size2 = str2.length();
        
        int [][] array = new int[size1+1][size2+1];
        
        for (int i = 0 ; i < size1+1 ; i++) {
            for (int j = 0 ; j < size2+1 ; j++) {
                if (i == 0 || j == 0) {
                    array[i][j] = 0;
                } else if ( str1.charAt(i-1) == str2.charAt(j-1) ) {
                    array[i][j] = 1 + array[i-1][j-1];
                } else {
                    array[i][j] = Integer.max(array[i][j-1], array[i-1][j]);
                }
            }
        }
        
        return array[size1][size2];
    }
    
    public static void main (String [] args) {
        
        
        Scanner scanner = new Scanner(System.in);
        
        int test = scanner.nextInt();
        
        for (int i = 0 ; i < test ; i++) {
            
            String str1 = scanner.next();
            String str2 = scanner.next();
            
            System.out.println(lcs(0, 0, str1, str2));
            System.out.println(lcsDynamic(str1, str2));
        }
        
    }
    
}
