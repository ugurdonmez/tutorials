/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ugurdonmez.designpattern.builderpattern;

/**
 *
 * @author ugurdonmez
 */
public abstract class PizzaBuilder {
    
    protected Pizza pizza;

    public Pizza getPizza() {
        return pizza;
    }
    
    public void createNewPizzaProduct() {
        pizza = new Pizza();
    }
    
    public abstract void buildDough();
    public abstract void buildSauce();
    public abstract void buildTopping();
    
}
