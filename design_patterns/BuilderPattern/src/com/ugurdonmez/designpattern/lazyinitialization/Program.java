/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ugurdonmez.designpattern.lazyinitialization;

/**
 *
 * @author ugurdonmez
 */
public class Program {
    
    public static void main(String [] args ) {
        Fruit.getFruitByTypeName(FRUIT_TYPE.BANANA);
        Fruit.showAll();
        Fruit.getFruitByTypeName(FRUIT_TYPE.APPLE);
        Fruit.showAll();
        Fruit.getFruitByTypeName(FRUIT_TYPE.BANANA);
        Fruit.showAll();
    }
    
}
