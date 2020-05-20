/*INPUT:unsorted array of n elements.
  OUTPUT: sorted array in increasing order.
  REMARKS: using quick sorting algorithm*/
#include<stdio.h>
int pivot=0; 
int partition(long array[],int start,int end);
void quicksort(long array[], int start, int end);
#define swap(a,b) int temp=a;a=b;b=temp;
int partition(long array[],int start,int end)
{
	int i=start;
	for(int x=start;x<end;x++)
	{
		if(array[x]<=array[end])
		{
			swap(array[x],array[i]);
			i++;
		}
	}
	swap(array[i],array[end]);
		return i;	
}
int main() 
{ 
	int n=0;
    scanf("%d\n",&n);
	long array[n];
	scanf("%ld",&array[0]);
	for(int i=1;i<n;i++)
	{
		scanf(",%ld",&array[i]);
	}
    int temp=array[n-1];      
    int pi=0;
    quicksort(array, 0, n-1); 
  	for(int i=0;i<n;i++)
  	{
  		if(temp==array[i])
  		{
  			pi=i;
  			break;
  		}
  	}
    for (int i=0; i < n-1; i++) 
        printf("%ld ", array[i]);
    printf("%ld ", array[n-1]); 
    printf("\n"); 
    printf("%d",pi);
   
    return 0; 
} 

void quicksort(long array[], int start, int end) 
{ 
    if (start < end) 
    {   
    	pivot=partition(array,start,end);
        quicksort(array, start,pivot-1); 
        quicksort(array, pivot+1, end); 
    } 
} 



