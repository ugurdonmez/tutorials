/*
 * Define a class Postfix that includes the static methods convertToPostfix
 * and evaluatePostfix
 */
package com.ugurdonmez.tutorials.datasturucture.pearson.chapter5;

import java.util.Stack;

/**
 *
 * @author ugur
 */
public class Postfix {
    

    private static int precedence(Character op) throws Exception {
        if (op == '^' ) {
            return 3;
        }
        else if (op == '*' || op == '/') {
            return 2;
        }
        else if ( op == '+' || op == '-' ) {
            return 1;
        }
        else if ( op == '(' || op == ')') {
            return 0;
        }
        else {
            throw new Exception("Unknown operant");
        }
        
    }
    
    public static String convertToPostfix(String infix) throws Exception {
        
        StringBuilder postfix = new StringBuilder();
        
        Stack<Character> operatorStack = new Stack<Character>();
        
        for (Character c : infix.toCharArray() ) {
            if (Character.isDigit(c)) {
                postfix.append(c);
                postfix.append(" ");
            }
            else if (c == '^') {
                operatorStack.push(c);
            }
            else if (c == '+' || c == '-' || c == '*' || c == '/' ) {
                while( !operatorStack.isEmpty() && Postfix.precedence(c) <= Postfix.precedence(operatorStack.peek()) ) {
                    postfix.append(operatorStack.pop());
                    postfix.append(" ");
                }
                operatorStack.push(c);
            }
            else if (c == '(') {
                operatorStack.push(c);
            }
            else if (c == ')') {
                Character topOperator = operatorStack.pop();
                while(topOperator != '(') {
                    postfix.append(topOperator);
                    postfix.append(" ");
                    topOperator = operatorStack.pop();
                }
            }
        }
        
        while(!operatorStack.isEmpty()) {
            postfix.append(operatorStack.pop());
            postfix.append(" ");
        }
        
        return postfix.toString();
    }
    
    private static int compute(int value1 , int value2 , char op) throws Exception {
        
        if ( op == '+') {
            return value1 + value2;
        }
        else if ( op == '-') {
            return value1 - value2;
        }
        else if ( op == '*') {
            return value1 * value2;
        }
        else if ( op == '/') {
            return value1 / value2;
        }
        else if ( op == '^') {
            return (int)Math.pow(value1, value2);
        } 
        else {
            throw new Exception("Unknown operant");
        }
        
    }
    
    public static int evaluatePostfix(String postfix) throws Exception {
        
        Stack<Integer> valueStack = new Stack<Integer>();
        
        for (Character c : postfix.toCharArray() ) {
            if (Character.isDigit(c)) {
                valueStack.add(Integer.parseInt(c.toString()));
            }
            else if (c == '+' || c == '-' || c == '*' || c == '/' ) {
                int op1 = valueStack.pop();
                int op2 = valueStack.pop();
                valueStack.push(Postfix.compute(op1, op2, c));
            }
        }
        
        return valueStack.peek();
    }
    
    public static void main (String [] args) throws Exception {
        
        String infix = "5+2";
        System.out.println(infix);
        System.out.println(Postfix.convertToPostfix(infix));
        System.out.println(Postfix.evaluatePostfix(Postfix.convertToPostfix(infix)));
        
        infix = "5+2*1";
        System.out.println(infix);
        System.out.println(Postfix.convertToPostfix(infix));
        System.out.println(Postfix.evaluatePostfix(Postfix.convertToPostfix(infix)));
        
        infix = "5/2*(4+(2-1))";
        System.out.println(infix);
        System.out.println(Postfix.convertToPostfix(infix));
        System.out.println(Postfix.evaluatePostfix(Postfix.convertToPostfix(infix)));
    }
    
}
