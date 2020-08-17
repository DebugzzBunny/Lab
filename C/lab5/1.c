/*INPUT: unsorted array of n elements.
  OUTPUT: sorted array in increasing order.
  REMARKS: sorting using bubble sorting algorithm*/
#include<stdio.h>
void bubble(long array[20]);
int main()
{	
	long a[20];// array to store the twenty integers
	scanf("%ld",&a[0]);// inputs comma-separated integers into the array
	for(int i=1;i<20;i++)
	{
		scanf(",%ld",&a[i]);
	}
	bubble(a);// calls function to sort the array
	
	return 0;	
}
void bubble(long array[20])
{
	long temp=0;// to store the element temporarily during swapping
	int count=0;// counts comparisons
	int swap=0;// counts number of swaps
	for(int i=0;i<19;i++)
	{
		for(int j=0;j<19-i;j++)
		{
			count++;
			if(array[j]>array[j+1])// if the next element is greater than the current, then swap them
			{
				swap++;// increment the number of swaps
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	for(int i=0;i<19;i++)// prints the sorted array
	{
		printf("%ld ",array[i]);
	}	
	printf("%ld\n",array[19]);
	printf("%d %d",swap,count);// prints the total number  of comparisons and swaps
}
