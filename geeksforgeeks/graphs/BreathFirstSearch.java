/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package graphs;


import java.util.LinkedList;
import java.util.Queue;

/**
 *
 * @author user
 */
public class BreathFirstSearch {
    int [][] adjv;
    int size;
    
    public BreathFirstSearch(int size) {
        this.size = size;
    }
    
    private void visit(int node) {
        System.out.println(node);
    }
    
    public void bft(int start) {
        
        Queue<Integer> queue = new LinkedList<>();
        boolean [] visited = new boolean[size];
        
        for (int i = 0; i < size; i++) {
            visited[i] = false;
        }
        
        // add start to stack
        queue.add(start);
        
        while (queue.isEmpty() == false) {
            int node = queue.poll();
            
            if (visited[node] == false) {
                
                this.visit(node);
                visited[node] = true;
                
                for (int j = 0; j < size; j++) {
                    if (adjv[node][j] != 0) {
                        queue.add(j);
                    }
                }
            }
        } 
    }
    
    public static void main(String [] args) {
        
        BreathFirstSearch bft = new BreathFirstSearch(4);
        
        bft.adjv = new int[][] {{0,1,1,0}, {0,0,0,1}, {0,0,0,1}, {0,0,0,0}};
        
        bft.bft(0);
    }
}
