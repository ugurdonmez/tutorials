/*
 * Consider the following algorithm to sort the entries in a stack S1. First 
 * create two empty stack. At any given time, stack S2 will sort entries in 
 * sorted order. 
 */
package com.ugurdonmez.tutorials.datasturucture.pearson.chapter5;

import java.util.Stack;

/**
 *
 * @author ugur
 */
public class SortingStack {
    
    public Stack<Integer> sort (Stack<Integer> entries) {
        
        Stack<Integer> s2 = new Stack<Integer>();
        Stack<Integer> s3 = new Stack<Integer>();
        
        while(!entries.isEmpty()) {
            
            if ( s2.isEmpty() || entries.peek() < s2.peek() ) {
                s2.push(entries.pop());
            }
            else {
                while ( !s2.isEmpty() && entries.peek() > s2.peek() ) {
                    s3.push(s2.pop());
                }
                
                s2.push(entries.pop());
                
                while ( !s3.isEmpty() ) {
                    s2.push(s3.pop());
                }
                
            }
            
        }
        
        return s2;
    }
    
    public static void main(String [] args) {
        
        SortingStack sortingStack = new SortingStack();
        Stack<Integer> s1 = new Stack<Integer>();
        
        s1.push(1);
        s1.push(2);
        s1.push(5);
        s1.push(7);
        s1.push(3);
        s1.push(4);
        
        s1 = sortingStack.sort(s1);
        
        while ( !s1.isEmpty() ) {
            System.out.println(s1.pop());
        }
    }
}
