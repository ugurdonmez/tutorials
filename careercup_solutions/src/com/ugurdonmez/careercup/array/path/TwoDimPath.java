/*
 * You are given a 2-Dimensional array with M rows and N columns. 
 * You are initially positioned at (0,0) which is the top-left 
 * cell in the array. You are allowed to move either right or downwards. 
 * The array is filled with 1's and 0's. 
 * A 1 indicates that you can move through that cell, a 
 * 0 indicates that you cannot move through the cell. 
 * Given a function numberOfPaths which takes in the above 2-D array, 
 * return the number of paths from the top-left cell to the
 * bottom-right cell (i.e. (0,0) to (M-1,N-1)).
 */
package com.ugurdonmez.careercup.array.path;

/**
 *
 * @author http://www.careercup.com/question?id=5326347538792448
 */
public class TwoDimPath {
	public static void main(String[] args){
		int arr[][] = { {1,1,1,1},
				{1,0,1,1},
                                {1,1,1,1},
                                {1,1,1,1}};
		
		System.out.println(findPaths(arr,2,2,0));		
		}
	public static int findPaths(int[][] arr,int m,int n,int count){
		
		if(0 == m && 0 == n){
			count++;
			return count;
		}
		if(n > 0 && arr[m][n-1] != 0){
			count = findPaths(arr,m,n-1,count);
		}
		if(m>0 && arr[m-1][n] != 0){
			count = findPaths(arr,m-1,n,count);
		}
		return count;
	}
}
