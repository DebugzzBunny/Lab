/*INPUT:10 comma-separated integers
  OUTPUT:Reverse order of the inputted integers separated by spaces
  REMARKS: nil 
*/
#include<stdio.h>
int main()
{	
	int array[10];// array to store the ten integers
	scanf("%d",&array[0]);// inputs comma-separated integers into the array
	for(int i=1;i<10;i++)
	{
		scanf(",%d",&array[i]);
	}
	for(int i=9;i>0;i--)// prints each element in reverse order with spaces in between
	{
		printf("%d ",array[i]);
	}
	printf("%d",array[0]);
	return 0;
}
