/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ugurdonmez.careercup.time.countinx;

/**
 *
 * @author uğur
 */
public interface RealTimeCounter {
    
    void increment();
    int getCountInLastSecond();
    int getCountInLastMinute();
    int getCountInLastHour();
    int getCountInLastDay();
    
}
