/*
 * Given a float number 7.64, convert it into the string WITHOUT 
 * using any inbuilt function/library.
 */
package com.ugurdonmez.careercup.solutions;

/**
 *
 * @author uğur
 */
public class FloatString {
    
    public static void main (String args []) {
       
        float f = 7.64f;
        String str = "";
        
        int i = (int) f;
        
        str += i;
        str += ".";
        
        f -= i;
        
        while (f > 0) {
            f *= 10;
            i = (int) f;
            f -= i;;
            str += i;
        }
        
        System.out.println(str);
        
    }
    
}
