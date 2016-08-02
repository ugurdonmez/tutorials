/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dynamic.lcs;

/**
 *
 * @author ugurdonmez
 */
public class KnapsackProblem {

    public static int knapsackHackerRank(int w, int[] val) {

        int[][] table = new int[w + 1][val.length + 1];

        for (int i = 0; i <= w; i++) {
            for (int j = 0; j < val.length + 1; j++) {
                if (i == 0 || j == 0) {
                    table[i][j] = 0;
                } else if (val[j - 1] <= i) {
                    table[i][j] = Integer.max(table[i][j - 1], val[j - 1] + table[i - val[j - 1]][j]);
                } else {
                    table[i][j] = table[i][j - 1];
                }
            }
        }

        /*
        for (int i = 0; i <= w; i++) {
            System.out.print(i + " ");
            for (int j = 0 ; j < wt.length+1; j++) {
                System.out.print(table[i][j] + " ");
            }
            System.out.println("");
        }
         */
        return table[w][val.length];
    }

    public static int knapsack(int w, int[] wt, int[] val) {

        int[][] table = new int[w + 1][wt.length + 1];

        for (int i = 0; i <= w; i++) {
            for (int j = 0; j < wt.length + 1; j++) {
                if (i == 0 || j == 0) {
                    table[i][j] = 0;
                } else if (wt[j - 1] <= i) {
                    table[i][j] = Integer.max(table[i][j - 1], val[j - 1] + table[i - wt[j - 1]][j - 1]);
                } else {
                    table[i][j] = table[i][j - 1];
                }
            }
        }

        /*
        for (int i = 0; i <= w; i++) {
            System.out.print(i + " ");
            for (int j = 0 ; j < wt.length+1; j++) {
                System.out.print(table[i][j] + " ");
            }
            System.out.println("");
        }
         */
        return table[w][wt.length];
    }

    public static void main(String[] args) {

        int w = 50;
        int[] wt = {10, 20, 30};
        int[] val = {60, 100, 120};

        System.out.println(knapsack(w, wt, val));
        
        int [] h = {1, 6, 9};
        int [] h1 = {3, 4, 4, 4, 8};
        
        System.out.println(knapsackHackerRank(12, h));
        
        System.out.println(knapsackHackerRank(9, h));

    }

}
