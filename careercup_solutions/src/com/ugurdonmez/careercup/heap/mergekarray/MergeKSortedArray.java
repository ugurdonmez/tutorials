/*
 * Given inputs from Google Search, you have K chunks. 
 * Each chunk is individually alphabetically ordered (apple, banana, cat) ... 
 * (*apple, *banan, *cat). You want to merge all chunks into a single list. 
 * How would you do it?
 */
package com.ugurdonmez.careercup.heap.mergekarray;

import java.util.PriorityQueue;

/**
 *
 * @author uğur
 */
public class MergeKSortedArray {
    
    public static void main(String args[]) {
        
        System.out.println("ugur");
        
        int arrays[][] = {{3,5,6},
                    {9,10,13},
                    {1,4,7},
                    {8,12,14},
                    {70,71,72}};
        
        int n = 3; // size of each array
        int k = 5; // how many array
        
        int lastArray[] = new int[n*k];
        
        
        PriorityQueue<SortValue> queue = new PriorityQueue<>();
        
        queue.add(new SortValue(arrays[0][0], 0, 0));
        queue.add(new SortValue(arrays[1][0], 1, 0));
        queue.add(new SortValue(arrays[2][0], 2, 0));
        queue.add(new SortValue(arrays[3][0], 3, 0));
        queue.add(new SortValue(arrays[4][0], 4, 0));
        
        int i = 0;
        SortValue sortValue;
        
        while( !queue.isEmpty()) {
            
            sortValue = queue.poll();
            lastArray[i] = sortValue.value;
            i++;
            int which_array = sortValue.which_array;
            int index = sortValue.index;
            index++;
            
            
            if (index < n) {
                queue.add(new SortValue(arrays[which_array][index], which_array, index));
            }
            
        }
        
        for (int j = 0 ; j < n * k ; j++ ) {
            System.out.println(lastArray[j]);
        }
        
        
        
    }
    
 
}
