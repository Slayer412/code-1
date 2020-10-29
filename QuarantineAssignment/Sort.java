package QuarantineAssignment;

import java.util.*;

public class Sort<T  extends Comparable<T> > {
    ArrayList<T> list;

    public Sort() {
        list=new ArrayList<T>();
    }

    public void insert(T element){
        list.add(element);
    }

    public void removeIndex(int index){
        list.remove(index);
    }
    public void removeNumber(Object object){
        list.remove(object);
    }

    public void sortAscending(){
       list.sort(new Comparator<T>() {
           @Override
           public int compare(T t, T t1) {
               return  t.compareTo(t1);
           }
       })		;
    }

    public void sortDescending(){
        list.sort(new Comparator<T>() {
            @Override
            public int compare(T t, T t1) {
                return t1.compareTo(t);
            }
        });
    }
    public String toString(){
        StringBuilder str=new StringBuilder();
        for(T element:list){
            str.append(element+" ");
        }
        return str.toString();
    }

    public static void main(String[] args) {
        Sort<Integer> numbers =new Sort<>();
        numbers.insert(10);
        numbers.insert(11);
        numbers.insert(9);
        numbers.insert(3);
        numbers.insert(50);
        numbers.insert(19);
        System.out.println("Numbers :"+numbers.toString());
        numbers.sortAscending();
        System.out.println("Ascending sort: "+numbers.toString());
        numbers.sortDescending();
        System.out.println("Descending sort: "+numbers.toString());
    }
}
