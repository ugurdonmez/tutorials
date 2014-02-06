/*
 * Implement a circular queue of integers of 
 * user-specified size using a simple array. 
 * Provide routines to initialize(), enqueue() and dequeue() the queue. 
 * Make it thread safe.
 */
package com.ugurdonmez.careercup.queue.circularqueue;

/**
 *
 * @author uğur
 */
public class CircularQueue {
    
    private int size;
    private int capacity;
    
    private int [] array;
    
    private int headIndex;
    private int tailIndex;
    
    public CircularQueue(int capacity) {
        
        this.capacity = capacity;
        
        array = new int[capacity];
        headIndex = 0;
        tailIndex = 0;
        size = 0;
    }
    
    public synchronized void enqueue (int value) throws CircularQueueFull {
        
        if ( size == capacity ) {
            throw new CircularQueueFull();
        }
        
        array[headIndex] = value;
        headIndex++;
        
        if (headIndex == capacity) {
            headIndex = 0;
        }
        
        size++;
    }
    
    public synchronized int dequeue() throws CircularQueueEmpty {
        
        if (size == 0 ) {
            throw new CircularQueueEmpty();
        }
        
        int return_value = array[tailIndex];
        tailIndex++;
        
        if(tailIndex == capacity ) {
            tailIndex = 0;
        }
        
        size--;
        
        return return_value;
    }
    
}
