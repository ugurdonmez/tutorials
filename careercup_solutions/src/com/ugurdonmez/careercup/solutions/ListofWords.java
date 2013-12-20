/*
 * Write a program to return list of words (from the given list of words) 
 * that can be formed from the list of given characters. 
 * This is like Scribble game. Say for example the given 
 * characters are ('a' , 'c' , 't' } and list the 
 * words are {'cat', 'act', 'ac', 'stop' , 'cac'}. 
 * The program should return only the words that can be 
 * formed from given letters. Here the output 
 * should be {'cat', 'act', 'ac'}.
 */
package com.ugurdonmez.careercup.solutions;

import java.util.ArrayList;

/**
 *
 * @author ugur
 */
public class ListofWords {

    public static void main(String args[]) {

        ArrayList<Character> listOfChars = new ArrayList<>();
        ArrayList<String> listOfWords = new ArrayList<>();

        listOfChars.add('a');
        listOfChars.add('c');
        listOfChars.add('t');

        listOfWords.add("cat");
        listOfWords.add("act");
        listOfWords.add("ac");
        listOfWords.add("stop");

        for (String word : listOfWords) {

            char arrayChar[] = word.toCharArray();

            ArrayList<Character> characterList = new ArrayList<>();
            for (char c : arrayChar) {
                characterList.add(c);
            }

            for (Character c : listOfChars ) {
                characterList.remove(  c );
            }
            
            if ( characterList.isEmpty() ) {
                System.out.println(word);
            }
        }

    }

}
