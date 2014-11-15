/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package com.ugurdonmez.careercup.list.sorting;

/**
 *
 * @author ugur
 */




public class ListSorting {
    
    
    
    public ListNode sortList(ListNode head) {
        
        ListNode current;
        ListNode bigger = null;
        ListNode smaller = null;
        ListNode temp;
        ListNode pivot;
        
        if (head.getNext() == null) {
            return null;
        }
        
        pivot = head;
        
        current = head.getNext();
        
        while(current.getNext() != null) {
            
            if (current.getValue() > pivot.getValue() ) {
                // add to bigger
                temp = current;
                current = current.getNext();
                
                if ( bigger == null ) {
                    bigger = temp;
                    bigger.setNext(null);
                }
                else {
                    temp.setNext(bigger.getNext());
                    bigger = temp;
                }
            }
            else {
                // add to smaller
                temp = current;
                current = current.getNext();
                
                if ( smaller == null ) {
                    smaller = temp;
                    smaller.setNext(null);
                }
                else {
                    temp.setNext(smaller.getNext());
                    smaller = temp;
                }
            }
        }
        
        smaller = sortList(smaller);
        bigger = sortList(bigger);
        
        pivot.setNext(bigger);
        
        current = smaller;
        while( current.getNext() != null ) {
            current = current.getNext();
        }
        
        current.setNext(pivot);
        
        return smaller;
        
    }
    
    
    public static void main (String args[]) {
        
        ListNode node1 = new ListNode(5);
        ListNode node2 = new ListNode(7);
        ListNode node3 = new ListNode(1);
        
        node1.setNext(node2);
        
        
    }
    
    
}
