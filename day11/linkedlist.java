package day11;

class node {
    int value;
    node next;

    node(int data) {
        this.value = data;
        this.next = null;
    }

    public void printlist(node head) {
        node current = head;
        while (current != null) {
            System.out.println(current.value);
            if (current.next != null) {
                System.out.println(" : ");
            }
            current = current.next;
        }
        System.out.println(" : null");
    }
}

public class linkedlist {
    public static void main(String[] args) {
        node objnode1 = new node(1);
        node objnode2 = new node(2);
        node objnode3 = new node(3);
        node objnode4 = new node(4);
        node objnode5 = new node(5);

        objnode1.next = objnode2;
        objnode2.next = objnode3;
        objnode3.next = objnode4;
        objnode4.next = objnode5;

        node objhead = objnode1;

        objnode1.printlist(objhead);
    }
}
