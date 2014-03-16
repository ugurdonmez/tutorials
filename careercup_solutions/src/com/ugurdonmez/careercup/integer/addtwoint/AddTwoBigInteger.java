/*
 * How do you add two numbers that are larger/longer than Integer datatype?
 */
package com.ugurdonmez.careercup.integer.addtwoint;

import java.util.Scanner;
import java.util.Stack;

/**
 *
 * @author uğur
 */
public class AddTwoBigInteger {
    
    public static void main (String args[]) {
        
        Scanner scanner = new Scanner(System.in);
        
        String inp1 = scanner.next();
        String inp2 = scanner.next();
        
        Stack<Character> stack1 = new Stack<>();
        Stack<Character> stack2 = new Stack<>();
        
        for (int i = 0 ; i < inp1.length() ; i++ ) {
            stack1.add(inp1.charAt(i));
        }
        
        for (int i = 0 ; i < inp2.length() ; i++ ) {
            stack2.add(inp2.charAt(i));
        }
        
        Stack<Integer> result = new Stack<>();
        int carry = 0;
        
        while ( !stack1.isEmpty() || !stack2.isEmpty() ) {
            
            int i1;
            int i2;
            
            if (stack1.isEmpty() ) {
                i1 = 0;
            }
            else {
                i1 = Character.getNumericValue( stack1.pop() );
            }
            
            if (stack2.isEmpty() ) {
                i2 = 0;
            }
            else {
                i2 = Character.getNumericValue( stack2.pop() );
            }
            
            result.add( (i1 + i2 + carry ) % 10 );
            carry = (i1 + i2 + carry ) / 10;
            
        }
        
        if ( carry != 0 ) {
            result.add(carry);
        }
        
        while( !result.isEmpty() ) {
            System.out.print(result.pop());
        }
        
    }
    
}
