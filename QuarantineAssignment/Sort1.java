import java.util.*;
class sort1 < T extends comparable<T> >
{	ArrayList<T> list=new ArrayList<T>();
	public void Ascending()
	{
		list.sort( new comparable<T>(){
			@Override
			public int comparable(T x,T y)
			{
		return x.compareTo(y);}});
	}
	public void Descending()
	{
		list.sort( new comparable<T>(){
			@Override
			public int comparable(T x,T y)
			{
		return y.compareTo(x);}});
	}
	public static void main(String arg[])
	{
		sort<Integer> arr=new sort<Integer>();	
		arr.add(3);
		arr.add(8);
		arr.add(2);
		arr.add(4);
		arr.add(1);
		arr.add(5);
		arr.add(7);
		arr.Ascending();
		for(int x:arr)
		{
			System.out.print(x+" ");
		}
}
	
	

	
	
}