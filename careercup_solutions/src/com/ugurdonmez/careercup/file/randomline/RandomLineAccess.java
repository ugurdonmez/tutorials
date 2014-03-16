/*
 * 
 * Write code to return a random line from a file of unknown size 
 * and variable length rows
 */
package com.ugurdonmez.careercup.file.randomline;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Random;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author uğur
 */
public class RandomLineAccess {

    public static void main(String args[]) throws FileNotFoundException, IOException {

        System.out.println("ugur");
        // createRandomFile();
        
        File file = new File("random.txt");
        BufferedReader reader = new BufferedReader(new FileReader(file));
        
        Random random = new Random();
        int randomNumber = random.nextInt(10000);
        
        String line = null;
        
        System.out.println(randomNumber);
        
        for (int i = 0 ; i < randomNumber ; i++ ) {
            line = reader.readLine();
            if ( line == null ) {
                reader.close();
                reader = new BufferedReader(new FileReader(file));
                line = reader.readLine();
            }
        }
        
        System.out.println(line);
        
        
    }

    public static void createRandomFile() {
        
        BufferedWriter bufferedWriter = null;
        try {
            File file = new File("random.txt");
            bufferedWriter = new BufferedWriter(new FileWriter(file));
            
            for (int i = 0 ; i < 100 ; i++) {
                bufferedWriter.write(i + "\n");
            }
            
        } catch (IOException ex) {
            Logger.getLogger(RandomLineAccess.class.getName()).log(Level.SEVERE, null, ex);
        } finally {
            try {
                bufferedWriter.close();
            } catch (IOException ex) {
                Logger.getLogger(RandomLineAccess.class.getName()).log(Level.SEVERE, null, ex);
            }
        }



    }
}
