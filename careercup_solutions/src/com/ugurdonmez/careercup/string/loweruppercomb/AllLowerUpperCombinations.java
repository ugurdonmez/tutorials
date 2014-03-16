/*
 * Find all the combinations of a string in lowercase and uppercase. 
 * For example, string "ab" -> "ab", "Ab", "aB", "AB". 
 * So, you will have 2^n (n = number of chars in the string) output strings. 
 * The goal is for you to test each of these string and 
 * see if it match a hidden string.
 */

package com.ugurdonmez.careercup.string.loweruppercomb;

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

/**
 *
 * @author uğur
 */
public class AllLowerUpperCombinations {
    
    public static void main (String args[]) {
        
        Scanner scanner = new Scanner(System.in);
        
        String input = scanner.next();
        
        Queue<String> queue = new LinkedList<>();
        
        queue.add("");
        
        int pow = myIntPower(input.length());
        
        while( queue.size() < pow ) {
            String last = queue.poll();
            queue.add(last + Character.toLowerCase(input.charAt(last.length())));
            queue.add(last + Character.toUpperCase(input.charAt(last.length())));
            
        }
        
        while ( !queue.isEmpty() ) {
            System.out.println(queue.poll());
        }
        
    }
    
    public static int myIntPower (int number) {
        
        int power = 1;
        
        for (int i = 0 ; i < number ; i++) {
            power *= 2;
        }
        
        return power;
    }
    
}
