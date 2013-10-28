/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package af;

import java.util.Scanner;

/**
 *
 * @author ugur
 */
public class Solution {
    
    public static void main(String [] args ) {
        
        Scanner scanner = new Scanner(System.in);
        
        int size = scanner.nextInt();
        
        // if 1 increment
        
        
        for ( int i = 0 ; i < size ; i++ ) {
            int favorite = scanner.nextInt();
            
            int yell = 1;
            int people = 1;
            int direction = 1;
            
            while( yell <= favorite ) {
                
                if (yell == favorite) {
                
                // System.out.println("yell " + yell + " " + people);
                    System.out.println(people);
                    break;
                }
                if ( direction == 1 ) {
                    yell++;
                    people++;
                    
                    if (people == 1338) {
                        people = 1;
                    }
                    
                    if ( yell %7 == 0  ) {
                        direction = 0;
                    }
                    else if ( (new Integer(yell)).toString().contains("7") ) {
                        direction = 0;
                    }
                    
                }
                else {
                    yell++;
                    people--;
                    if (people == 0) {
                        people = 1337;
                    }
                    if ( yell %7 == 0  ) {
                        direction = 1;
                    }
                    else if ( (new Integer(yell)).toString().contains("7") ) {
                        direction = 1;
                    }
                }
            }
            // people++;
            // System.out.println(people);
        }
        
        
        
        
        
    }
    
}
