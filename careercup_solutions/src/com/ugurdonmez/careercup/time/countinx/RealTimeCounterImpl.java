/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ugurdonmez.careercup.time.countinx;

import java.util.ArrayList;
import java.util.Date;

/**
 *
 * @author uğur
 */
public class RealTimeCounterImpl implements RealTimeCounter{

    private ArrayList<IncrementObject> list; // singleton should be used
    private Timer timer;

    public RealTimeCounterImpl() {
        list = new ArrayList<>();
        timer = new Timer();
    }
   
    @Override
    public void increment() {
        list.add(new IncrementObject(timer.time()));
    }

    @Override
    public int getCountInLastSecond() {
        
        return getCountInLastX(1000);
    }

    @Override
    public int getCountInLastMinute() {
        
        return getCountInLastX(60 * 1000);
    }

    @Override
    public int getCountInLastHour() {
        
        return getCountInLastX(60 * 60 * 1000);
    }

    @Override
    public int getCountInLastDay() {
        
        return getCountInLastX(24 * 60 * 60 * 1000);
    }
    
    private int getCountInLastX(long time ) {
        int count = 0;
        int size = list.size();
        Date date = new Date();
        
        for (int i = size -1 ; i >= 0 ; i-- ) {
            if ( (date.getTime() - list.get(i).getDate().getTime()) < time ) {
                count++;
            }
            else {
                break;
            }
        }
        
        return count;
    }
    
}
