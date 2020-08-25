import java.util.Scanner;


public class Test
{
	public static void main(String args[])
	{
		Store book_store=new Store();
		Scanner sc=new Scanner(System.in);
		int c=0;
		while(true)
		{
			int year=sc.nextInt();
			int cost=sc.nextInt();
			if((year==0) && (cost==0))
			{
				break;
			}
			book_store.addBookToStore(year,cost);
		}

		while(true)
		{
			int year=sc.nextInt();
			String id=sc.next();
			if((year==0) && (id.equals("0")))
			{
				break;
			}
			book_store.sellBookFromStore(id,year);
		}

		book_store.printSalesOfStore();
	}
}