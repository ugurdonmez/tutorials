/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package ugurdonmez.careercup.hashmap;

import java.util.HashMap;

/**
 *
 * @author ugur
 */
public class Test {
    
    public static void main(String args[]) {
        
        HashMap<String,String> map = new HashMap<>();
        
        map.put("doc", "application/msword");
        map.put("dot", "application/msword");
        map.put("docx","application/vnd.openxmlformats-officedocument.wordprocessingml.document");
        
        System.out.println(map.get("asd"));
        System.out.println(map.get("docx"));
        
    }
    
}
