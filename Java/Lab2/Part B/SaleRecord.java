public class SaleRecord
{
	private double revenue[];
	private int sale_year;
	SaleRecord(int sale_year)
	{
		this.revenue=new double[3];
		this.sale_year=sale_year;
	}

	void setSaleYear(int year)
	{
		this.sale_year=year;
	}

	int getSaleYear()
	{
		return this.sale_year;
	}

	void addRevenue(int index,float value)
	{
		this.revenue[index]+=value;
	}

	double getRevenue(int index)
	{
		return this.revenue[index];
	}
}