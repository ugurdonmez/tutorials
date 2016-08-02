/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dynamic;

/**
 *
 * @author ugurdonmez
 */
public class PathCount {
    
    public static int pathSize (int n) {
        
        if (n == 0) {
            return 0;
        }
        
        if (n == 1) {
            return 1;
        }
        
        if (n == 2) {
            return 2;
        }
        
        int [] array = new int[n+1];
        
        array[0] = 1;
        array[1] = 1;
        array[2] = 2;
        
        for (int i = 3 ; i < n+1 ; i++ ) {
            array[i] = array[i-3] + array[i-2] + array[i-1];
        }
        
        return array[n];
    }
    
    
    public static void main (String [] args) {
        
        System.out.println(pathSize(10));
        System.out.println(pathSize(3));
        System.out.println(pathSize(4));
        System.out.println(pathSize(5));
        
    }
}
