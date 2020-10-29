package QuarantineAssignment;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class IntegerList {
    public static void main(String[] args) {
        List<Integer> integerList= new ArrayList<>();
        System.out.printf("Initial list: %s%n",integerList);
        System.out.printf("Adding elements 1 2 3 4 5%n");
        integerList.addAll(Arrays.asList(1,2,3,4,5));
        System.out.printf("Resultant list : %s%n",integerList);
        System.out.printf("Adding at index 2 element : 7");
        integerList.add(2,7);
        System.out.printf("Resultant list : %s%n",integerList);
        System.out.printf("Removing element at index 3 : %d%n",integerList.remove(3));
        System.out.printf("Resultant list : %s%n",integerList);
        System.out.printf("Element at index 4 is : %s",integerList.get(4));
        System.out.printf("Replacing element at index 3 with value 10%n");
        integerList.set(3,10);
        System.out.printf("Resultant list : %s%n",integerList);

    }
}
