/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package ak;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

/**
 *
 * @author ugur
 */
public class Solution {
    
    public static void main(String [] args ) {
        Scanner scanner = new Scanner(System.in);
        
        HashMap<Integer, Integer> weights = new HashMap<Integer , Integer>();
        
        int size = scanner.nextInt();
        
        HashMap<Integer, Integer> out_size = new HashMap<Integer , Integer>();
        
        StringBuilder buff = new StringBuilder();
        
        
        for ( int i = 0 ; i < size-1 ; i++ ) {
            int start = scanner.nextInt();
            int end = scanner.nextInt();
            
            //System.out.println(start);
            
            if ( out_size.containsKey(start) ) {
                int new_size = out_size.get(start) + 1;
                out_size.remove(start);
                out_size.put(start, new_size);
            }
            else {
                out_size.put(start, 1);
            }
            buff.append(start);
            buff.append(" ");
            buff.append(end);
            buff.append("\n");
            
        }
        
        // System.out.println("out size");
        for ( int i : out_size.keySet() ) {
            // System.out.println( i + " " + out_size.get(i));
        }
        
        scanner = new Scanner(buff.toString());
        
        for (int i = 0 ; scanner.hasNextInt() ; i++) {
            int start = scanner.nextInt();
            int end = scanner.nextInt();
            
            if ( weights.containsKey(start) ) {
                if (weights.containsKey(end)) {
                    int weight = weights.get(end);
                    weight += weights.get(start) / out_size.get(start);
                    weights.remove(end);
                    weights.put(end, weight);
                }
                else {
                    weights.put(end, weights.get(start) / out_size.get(start));
                }
                
            }
            else {
                if (weights.containsKey(end)) {
                    weights.put(start, 0);
                    int weight = weights.get(end);
                    weight++;
                    weights.remove(end);
                    weights.put(end, weight);
                }
                else {
                    weights.put(start, 0);
                    weights.put(end, 1);
                }
            }
            
        }
        
        // System.out.println("weights");
        ArrayList<Integer> max_list = new ArrayList<Integer>();
        int max = 0;
        
        for ( int i : weights.keySet() ) {
            
            if ( weights.get(i) > max ) {
                max = weights.get(i);
                max_list.clear();
                max_list.add(i);
            }
            else if (weights.get(i)  == max) {
                max_list.add(i);
            }
            
            // System.out.println( i + " " + weights.get(i));
        }
        
        for ( int i : max_list ) {
            System.out.println(i);
        }
        
        
    }
    
}
