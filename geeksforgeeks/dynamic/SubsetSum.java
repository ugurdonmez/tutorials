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
public class SubsetSum {

    public static boolean isSubsetSumDynamic(int[] arr, int n) {

        int sum = 0;

        for (int a : arr) {
            sum += a;
        }

        if (sum % 2 != 0) {
            return false;
        }

        sum = sum / 2;

        boolean[][] table = new boolean[sum + 1][n + 1];

        for (int i = 0; i < n + 1; i++) {
            table[0][i] = true;
        }

        for (int i = 1; i < sum + 1; i++) {
            table[i][0] = false;
        }

        for (int i = 1; i < sum + 1; i++) {
            for (int j = 1; j < n + 1; j++) {

                if (table[i][j - 1] == true) {
                    table[i][j] = true;
                } else if (i >= arr[j - 1]) {
                    table[i][j] = table[i - arr[j - 1]][j - 1];
                }
            }
        }

        for (int i = 0; i < sum + 1; i++) {
            System.out.print(i + " ");
            for (int j = 0; j < n + 1; j++) {
                System.out.print(table[i][j] + " ");
            }
            System.out.println("");
        }

        return table[sum][n];

    }

    public static boolean isSubsetSumRecursion(int[] arr, int n, int sum) {

        if (sum == 0) {
            return true;
        }

        if (n == 0 && sum != 0) {
            return false;
        }

        if (sum < arr[n - 1]) {
            return isSubsetSumRecursion(arr, n - 1, sum);
        }

        return isSubsetSumRecursion(arr, n - 1, sum) || isSubsetSumRecursion(arr, n - 1, sum - arr[n - 1]);
    }

    public static void main(String[] args) {

        int[] arr = {1, 3, 3, 8, 7};

        // System.out.println(isSubsetSumRecursion(arr, 5, 11));
        System.out.println(isSubsetSumDynamic(arr, 5));

        System.out.println("aa");

    }

}
