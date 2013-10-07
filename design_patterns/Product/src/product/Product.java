/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package product;

import java.util.HashMap;

/**
 *
 * @author ugurdonmez
 */
public class Product {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        int product = 1;
        
        int n = 10;
        
        HashMap<Integer,Integer> upper_product = new HashMap<Integer, Integer>();
        
        for (int i = n ; i >=3 ; i-- ) {
            product *= i;
            upper_product.put(i, product);
        }
        
        System.out.println( "1 " + 2 * upper_product.get(3));
        
        int product_base = 1;
        
        for ( int i = 2 ; i <n ; i++ ) {
            product = product_base * upper_product.get(i+1);
            System.out.println(i + " " + product);
            product_base *= i; 
        }
        
        System.out.println(n + " " + product_base );
        
        
    }
}
