/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ugurdonmez.careercup.array.path;

/**
 *
 * @author uğur
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
