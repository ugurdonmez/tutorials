/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package graphs;

import java.util.PriorityQueue;

/**
 *
 * @author user
 */
public class DijsktraShortestPath {
    int [][] adjv;
    int size;
    
    public DijsktraShortestPath(int size) {
        this.size = size;
    }
    
    public int shortestPath(int start, int end) {
        
        PriorityQueue<QueueNode> queue = new PriorityQueue<>();
        
        boolean [] visited = new boolean[this.size];
        
        QueueNode startNode = new QueueNode();
        startNode.number = start;
        startNode.value = 0;
        
        queue.add(startNode);
        
        while ( !queue.isEmpty() ) {
            QueueNode node = queue.poll();
            
            if (node.number == end) {
                return node.value;
            }
            
            if (visited[node.number]) {   
                continue;
            }
            
            visited[node.number] = true;
            
            // add adj to queue
            for (int i = 0; i < size ; i++) {
                if ( this.adjv[node.number][i] != 0 ) {
                    QueueNode add = new QueueNode();
                    add.number = i;
                    add.value = this.adjv[node.number][i] + node.value;
                    queue.add(add);
                }
            }
            
        }
        
        return -1;
    }
    
    public static void main (String [] args) {
        
        DijsktraShortestPath dsp = new DijsktraShortestPath(4);
        
        dsp.adjv = new int[][] {{0,1,1,7}, {0,0,0,5}, {0,0,0,1}, {0,0,0,0}};
        
        System.out.println( dsp.shortestPath(0, 3) );
        
    }
}


class QueueNode implements Comparable<QueueNode>{
    
    int value;
    int number;

    @Override
    public int compareTo(QueueNode o) {
        return Integer.compare(this.value, o.value);
    }
}