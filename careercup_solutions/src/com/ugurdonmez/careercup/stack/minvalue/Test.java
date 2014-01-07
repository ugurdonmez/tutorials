/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package ugurdonmez.careercup.stack.minvalue;

/**
 *
 * @author ugur
 */
public class Test {
    
    public static void main ( String args[] ) {
        
        IStackWithMinimumValue stack = new StackWithMinimumValue();
        
        // stack.push(-1);
        stack.push(0);
        stack.push(3);
        stack.push(1);
        stack.push(0);
        stack.push(-1);
        
        System.out.println(stack.min());
        
        stack.pop();
        
        System.out.println(stack.min());
        
    }
    
}
