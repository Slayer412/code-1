package QuarantineAssignment;

public class GenericMethods {


    public static <T> void display(T[] array){
        for (T element: array) {
            System.out.printf(element+" ");
        }
        System.out.printf("\n");
    }

    public static <T> void swap(Pair<T> pair){
        T temp= pair.first;
        pair.first=pair.second;
        pair.second=temp;
    }

    static class Pair<T>{
        T first;
        T second;
        public Pair(T first, T second) {
            this.first = first;
            this.second = second;
        }
    }

    public static void main(String[] args) {
        Integer[] ints={1,2,3,4,5};
        Character[] chars={'R','A','V','I'};
        Float[] floats={1.0f,2.0f,3.0f,4.0f,5.0f};
        Double[] doubles={1.0,2.0,3.0,4.0,5.0};
        display(ints);
        display(chars);
        display(floats);
        display(doubles);
        Integer a=new Integer(1);
        Integer b= new Integer(2);
        Pair<Integer> pair=new Pair(a,b);
        System.out.printf("Value before swapping : %s %s \n",pair.first,pair.second);
        swap(pair);
        System.out.printf("Value after swapping : %s %s ",pair.first,pair.second);
    }
}
