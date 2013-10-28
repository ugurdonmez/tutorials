/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package ieeextreme;

import java.util.Scanner;

/**
 *
 * @author ugur
 */
public class IBM {
    
    public static void main(String [] args ) {
        Scanner scanner = new Scanner(System.in);
        
        int i = 0;
        
        while (scanner.hasNext()) {
            if (i > 31) {
                System.out.println("Too long");
                return;
            }
            
            i++;
            
            
            
        }
        
        System.out.println("Ok");
        
        
    }
    
}
