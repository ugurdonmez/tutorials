/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package ugurdonmez.careercup.linkedlist;

/**
 *
 * @author ugur
 */
public class Test {
    
    public static void main(String args[]) {
        
        ILinkedList list = new LinkedList();
        
        System.out.println( list );
        
        list.insertAtBeginning(1);
        list.insertAtBeginning(2);
        list.insertAtBeginning(3);
        
        System.out.println( list );
        
        list.delete(3);
        
        System.out.println( list );
        list.delete(1);
        System.out.println( list );
        list.delete(2);
        System.out.println( list );
        
        list.insertAtBeginning(1);
        list.insertAtBeginning(2);
        list.insertAtBeginning(3);
        
        System.out.println( list );
        
        list.insertAtEnd(4);
        
        System.out.println( list );
        
        list.insertAtEnd(5);
        System.out.println( list );
        
        list.delete(5);
        System.out.println( list );
        
        list.delete(2);
        System.out.println( list );
        
    }
    
}
