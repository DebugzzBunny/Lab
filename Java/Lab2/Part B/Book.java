import java.util.*;

public class Book
{
	private static int current_year=0;
	private static int id_number=1;
	private String id;
	private int selling_price;
	private int sale_year;
	Book(int year,int selling_price)
	{
		if(year!=current_year)
		{
			current_year=year;
			id_number=1;
		}
		this.id=Integer.toString(current_year)+"-"+String.format("%06d",id_number);
		id_number++;
		this.selling_price=selling_price;
		this.sale_year=0;
	}
	String getId()
	{
		return this.id;
	}
	int getSalePrice()
	{
		return this.selling_price;
	}

	void setSaleYear(int year)
	{
		this.sale_year=year;
	}

	int getSaleYear()
	{
		return this.sale_year;
	}
}

