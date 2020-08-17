#include <stdio.h>
#include <stdlib.h>
#define battery_capacity 100

struct car
{
	int type;
	float efficiency;
	float remaining_fuel;
	float e_capacity;	// in kW-h
	float range;
};

float range_calc(struct car* item)	//calculates the range of individual cars
{
	switch(item->type)
	{
		case 1 : return item->efficiency * item->remaining_fuel;
			break;
		case 2 : return item->remaining_fuel * item->e_capacity * 1000 / ((item->efficiency * 100));
			break;
		default : return 0.0;
			break;
	}
}

void print_range(struct car* car_arr , int N)	//prints the output after calculating range
{
		//If we want decreasing order of range
		// sort this array of struct car based on range property
	for(int i = N-1 ; i >=0 ; i--)
	{
		printf("Car %d: range = %.2f\n", i + 1 , car_arr[i].range);
	}
}

int main()
{
	int n; 
	scanf("%d",&n); 	   		 // inputs number of cars
	struct car car_arr[n];
	for(int i = 0 ;i < n; i++)   //stores car info in a struct car array
	{
		scanf("%d%f%f", &car_arr[i].type , &car_arr[i].efficiency , &car_arr[i].remaining_fuel);
		car_arr[i].e_capacity = battery_capacity;	// If capacity of each car is different, take this property as input
		car_arr[i].range = range_calc(&car_arr[i]);
	}
	print_range(car_arr, n);		
	return 0;
}