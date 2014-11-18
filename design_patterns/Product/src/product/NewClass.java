/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package product;

/**
 *
 * @author ugurdonmez
 */
public class NewClass {
    
    public static void main(String []args){
        System.out.println("Hello World");
        
        String str = "asdfg";
        
        StringBuilder buf = new StringBuilder();
        
        for (char c : str.toCharArray() ) {
            buf.append(c);
            buf.append('#');
        }
        
        buf.deleteCharAt(buf.length()-1);
        
        return buf.toString();
        
        
     }
    
    
}
