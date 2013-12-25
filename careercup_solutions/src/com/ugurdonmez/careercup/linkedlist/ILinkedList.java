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
public interface ILinkedList {
    
    void insertAtBeginning(int value);
    void insertAtEnd(int value);
    
    void delete(int value);
    
    ListNode search(int value);
    
    boolean isEmpty();
    
}
