import java.util.ArrayList;

public class Sales
{
	private ArrayList<Book> sold_books;

	private ArrayList<SaleRecord> selling_year_array;

	Sales()
	{
		sold_books=new ArrayList<Book>();
		selling_year_array=new ArrayList<SaleRecord>();
	}

	void sellBook(String id,int sale_year)
	{
		int flag=0;
		ArrayList<Book> list=Store.getPurchaseList();
		int selling_price=0;
		for(int i=0;i<list.size();i++)
		{
			if(id.equals(list.get(i).getId()))
			{
				selling_price=list.get(i).getSalePrice();
				list.get(i).setSaleYear(sale_year);
				this.sold_books.add(list.get(i));
			}
		}

		int purch_year=Integer.parseInt(id.substring(0,4));

		
		for(int i=0;i<this.selling_year_array.size();i++)
		{
			if(this.selling_year_array.get(i).getSaleYear()==sale_year)
			{
				if(sale_year-purch_year<=3)
				{
					this.selling_year_array.get(i).addRevenue(sale_year-purch_year,selling_price);
				}
				flag=1;
			}
		}
		if(flag==0)
		{

			SaleRecord new_year=new SaleRecord(sale_year);
			if(sale_year-purch_year<=3)
			{
				new_year.addRevenue(sale_year-purch_year,selling_price);
			}

			if((this.selling_year_array.size()==0)||(this.selling_year_array.get(0).getSaleYear()>sale_year))
			{
				this.selling_year_array.add(0,new_year);
			}
			else{
				for(int i=this.selling_year_array.size()-1;i>=0;i--)
				{
					if(this.selling_year_array.get(i).getSaleYear()<sale_year)
					{
						this.selling_year_array.add(i+1,new_year);
					}
				}
			}
			
		}

		
	}

	void printSales()
	{
		for(SaleRecord year_obj: selling_year_array)
		{
			System.out.println(year_obj.getSaleYear()+" "+(int)year_obj.getRevenue(0)+" "+(int)year_obj.getRevenue(1)+" "+(int)year_obj.getRevenue(2));
		}
	}



}


