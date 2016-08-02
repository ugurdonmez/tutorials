/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package graphs;

import java.util.HashSet;
import java.util.Set;

/**
 *
 * @author ugurdonmez
 */
public class Boggle {

    public static void main(String[] args) {
        b();
    }

    public static void b() {

        String[] dictionary = new String[]{"GEEKS", "FOR", "QUIZ", "GO"};

        char[][] boggle = new char[][]{{'G', 'I', 'Z'}, {'U', 'E', 'K'}, {'Q', 'S', 'E'}};

        boolean[][] visited = new boolean[3][3];
                

        Set<String> r = dft(0, 0, visited, boggle, 3);
        
        

        for (String s : r) {
            System.out.println(s);
        }
    }

    public static Set<String> dft(int x, int y, boolean[][] visited, char[][] boggle, int size) {

        if (x < 0 || y < 0 || x == size || y == size) {
            return null;
        }

        if (visited[x][y] == true) {
            return null;
        }

        visited[x][y] = true;
        // up
        Set<String> up = dft(x - 1, y, cloneArray(visited, size), boggle, size);
        // down
        Set<String> down = dft(x + 1, y, cloneArray(visited, size), boggle, size);
        // left
        Set<String> left = dft(x, y - 1, cloneArray(visited, size), boggle, size);
        // right
        Set<String> right = dft(x, y + 1, cloneArray(visited, size), boggle, size);

        // up
        Set<String> upRight = dft(x - 1, y + 1, cloneArray(visited, size), boggle, size);
        // down
        Set<String> upLeft = dft(x - 1, y - 1, cloneArray(visited, size), boggle, size);
        // left
        Set<String> downRight = dft(x + 1, y + 1, cloneArray(visited, size), boggle, size);
        // right
        Set<String> downLeft = dft(x + 1, y - 11, cloneArray(visited, size), boggle, size);

        Set<String> all = new HashSet<>();

        if (up != null) {
            for (String s : up) {
                all.add(boggle[x][y] + s);
            }
        }
        if (down != null) {
            for (String s : down) {
                all.add(boggle[x][y] + s);
            }
        }
        if (left != null) {
            for (String s : left) {
                all.add(boggle[x][y] + s);
            }
        }
        if (right != null) {
            for (String s : right) {
                all.add(boggle[x][y] + s);
            }
        }

        if (upRight != null) {
            for (String s : upRight) {
                all.add(boggle[x][y] + s);
            }
        }
        if (upLeft != null) {
            for (String s : upLeft) {
                all.add(boggle[x][y] + s);
            }
        }
        if (downRight != null) {
            for (String s : downRight) {
                all.add(boggle[x][y] + s);
            }
        }
        if (downLeft != null) {
            for (String s : downLeft) {
                all.add(boggle[x][y] + s);
            }
        }
        
        if (all.isEmpty()) {
            all.add( boggle[x][y] + "" );
        }

        return all;
    }
    
    public static boolean [][] cloneArray(boolean [][] array, int size) {
        boolean [][] newArray = new boolean[size][size];
        
        for (int i = 0 ; i < size ; i++) {
            for (int j = 0 ; j < size ; j++) {
                newArray[i][j] = array[i][j];
            }
        }
        
        return newArray;
    }

}
