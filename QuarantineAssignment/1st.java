import java.util.LinkedList;

public class Queue<T>{
    LinkedList<T> list;

    public Queue(){
        list=new LinkedList<T>();
    }
    public void add(T element){
        list.add(element);
    }

    public T peek(){
        return  list.peek();
    }

    public T poll(){
        return list.poll();
    }

    public int size(){
        return list.size();
    }

    public String toString(){
        StringBuilder str=new StringBuilder();
        for(T element:list){
            str.append(element+" ");
        }
        return str.toString();
    }

    public static void main(String[] args) {
        Queue<String> stringQueue =new Queue<String>();
        stringQueue.add("First");
        stringQueue.add("Second");
        stringQueue.add("Third");
        stringQueue.add("Fourth");
        System.out.printf("Elements of queue : %s",stringQueue.toString());
        System.out.printf("Removed element : %s",stringQueue.poll());
        System.out.printf("Resultant queue: %s",stringQueue.toString());
        System.out.printf("Head of queue: %s",stringQueue.peek());
        System.out.printf("Size of queue: %s",stringQueue.size());
    }

}
