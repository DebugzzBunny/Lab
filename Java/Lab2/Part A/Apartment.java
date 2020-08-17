
public class Apartment {
	Owner owner;
	int rent;

	Apartment(Owner owner, int rent){
		this.owner=owner;
		this.rent=rent;
	 }
	int getRent() {return this.rent; }
	Owner getOwner() {return this.owner; }
	
	
	public static void main(String[] args) {
		
		Owner owner1 = new Owner("Jeff", 40);
		Owner owner2 = new Owner("Mukesh", 50);
		Owner owner3 = new Owner("Bill", 60);
		
		Apartment a1 = new Apartment(owner1, 4000);
		Apartment a2 = new Apartment(owner2, 6000);
		Apartment a3 = new Apartment(owner1, 1000);
		Apartment a4 = new Apartment(owner3, 9000);
		
		// create an array of Apartments and initialize to the above 4
		Apartment arr[]=new Apartment[]{a1,a2,a3,a4};
		
		// find the apt with the hightest rent
		Apartment max_rent=new Apartment(null,-1);
		for(Apartment apt: arr)
		{
			if(max_rent.getRent()<apt.getRent())
			{
				max_rent=apt;
			}
		}
		System.out.println("Maximum rent is:"+max_rent.getRent());
		// print the name of its owner (to System.out) 
		
		System.out.println("Owner of the apt with max rent is:"+max_rent.owner.getName());
	}

}

class Owner {
	String name;
	int age;
	
	Owner(String name, int age)
	{
		this.name=name;
		this.age=age;
	}
	int getAge() { return this.age; }
	String getName() {return this.name; }
	
	
	
}