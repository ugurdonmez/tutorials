/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ugurdonmez.careercup.queue.circularqueue;

/**
 *
 * @author uğur
 */
public class CircularQueueFull extends Exception {

    /**
     * Creates a new instance of
     * <code>CapacityFull</code> without detail message.
     */
    public CircularQueueFull() {
    }

    /**
     * Constructs an instance of
     * <code>CapacityFull</code> with the specified detail message.
     *
     * @param msg the detail message.
     */
    public CircularQueueFull(String msg) {
        super(msg);
    }
}
