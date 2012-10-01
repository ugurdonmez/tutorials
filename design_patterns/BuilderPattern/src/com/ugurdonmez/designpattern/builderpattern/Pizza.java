/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ugurdonmez.designpattern.builderpattern;

/**
 *
 * @author ugurdonmez
 */
public class Pizza {
    
    private String dough = "";
    private String sauce = "";
    private String topping = "";

    public void setDough(String dough) {
        this.dough = dough;
    }

    public void setSauce(String sauce) {
        this.sauce = sauce;
    }

    public void setTopping(String topping) {
        this.topping = topping;
    }

    public String getDough() {
        return dough;
    }

    public String getSauce() {
        return sauce;
    }

    public String getTopping() {
        return topping;
    }
    
    
    
   @Override
   public String toString(){
       return this.getDough() + " " + this.getSauce() + " " + this.getTopping();
   }
    
}
