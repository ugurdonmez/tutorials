/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ugurdonmez.designpattern.multiton;

import java.util.HashMap;
import java.util.Map;

/**
 *
 * @author ugurdonmez
 */
public class FooMultiton {
    
    private static final Map<Object, FooMultiton> instances = new HashMap<Object, FooMultiton>();
    
    private FooMultiton(){
        
    }
    
    public static FooMultiton getInstance(Object key) {
        
        FooMultiton instance = instances.get(key);
        
        if (instance == null) {
            synchronized(instance) {
                
                instance = instances.get(key);
                
                if(instance == null ) {
                    instance = new FooMultiton();
                    instances.put(key, instance); 
                }
            }
        }
        
        return instance;
    }
    
}
