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
public class LinkedList implements ILinkedList {
    
    private ListNode head;
    private int size;

    public LinkedList() {
        head = null;
        size = 0;
    }
    
    @Override
    public void insertAtBeginning(int value) {
        ListNode node = new ListNode(value, head);
        head = node;
        size++;
    }

    @Override
    public void insertAtEnd(int value) {
        
        ListNode current = head;
        
        for ( int i = 0 ; i < size-1 ; i++ ) {
            current = current.getNext();
        }
        
        ListNode node = new ListNode(value, null);
        current.setNext(node);
        
        size++;
        
    }

    @Override
    public void delete(int value) {
        
        ListNode current = head;
        ListNode prev = null;
        
        for ( int i = 0 ; i < size ; i++ ) {
            if ( current.getValue() == value ) {
                if ( current == head ) {
                    head = head.getNext();
                    size--;
                    return;
                }
                else {
                    prev.setNext(current.getNext());
                    size--;
                    return;
                }
            }
            else {
                prev = current;
                current = current.getNext();
            }
        }
        
        
    }

    @Override
    public ListNode search(int value) {
        
        ListNode current = head;
        
        for ( int i = 0 ; i < size ; i++ ) {
            if ( current.getValue() == value ) {
                return current;
            }
        }
        
        return null;
    }

    @Override
    public boolean isEmpty() {
        
        if ( size == 0 ) {
            return true;
        }
        else {
            return false;
        }
    }
    
    @Override
    public String toString() {
        
        StringBuilder buff = new StringBuilder();
        
        ListNode current = head;
        
        while ( current != null ) {
            buff.append(current.getValue()).append(" ");
            current = current.getNext();
        }
        
        return buff.toString();
    }
    
}
