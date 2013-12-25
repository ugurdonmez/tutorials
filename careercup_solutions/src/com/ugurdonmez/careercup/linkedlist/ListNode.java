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
public class ListNode {

    private int value;
    private ListNode next;

    public ListNode() {
    }

    public ListNode(int value, ListNode next) {
        this.value = value;
        this.next = next;
    }

    public int getValue() {
        return value;
    }

    public void setValue(int value) {
        this.value = value;
    }

    public ListNode getNext() {
        return next;
    }

    public void setNext(ListNode next) {
        this.next = next;
    }

}
