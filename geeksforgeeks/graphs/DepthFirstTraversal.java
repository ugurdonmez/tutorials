/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package graphs;

import java.util.Stack;

/**
 *
 * @author user
 */
public class DepthFirstTraversal {
    
    int [][] adjv;
    int size;
    
    public DepthFirstTraversal(int size) {
        this.size = size;
    }
    
    private void visit(int node) {
        System.out.println(node);
    }
    
    public void dft(int start) {
        
        Stack<Integer> stack = new Stack();
        boolean [] visited = new boolean[size];
        
        for (int i = 0; i < size; i++) {
            visited[i] = false;
        }
        
        // add start to stack
        stack.add(start);
        
        while (stack.isEmpty() == false) {
            int node = stack.pop();
            
            if (visited[node] == false) {
                
                this.visit(node);
                visited[node] = true;
                
                for (int j = 0; j < size; j++) {
                    if (adjv[node][j] != 0) {
                        stack.add(j);
                    }
                }
            }
        }
        
    }
    
    public static void main(String [] args) {
        
        DepthFirstTraversal dft = new DepthFirstTraversal(4);
        
        dft.adjv = new int[][] {{0,1,1,0}, {0,0,0,1}, {0,0,0,1}, {0,0,0,0}};
        
        dft.dft(0);
        
        
    }
    
    
    
}
