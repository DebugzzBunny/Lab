import java.util.ArrayList;

public class Purchasing
{
	private static double price_factor=1.5;
	
	void addBook(int year,float purchase_price)
	{
		Book new_book=new Book(year,(int)(price_factor*purchase_price));
		Store.getPurchaseList().add(new_book);
	}

	void change_price_factor(float new_value)
	{
		Purchasing.price_factor=new_value;
	}
}