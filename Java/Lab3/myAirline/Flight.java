
package myAirline;
import java.util.ArrayList;

public class Flight
{
	private String origin;
	private String destination;
	private int seats;
	private int price;
	Flight(String origin,String destination,int seats,int price)
	{
		this.origin=origin;
		this.destination=destination;
		this.seats=seats;
		this.price=price;
	}

	static Flight minPrice(ArrayList<Flight> flights)
	{
		Flight min_price=flights.get(0);
		for(int i=0;i<flights.size();i++)
		{
			if(min_price.getPrice()>flights.get(i).getPrice())
			{
				min_price=flights.get(i);
			}
		}
		return min_price;
	}






	String getOrigin()
	{
		return this.origin;
	}
	String getDestination()
	{
		return this.destination;
	}
	int getSeats()
	{
		return this.seats;
	}
	int getPrice()
	{
		return this.price;
	}

	void setOrigin(String origin)
	{
		this.origin=origin;
	}
	void setDestination(String destination)
	{
		this.destination=destination;
	}
	void setSeats(int seats)
	{
		this.seats=seats;
	}
	void setPrice(int price)
	{
		this.price=price;
	}

}