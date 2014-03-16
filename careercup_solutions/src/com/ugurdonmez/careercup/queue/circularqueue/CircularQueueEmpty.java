/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ugurdonmez.careercup.queue.circularqueue;

/**
 *
 * @author uğur
 */
public class CircularQueueEmpty extends Exception {

    /**
     * Creates a new instance of
     * <code>CircularQueueEmpty</code> without detail message.
     */
    public CircularQueueEmpty() {
    }

    /**
     * Constructs an instance of
     * <code>CircularQueueEmpty</code> with the specified detail message.
     *
     * @param msg the detail message.
     */
    public CircularQueueEmpty(String msg) {
        super(msg);
    }
}
