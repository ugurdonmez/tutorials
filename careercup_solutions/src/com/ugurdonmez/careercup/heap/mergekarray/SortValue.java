/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ugurdonmez.careercup.heap.mergekarray;

/**
 *
 * @author uğur
 */
public class SortValue implements Comparable<SortValue> {

    int value;
    int which_array;
    int index;

    public SortValue(int value, int which_array, int index) {
        this.value = value;
        this.which_array = which_array;
        this.index = index;
    }

    @Override
    public int compareTo(SortValue o) {
        return this.value - o.value;
    }
}
