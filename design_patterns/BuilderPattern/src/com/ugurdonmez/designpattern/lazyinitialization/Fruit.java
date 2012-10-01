/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ugurdonmez.designpattern.lazyinitialization;

import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;

/**
 *
 * @author ugurdonmez
 */
public class Fruit {
    
    private static Map<FRUIT_TYPE, Fruit> types = new HashMap<FRUIT_TYPE, Fruit> ();
    
    private Fruit(FRUIT_TYPE type) {
        
    }
    
    public static Fruit getFruitByTypeName(FRUIT_TYPE type){
        Fruit fruit;
        
        if(!types.containsKey(type)) {
            fruit = new Fruit(type);
            types.put(type, fruit);
        }
        else {
            fruit = types.get(type);
        }
        
        return fruit;
    }
    
    public static void showAll() {
        if(types.size() > 0) {
            System.out.println("Number of instances made = " + types.size());
            
            for (Entry<FRUIT_TYPE, Fruit> entry : types.entrySet()) {
                System.out.println( entry.getKey().toString() );
            }
        }
    }
    
}
