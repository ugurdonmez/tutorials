/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package aj;

import java.util.Scanner;

/**
 *
 * @author ugur
 */
public class Solution {
    public static void main(String [] args) {
        Scanner scanner = new Scanner(System.in);
    
        int size = scanner.nextInt();
        
        int [] slopes = new int[size];
        
        for (int i = 0 ; i < size ; i++) {
            slopes[i] = scanner.nextInt();
        }
        
        int [] speed = new int[size];
        
        speed[size-1] = slopes[size-1];
        
        for (int i = size -2 ; i >= 0 ; i-- ) {
            speed[i] = slopes[i] + speed[i+1];
        }
        
        int max = speed[size-1];
        
        for (int i = 0 ; i < size ; i++) {
            
            // System.out.println(speed[i]);
            
            if ( speed[i] > max ) {
                max = speed[i];
            }
        }
        
        System.out.println(max);
    
    }
}
