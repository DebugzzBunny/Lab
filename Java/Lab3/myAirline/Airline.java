package myAirline;
public class Airline
{
	private PriorityQueueFlight list;
	public Airline()
	{
		list=new PriorityQueueFlight();
	}
	public void addFlighttoAirline(String origin, String dest,int seat,int price)
	{
		Flight new_flight=new Flight(origin,dest,seat,price);
		this.list.addFlight(new_flight);
	}

	public Flight checkMinPrice()
	{
		return this.list.peek();
	}

	public void bookFlight()
	{
		Flight flight_obj=this.list.peek();
		if(flight_obj.getSeats()==0)
		{
			this.list.pop();
		}
		else
		{
			flight_obj.setSeats(flight_obj.getSeats()-1); 
		}
	}
}