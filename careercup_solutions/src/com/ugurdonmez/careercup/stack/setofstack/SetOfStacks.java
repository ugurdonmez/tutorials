/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package ugurdonmez.careercup.stack.setofstack;

import java.util.ArrayList;
import java.util.Stack;

/**
 *
 * @author ugur
 */
public class SetOfStacks {
    
    private ArrayList<Stack<Integer>> listOfStacks;
    
    private final int threshold = 20;
    
    private int currentStackSize;
    
    public SetOfStacks() {
        
        Stack<Integer> stack = new Stack<>();
        listOfStacks.add(stack);
        currentStackSize = 0;
        
    }
    
    private Stack<Integer> getCurrentStack() {
        return listOfStacks.get(listOfStacks.size() - 1);
    }
    
    public int pop() {
        
        Stack<Integer> currentStack = getCurrentStack();
        
        int returnValue = currentStack.pop();
        
        if (currentStack.isEmpty() ) {
            listOfStacks.remove(currentStack);
        }
        
        return returnValue;
        
    }
    
    public void push(int value) {
        
        Stack<Integer> currentStack = getCurrentStack();
        
        if ( currentStackSize < threshold && currentStack != null ) {
            currentStack.push(value);
            currentStackSize++;
        }
        else {
            Stack<Integer> stack = new Stack<>();
            stack.push(value);
            currentStackSize = 1;
            listOfStacks.add(stack);
        }
        
    }
    
}
