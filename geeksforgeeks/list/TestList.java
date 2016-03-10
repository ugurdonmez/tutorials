/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package list;

/**
 *
 * @author user
 */
public class TestList {
    
    public static void main(String [] args) {
        
        LinkedList list = new LinkedList();
        
        System.out.println(list);
        
        list.addLast(new Node(7));
        list.addFirst(new Node(0));
        list.addFirst(new Node(1));
        list.addFirst(new Node(2));
        list.addFirst(new Node(3));
        
        System.out.println(list);
        System.out.println(list);
        
        list.addLast(new Node(5));
        list.addFirst(new Node(6));
        
        System.out.println(list);
        System.out.println(list);
        
        // test addNodeToSortedList
        Node node = new Node(20);
        list = new LinkedList();
        list.addNodeToSortedList(node);
        System.out.println(list);
        
        list = new LinkedList();
        list.addLast(new Node(1));
        list.addLast(new Node(2));
        list.addLast(new Node(4));
        list.addNodeToSortedList(node);
        System.out.println(list);
        
        list = new LinkedList();
        list.addLast(new Node(100));
        list.addLast(new Node(200));
        list.addNodeToSortedList(node);
        System.out.println(list);
    }
    
}
