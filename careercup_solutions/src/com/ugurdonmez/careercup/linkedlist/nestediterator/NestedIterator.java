/*
 * Program an iterator for a Linked List which may include 
 * nodes which are nested within other nodes. 
 * i.e. (1)->(2)->(3(4))->((5)(6). 
 * Iterator returns 1->2->3->4->5->6
 */
package com.ugurdonmez.careercup.linkedlist.nestediterator;

import java.util.LinkedList;

/**
 *
 * It is not iterator 
 * Only print the values
 * 
 * @author uğur
 */
public class NestedIterator {
    
    
    public static void main (String args[]) {
        
        LinkedList<Object> mainList = new LinkedList<>();
        
        mainList.add("ugur");
        mainList.add("1");
        
        LinkedList<Object> second = new LinkedList<>();
        
        second.add("2");
        second.add("3");
        
        LinkedList<Object> third = new LinkedList<>();
        third.add(second);
        
        mainList.add(second);
        
        nestedLinkedListIterator(mainList);
        
    }
    
    /**
     * Assume that list consist of list or string of list
     * @param list 
     */
    public static void nestedLinkedListIterator (LinkedList<Object> list) {
        
        for (Object o : list ) {
            if ( o instanceof String ) {
                System.out.println(o);
            }
            else if ( o instanceof LinkedList) {
                nestedLinkedListIterator((LinkedList)o);
            }
        }
        
    }

}
