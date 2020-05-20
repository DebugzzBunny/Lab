/*INPUT:unsorted array of n elements.
  OUTPUT: sorted array in increasing order with number of swaps and comparisons.
  REMARKS: using selection sorting algorithm*/
#include<stdio.h>
void selection_sort(long array[20]);
int main()
{

	long a[20];
	scanf("%ld",&a[0]);// inputs the array
	for(int i=1;i<20;i++)
	{
		scanf(",%ld",&a[i]);
	}
	selection_sort(a);// calls the sorting function
	
}
void selection_sort(long array[20])
{
	int min=0;
	long tem=0;// temporary variable for swapping
	int swap=0;
	int count=0;
	for(int i=0;i<19;i++)
	{
		min=i;  // stores the index of minimum value, which is assumed to be the i element
		for(int j=i+1;j<20;j++)
		{
			count++;
			if(array[j]<array[min])//cahnges the min index if a  smaller element is found
			{
		
				min=j;
		

			}
		}
		swap++;	
		tem=array[min]; //swaps the smallest element in the current iteration with the ith element
		array[min]=array[i];
		array[i]=tem;
	
	}
	for(int i=0;i<19;i++)// prints the sorted array
	{
		printf("%ld ",array[i]);
	}

	printf("%ld\n",array[19]);

	printf("%d %d",swap,count);
}
