/*
 * Define a class Postfix that includes the static methods convertToPostfix
 * and evaluatePostfix
 */
package com.ugurdonmez.tutorials.datasturucture.pearson.chapter5;

import java.util.Scanner;
import java.util.Stack;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author ugur
 */
public class Solution {

    private static String computeBitwise(String value1, String value2, char op) throws Exception {

        if (op == '+') {
            int temp1 = Integer.parseInt(value1, 16);
            int temp2 = Integer.parseInt(value2, 16);
            int temp3 = temp1 + temp2;
            return (Integer.toHexString(temp3));
        } else if (op == '-') {
            int temp1 = Integer.parseInt(value1, 16);
            int temp2 = Integer.parseInt(value2, 16);
            int temp3 = temp1 - temp2;
            return (Integer.toHexString(temp3));
        } else if (op == '&') {
            int temp1 = Integer.parseInt(value1, 16);
            int temp2 = Integer.parseInt(value2, 16);
            int temp3 = temp1 & temp2;
            return (Integer.toHexString(temp3));
        } else if (op == '|') {
            int temp1 = Integer.parseInt(value1, 16);
            int temp2 = Integer.parseInt(value2, 16);
            int temp3 = temp1 | temp2;
            return (Integer.toHexString(temp3));
        } else if (op == '~') {
            int temp1 = Integer.parseInt(value1, 16);
            int temp2 = Integer.parseInt("FFFF", 16);
            int temp3 = temp1 ^ temp2;
            return (Integer.toHexString(temp3));
        } else if (op == 'X') {
            int temp1 = Integer.parseInt(value1, 16);
            int temp2 = Integer.parseInt(value2, 16);
            int temp3 = temp1 ^ temp2;
            return (Integer.toHexString(temp3));
        } else {
            throw new Exception("Unknown operant");
        }
    }

    public static String evaluatePostfixBitwise(String postfix) throws Exception {

        String[] str1Array = postfix.split(" ");

        Stack<String> valueStack = new Stack<String>();

        for (String s : str1Array) {
            if (s.equals("~")) {
                String value = valueStack.pop();
                valueStack.push(Solution.computeBitwise(value, value, '~'));
            } else if (s.equals("+")) {
                String value1 = valueStack.pop();
                String value2 = valueStack.pop();
                valueStack.push(Solution.computeBitwise(value2, value1, '+'));
            } else if (s.equals("-")) {
                String value1 = valueStack.pop();
                String value2 = valueStack.pop();
                valueStack.push(Solution.computeBitwise(value2, value1, '-'));
            } else if (s.equals("&")) {
                String value1 = valueStack.pop();
                String value2 = valueStack.pop();
                valueStack.push(Solution.computeBitwise(value1, value2, '&'));
            } else if (s.equals("|")) {
                String value1 = valueStack.pop();
                String value2 = valueStack.pop();
                valueStack.push(Solution.computeBitwise(value1, value2, '|'));
            } else if (s.equals("X")) {
                String value1 = valueStack.pop();
                String value2 = valueStack.pop();
                valueStack.push(Solution.computeBitwise(value1, value2, 'X'));
            } else {
                valueStack.push(s);
            }
        }
        
        if (valueStack.size() > 1) {
            throw new Exception();
        }

        return valueStack.peek();
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        String input = scanner.nextLine();

        String result;
        try {
            result = Solution.evaluatePostfixBitwise(input);
            String returnValue;

            int temp1 = Integer.parseInt(result, 16);
            int temp2 = Integer.parseInt("ffff", 16);
            int temp3 = Integer.parseInt("0000", 16);

            if (temp1 < temp3) {
                returnValue = "0000";
            } else if (temp1 > temp2) {
                returnValue = "ffff";
            } else {
                returnValue = Integer.toHexString(temp1);
            }

            if (returnValue.length() < 4) {
                int i = 4 - returnValue.length();
                while (i > 0) {
                    returnValue = "0" + returnValue;
                    i--;
                }
            }

            System.out.println(returnValue.toUpperCase());
        } catch (NumberFormatException ex) {
            System.out.println("0000");
        } catch (Exception ex) {
            System.out.println("ERROR");
        }



    }
}
