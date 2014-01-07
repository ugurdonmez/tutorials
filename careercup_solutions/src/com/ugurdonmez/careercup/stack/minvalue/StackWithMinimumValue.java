/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package ugurdonmez.careercup.stack.minvalue;

import java.util.EmptyStackException;
import java.util.Stack;

/**
 *
 * @author ugur
 */
public class StackWithMinimumValue implements IStackWithMinimumValue{
    
    private Stack<Integer> stack;
    private Stack<Integer> minStack;

    public StackWithMinimumValue() {
        
        stack = new Stack<>();
        minStack = new Stack<>();
        
    }
    
    @Override
    public void push(int value) {
        
        stack.push(value);
        
        if ( minStack.isEmpty() || value <= minStack.peek() ) {
            minStack.push(value);
        }
    }

    @Override
    public int pop() {
        
        if ( stack.isEmpty() ) {
            throw new EmptyStackException();
        }
        
        if ( stack.peek() == minStack.peek() ) {
            minStack.pop();
        }
        
        return stack.pop();
        
    }

    @Override
    public int min() {

        if ( stack.isEmpty() ) {
            throw new EmptyStackException();
        }
        
        return minStack.peek();
    
    }
    
    
    
}
