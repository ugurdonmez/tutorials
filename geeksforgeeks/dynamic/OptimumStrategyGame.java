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
public class OptimumStrategyGame {
    
    public static int optimumStrategyForGame(int [] arr, int i, int j) {
        
        System.out.println(i + " " + j);
        
        if (i == j) {
            return arr[i];
        }
        
        if (j == i+1) {
            return Integer.max(arr[i], arr[j]);
        }
        
        return Integer.max( arr[i] + Integer.min( optimumStrategyForGame(arr, i+2, j), optimumStrategyForGame(arr, i+1, j-1)) ,
                            arr[j] + Integer.min( optimumStrategyForGame(arr, i+1, j-1), optimumStrategyForGame(arr, i, j-2)));
        
    }
    
    public static void main (String [] args) {
        
        int [] arr = {8, 15, 3, 7};
        
        System.out.println( optimumStrategyForGame(arr, 0, 3) );
        
    }
    
}
