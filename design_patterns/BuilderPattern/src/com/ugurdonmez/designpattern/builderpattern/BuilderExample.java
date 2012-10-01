/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ugurdonmez.designpattern.builderpattern;

/**
 *
 * @author ugurdonmez
 */
public class BuilderExample {
 
    public static void main(String[] args) {
        Waiter waiter = new Waiter();
        PizzaBuilder hawaiianPizzaBuilder = new HawaiianPizzaBuilder();
        PizzaBuilder spicyPizzaBuilder = new SpicyPizzaBuilder();
        
        waiter.setPizzaBuilder(spicyPizzaBuilder);
        waiter.constructPizza();
        
        System.out.println(waiter.getPizza());
        
        waiter.setPizzaBuilder(hawaiianPizzaBuilder);
        waiter.constructPizza();
        
        System.out.println(waiter.getPizza());
    }
    
}
