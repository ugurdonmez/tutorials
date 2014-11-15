/*
 * given 2 Dimensional array
 * I/P -- String[][] input = { { "abc", "def", "gh" },
 * { "f", "g" },
 * { "qrt","xyz","pqr" } };
 * 
 * Program shd return a 2-D Array with
 * O/P -- { { "abcfqrt", "abcfxyz", "abcfpqr" ,abcgqrt and so on ..
 * 
 */
package ugurdonmez.careercup.array.twodimmerge;

/**
 *
 * @author uğur
 */
public class TwoDimensionMerge {

    public static void main(String asd[]) {

        String[][] input = {{"abc", "def", "gh"},
            {"f", "g"},
            {"qrt", "xyz", "pqr"},
            {"ugur","1"}};        
        
        for (int i = 0 ; i < input.length-1 ; i++ ) {
            input[i+1] = merge(input[i], input[i+1]);
        }
        
        for ( int i = 0 ; i < input[input.length-1].length ; i++ ) {
            System.out.println(input[input.length-1][i]);
        }

    }
    
    public static String [] merge (String [] input1, String [] input2) {
        
        String [] output = new String[input1.length * input2.length];
        
        int i = 0;
        
        for (int j = 0 ; j < input1.length ; j++ ) {
            for (int k = 0 ; k < input2.length ; k++ ) {
                output[i++] = input1[j] + input2[k];
            }
        }
        
        return output;
        
    } 
}
