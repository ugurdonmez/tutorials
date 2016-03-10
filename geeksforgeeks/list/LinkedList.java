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
public class LinkedList {
    
    private Node head;
    private int size;

    public LinkedList() {
        this.head = null;
        this.size = 0;
    }

    public Node getHead() {
        return head;
    }

    public void setHead(Node head) {
        this.head = head;
    }

    public int getSize() {
        return size;
    }

    public void setSize(int size) {
        this.size = size;
    }
    
    public void incrementSize() {
        this.size++;
    }
    
    public boolean isEmpty() {
        if (this.getSize() == 0) {
            return true;
        } else {
            return false;
        }
    }
    
    public void addFirst(Node node) {
        node.setNext(this.getHead());
        this.setHead(node);
        this.incrementSize();
    }
    
    public void addLast(Node node) {
        Node head = this.getHead();
        
        if (this.isEmpty()) {
            this.incrementSize();
            this.setHead(node);
            return;
        }
        
        while (head != null && head.getNext() != null) {
            head = head.getNext();
        }
        
        head.setNext(node);
        this.incrementSize();
    }
    
    @Override
    public String toString() {
        
        StringBuilder buf = new StringBuilder();
        
        Node node = this.getHead();
        while(node != null) {
            buf.append(node.getData()).append(" ");
            node = node.getNext();
        }
        
        return buf.toString();
    }
    
    public void addNodeToSortedList(Node node) {
        if (this.isEmpty()) {
            this.addFirst(node);
            return;
        }
        
        Node it = this.getHead();
        
        if (node.getData() < it.getData()) {
            this.addFirst(node);
            return;
        }
        
        while (it.getNext() != null && it.getNext().getData() < node.getData()) {
            it = it.getNext();
        }
        
        // iterate whole list from beginning (improve)
        if (it == null) {
            this.addLast(node);
        }
        
        node.setNext(it.getNext());
        it.setNext(node);
        this.incrementSize();
    }
}
