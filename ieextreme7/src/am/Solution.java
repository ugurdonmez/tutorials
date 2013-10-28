/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package am;

import java.util.Scanner;

/**
 *
 * @author ugur
 */
public class Solution {
    
    public static void main(String [] args) {
        Scanner scanner = new Scanner(System.in);
        
        Solution solution = new Solution();
        
        int m = scanner.nextInt();
        int n = scanner.nextInt();
        
        int [][] risk = new int[m][n];
        
        for (int i = 0 ; i < m ; i++ ) {
            for (int j = 0 ; j < n ; j++ ) {
                risk[i][j] = scanner.nextInt();
            }
        }
        
        for ( int i = m-2 ; i >= 0 ; i-- ) {
            for (int j = 0 ; j < n ; j++ ) {
                // System.out.println(i +" " + j);
                
                if ( j == 0 ) {
                    risk[i][j] = risk[i][j] + solution.min(risk[i+1][j],risk[i+1][j+1]);
                }
                else if ( j == n - 1 ) {
                    risk[i][j] = risk[i][j] + solution.min(risk[i+1][j-1], risk[i+1][j]);
                }
                else {
                    risk[i][j] = risk[i][j] + solution.min(risk[i+1][j-1], risk[i+1][j],risk[i+1][j+1]);
                }
                
            }
        }
        
        System.out.print("Minimum risk path = ");
        
        int old_y;
        int min_y = 1;
        
        // first line min
        
        int min_b = 0;
        int min_value = risk[0][0];
        
        for ( int j = 1 ; j < n ; j++ ) {
            if ( risk[0][j] < min_value ) {
                min_value = risk[0][j];
                min_b = j;
            }
        }
        
        System.out.print("["+0+","+min_b+"]");
        
        for ( int i = 1 ; i < m ; i++ ) {
            if ( min_b == 0 ) {
                
                if ( risk[i][0]<=risk[i][1] ) {
                    System.out.print("["+i+","+0+"]");
                    min_b = 0;
                }
                else {
                    System.out.print("["+i+","+1+"]");
                    min_b = 1;
                }
                
            }
            else if ( min_b == m-1 ) {
                if ( risk[i][m-2]<=risk[i][m-1] ) {
                    int index = m - 2;
                    System.out.print("["+i+","+index+"]");
                    min_b = index;
                }
                else {
                    int index = m - 1;
                    System.out.print("["+i+","+index+"]");
                    min_b = index;
                }
            }
            else {
                int j1 = min_b-1;
                int j2 = min_b;
                int j3 = min_b+1;
                
                int min_a = risk[i][j1];
                int min_index = j1;
                
                if ( risk[i][j2] < min_a ) {
                    min_a = risk[i][j2];
                    min_index = j2;
                }
                
                if ( risk[i][j3] < min_a ) {
                    min_a = risk[i][j3];
                    min_index = j3;
                }
                
                min_b = min_index;
                System.out.print("["+i+","+min_index+"]");
                
            }
        }
        
        
//        for ( int i  = 0 ; i < m ; i++  ) {
//            old_y = min_y;
//            min_y = 0;
//            int j = old_y-1;
//            if (j < 0 ) {
//                j = 0;
//            }
//            
//            int min = risk[i][j];
//            int min_x = i;
//            
//            for (  ; j < n ; j++ ) {
//                if ( risk[i][j] < min ) {
//                    min = risk[i][j];
//                    min_x = i;
//                    min_y = j;
//                }
//            }
//            System.out.print("["+min_x+","+min_y+"]");
//        }
        
        int min = 0;
        
        for ( int i  = 0 ; i < 1 ; i++  ) {
            min = risk[i][0];
            int min_x = i;
            min_y = 0;
            int j;
            for ( j = 1 ; j < n ; j++ ) {
                if ( risk[i][j] < min ) {
                    min = risk[i][j];
                    min_x = i;
                    min_y = j;
                }
            }
            // System.out.print("["+min_x+","+min_y+"]");
        }
        System.out.println("");
        System.out.println("Risks along the path = " + min);
        
        
    }
    
    public int min(int value1,  int value2) {
        if (value1 < value2) {
            return value1;
        }
        else {
            return value2;
        }
    }
    
    public int min(int value1,  int value2, int value3) {
        
        int min = value1;
        
        if (value2 < min) {
            min = value2;
        }
        else if ( value3 < min ){
            min = value3;
        }
        
        return min;
    }
}
