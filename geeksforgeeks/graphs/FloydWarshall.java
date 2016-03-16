/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package graphs;

/**
 *
 * @author ugurdonmez
 */
public class FloydWarshall {
    
    int [][] adjv;
    int size;
    
    public FloydWarshall(int size) {
        this.size = size;
    }
    
    public int [][] allPairsShortestPath() {
        
        int [][] finalPaths = new int[this.size][this.size];
        
        for (int i = 0 ; i < size ; i++) {
            for (int j = 0 ; j < size ; j++) {
                if (adjv[i][j] == 0) {
                    finalPaths[i][j] = 1000;
                } else {
                    finalPaths[i][j] = adjv[i][j];
                }
            }
        }
        
        for (int k = 0 ; k < size ; k++) {
            for (int i = 0 ; i < size ; i++) {
                for (int j = 0 ; j < size ; j++) {
                    if (finalPaths[i][j] > finalPaths[i][k] + finalPaths[k][j]) {
                        finalPaths[i][j] = finalPaths[i][k] + finalPaths[k][j];
                    }
                }
            }
        }
        
        return finalPaths;
    }
    
    public static void main (String [] args) {
        
        int INF = 1000;
        
        FloydWarshall fw = new FloydWarshall(4);
        
        fw.adjv = new int[][] { {0,   5,  INF, 10},
                          {INF, 0,   3, INF},
                          {INF, INF, 0,   1},
                          {INF, INF, INF, 0}
                        };
        
        print(fw.allPairsShortestPath(), 4);
        
    }
    
    public static void print(int [][] array, int size) {
        
        for (int i = 0 ; i < size ; i++) {
            for (int j = 0 ; j < size ; j++) {
                System.out.print( array[i][j] + " " );
            }
            System.out.println();
        }
    }
            
            
}
