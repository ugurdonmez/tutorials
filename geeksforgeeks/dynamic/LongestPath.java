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
public class LongestPath {
    
    public static int longestSum(int i , int j , int [][] array, int size) {
        
        if (i < 0 || i >= size || j < 0 || j >= size) {
            return 0;
        }
        
        int up = 0, down = 0, left = 0, right = 0;
        
        // up 
        if (i - 1 >= 0) {
            if (array[i-1][j] - array[i][j] == 1) {
                up = 1 + longestSum(i-1, j, array, size);
            } else {
                up = 1;
            }
        }
        
        // down
        if (i + 1 < 0) {
            if (array[i+1][j] - array[i][j] == 1) {
                down = 1 + longestSum(i+1, j, array, size);
            } else {
                down = 1;
            }
        }
        
        // left
        if (j - 1 >= 0) {
            if (array[i][j-1] - array[i][j] == 1) {
                left = 1 + longestSum(i, j-1, array, size);
            } else {
                left = 1;
            }
        }
        
        // right
        if (j - 1 >= 0) {
            if (array[i][j+1] - array[i][j] == 1) {
                right = 1 + longestSum(i, j+1, array, size);
            } else {
                right = 1;
            }
        }
        
        
        return ;
    }
    
}
