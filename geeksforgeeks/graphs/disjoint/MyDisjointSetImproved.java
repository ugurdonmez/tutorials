/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package graphs.disjoint;

/**
 *
 * @author ugurdonmez
 */
public class MyDisjointSetImproved {
    
    private int[] parent;
    private int[] rank;
    
    public MyDisjointSetImproved(int size) {
        this.parent = new int[size];
        this.rank = new int[size];
        
        for (int i = 0 ; i < size ; i++) {
            parent[i] = -1;
            rank[i] = 0;
        }
    }
    
    public int find(int root) {
        if (this.parent[root] == -1) {
            return root;
        }
        this.parent[root] = this.find(this.parent[root]);
        
        return this.parent[root];
    }
    
    public void union(int root1, int root2) {
        int parent1 = this.find(root1);
        int parent2 = this.find(root2);
        
        if (this.rank[parent1] < this.rank[parent2]) {
            this.parent[root1] = parent2;
        } else if (this.rank[parent1] > this.rank[parent2]) {
            this.parent[root2] = parent1;
        } else {
            this.parent[root2] = parent1;
            this.rank[parent1] ++;
        }
    }
    
}
