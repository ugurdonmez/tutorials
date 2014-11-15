/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ugurdonmez.careercup.array.biggestproduct;

/**
 *
 * @author ugur
 */
public class BiggestProduct {

    public static void main (String [] args) {
        
        BiggestProduct bp = new BiggestProduct();
        
        int[] largestKeys = {0, -1, 3, 100, -70, -5};
        
        System.out.println(bp.getHighestPositiveProduct(largestKeys));
        
        
    }
    
    public int biggestProduct(int arg[]) {

        int firstBiggest;
        int secondBiggest;
        int thirdBiggest;

        return 0;
    }

    public int getHighestPositiveProduct(int[] input) {
        // Largest keys (ignoring positive/negative aspect) will return largest positive product.
        int[] largestKeys = {0, 0, 0};
        // There can be only two negative keys, or it will return negative.
        int negatives = 0;
        for (int i = 0; i < input.length; i++) {
            if (Math.abs(input[i]) > Math.abs(largestKeys[0])) {
                largestKeys[2] = largestKeys[1];
                largestKeys[1] = largestKeys[0];
                largestKeys[0] = input[i];
                if (input[i] < 0) {
                    negatives++;
                }
            } else if (Math.abs(input[i]) > Math.abs(largestKeys[1])) {
                largestKeys[2] = largestKeys[1];
                largestKeys[1] = input[i];
                if (input[i] < 0) {
                    negatives++;
                }
            } else if (Math.abs(input[i]) > Math.abs(largestKeys[0])) {
                largestKeys[2] = input[i];
                if (input[i] < 0) {
                    negatives++;
                }
            }
            if (negatives != 2 && negatives != 0) {
                continue;
            }
        }
        return largestKeys[0] * largestKeys[1] * largestKeys[2];
    }
}
