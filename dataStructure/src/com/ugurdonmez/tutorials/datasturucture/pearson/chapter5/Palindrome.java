/*
 * Write a Java program that uses a stack to test whether an input string is
 * palindrome
 */
package com.ugurdonmez.tutorials.datasturucture.pearson.chapter5;

import java.util.Stack;

/**
 *
 * @author ugur
 */
public class Palindrome {
    
    boolean isPalindrome(String string) {
        
        Stack<Character> stack = new Stack<Character>();
        
        for (Character c : string.toCharArray() ) {
            stack.push(c);
        }
        
        for (Character c : string.toCharArray() ) {
            if ( !c.equals(stack.pop()) ) {
                return false;
            }
        }
        
        return true;
    }
    
    public static void main(String [] args) {
        Palindrome palindrome = new Palindrome();
        System.out.println( "ugur : " + palindrome.isPalindrome("ugur"));
        System.out.println( "abcba : " + palindrome.isPalindrome("abcba"));
    }
    
}
