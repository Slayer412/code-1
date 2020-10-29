import java.util.*;
class Queue<T>
{
	LinkedList<T> list;
	public Queue()
	{
		list=new LinkedList<T>();
	}
	public void add(T ele)
	{
		list.add(ele);
	}
	public 	T peek()
	{
		return list.peek();
	}
	public int size()
	{
		return list.size();
	}
	public void display()
	{
		for(T x:list)
		{
			System.out.print(" "+x);
		}
	}
	public static void main(String[] args)
	{
		Queue<String> que=new Queue<String>();
		que.add("first element");
		que.add("second element");
		que.add("third elelment");
		System.out.println("SIZE OF Queue "+que.size());
		System.out.println(que.peek());
		que.display();
	}
	
	
}
