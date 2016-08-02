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
public class MyDisjointSets {
    
    private int[] parent;

    public MyDisjointSets(int size) {
        this.parent = new int[size];
        
        for (int i = 0 ; i < size ; i++) {
            parent[i] = -1;
        }
    }
    
    public int find(int root) {
        if (parent[root] == -1) {
            return root;
        } else {
            return find(parent[root]);
        }
    }
    
    // TODO : improve rank
    public void union(int root1, int root2) {
        int xRoot = this.find(root1);
        int yRoot = this.find(root2);
        
        parent[xRoot] = yRoot;
    }
    
    public void test(int index, int root) {
        this.parent[index] = root;
    }
    
    @Override
    public String toString() {
        
        StringBuilder buff = new StringBuilder();
        
        for ( int i = 0 ; i < this.parent.length ; i++) {
            buff.append(i).append(" ");
        }
        
        buff.append("\n");
        
        for ( int i = 0 ; i < this.parent.length ; i++) {
            buff.append(this.parent[i]).append(" ");
        }
        
        return buff.toString();
    }
    
    public static void main (String [] args) {
        
        MyDisjointSets set = new MyDisjointSets(6);
        
        System.out.println(set);
        
        set.test(0, 1);
        set.test(1, 2);
        set.test(4, 3);
        
        System.out.println(set);
        
        set.union(1, 3);
        
        System.out.println(set);
    }
    
}
