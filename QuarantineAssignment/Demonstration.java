import com.sun.xml.internal.fastinfoset.stax.factory.StAXOutputFactory;

import java.util.*;

public class Demonstration {
    public static void main(String[] args) {
        ArrayList<Integer> arrayList=new ArrayList<>();
        LinkedList<Integer> linkedList=new LinkedList<>();
        HashSet<String> hashSet=new HashSet<>();
        System.out.printf("For ArrayList class :%nInitially is ArrayList empty? : %b%n",arrayList.isEmpty());
        System.out.printf("Adding numbers 1 2 3 4 5 2%n");
        arrayList.addAll(Arrays.asList(1,2,3,4,5,2));
        System.out.printf("Resultant ArrayList : %s%n",arrayList.toString());
        System.out.printf("Adding element at index 2 : 7%n");
        arrayList.add(2,7);
        System.out.printf("Resultant ArrayList : %s%n",arrayList.toString());
        System.out.printf("Is number 3 present ? : %b%n",arrayList.contains(3));
        System.out.printf("Index of numbers 4 : %d%n",arrayList.indexOf(4));
        System.out.printf("Last index of number 2 : %d%n",arrayList.lastIndexOf(2));
        System.out.printf("Size of arrayList : %d%n%n",arrayList.size());
        System.out.printf("For LinkedList class :%nInitially is LinkedList empty? : %b%n",linkedList.isEmpty());
        linkedList.addAll(Arrays.asList(1,2,3,4,5,2));
        System.out.printf("Adding numbers 1 2 3 4 5 2%n");
        System.out.printf("Resultant LinkedList : %s%n",linkedList.toString());
        System.out.printf("Removed head element: %s%n",linkedList.poll());
        System.out.printf("Current head element : %s%n",linkedList.peek());
        System.out.printf("Removed last element: %s%n",linkedList.pollLast());
        System.out.printf("Current last element : %s%n",linkedList.peekLast());
        System.out.printf("Adding element at start : 7%n");
        linkedList.addFirst(7);
        System.out.printf("Adding element at end : 8%n");
        linkedList.addLast(8);
        System.out.printf("Resultant LinkedList : %s%n%n",linkedList.toString());
        System.out.printf("For HashSet class:%n");
        System.out.printf("Initially is hashSet empty? : %b%n",hashSet.isEmpty());
        System.out.printf("Adding elements \"India\" , \"South Africa\" , \"US\" %n");
        hashSet.addAll(Arrays.asList("India","South Africa","US"));
        System.out.printf("Resultant hashSet : %s%n",hashSet.toString());
        System.out.printf("Size of hashSet: %d%n",hashSet.size());
        System.out.printf("Adding duplicate element : \"US\" %n");
        hashSet.add("US");
        System.out.printf("Resultant hashSet : %s%n",hashSet.toString());
        System.out.printf("Size of hashSet: %d",hashSet.size());
    }
}
