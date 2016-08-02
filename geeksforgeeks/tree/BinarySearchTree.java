/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tree;

import java.util.Stack;
 
class BinarySearchTree {
 
    boolean canRepresentBST(int pre[], int n) {
        Stack<Integer> s = new Stack<>();
 
        int root = Integer.MIN_VALUE;
 
        for (int i = 0; i < n; i++) {
            if (pre[i] < root) {
                return false;
            }

            while (!s.empty() && s.peek() < pre[i]) {
                root = s.peek();
                s.pop();
            }
            
            s.push(pre[i]);
        }
        return true;
    }
 
    public static void main(String args[]) {
        BinarySearchTree bst = new BinarySearchTree();
        int[] pre1 = new int[]{40, 30, 35, 80, 100};
        int n = pre1.length;
        if (bst.canRepresentBST(pre1, n) == true) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }
        int[] pre2 = new int[]{40, 30, 35, 20, 80, 100};
        int n1 = pre2.length;
        if (bst.canRepresentBST(pre2, n) == true) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }
    }
}
 