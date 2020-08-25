package myAirline;
import java.util.ArrayList;


class PriorityQueueFlight
{
	private ArrayList<Flight> queue_of_flights;
	PriorityQueueFlight()
	{
		queue_of_flights=new ArrayList<>();
	}

	void addFlight(Flight new_flight)
	{
		this.queue_of_flights.add(new_flight);
	}

	Flight peek()
	{
		return Flight.minPrice(this.queue_of_flights);
	}

	Flight pop()
	{
		Flight min_flight=Flight.minPrice(this.queue_of_flights);
		this.queue_of_flights.remove(this.queue_of_flights.indexOf(min_flight));
		return min_flight;
	}

	boolean isEmpty()
	{
		if(this.queue_of_flights.size()==0)
			return true;
		return false;
	}

}