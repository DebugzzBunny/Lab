import java.util.ArrayList;

public class Store
{
	private static ArrayList<Book> purchased_books=new ArrayList<Book>();
	private Purchasing purchase_dep;
	private Sales sales_dep;
	Store()
	{
		purchase_dep=new Purchasing();
		sales_dep=new Sales();
	}
	void addBookToStore(int year,int cost)
	{
		this.purchase_dep.addBook(year,cost);
	}

	void sellBookFromStore(String id,int year)
	{
		this.sales_dep.sellBook(id,year);
	}

	void printSalesOfStore()
	{
		this.sales_dep.printSales();
	}


	static ArrayList<Book> getPurchaseList()
	{
		return Store.purchased_books;
	}
}

