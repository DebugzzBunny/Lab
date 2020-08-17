/*INPUT: unsorted array of n elements and also array size 'n'.
  OUTPUT: sorted array in increasing order with number of times merge function has been invoked.
  REMARKS: using merge sorting algorithm*/
#include<stdio.h> 
int count=0; //count for number of times merge function is used.
void merge(long array[], int initial, int final) //function to merge the sorted arrays.
{
	count++; //increases count by 1. 
	long dummy[final - initial + 1]; //temporary array for storing sorted values.
	int middle= (initial+final)/2;
	int i = initial, j = middle+1, k = 0;
	while((i <= middle) && (j <= final)) //loop for merging two parts of the given array.
	{
		if(array[i] <= array[j]) //sorting the first half of the array.
		{
			dummy[k] = array[i];
			k += 1; 
			i += 1;
		}
		else //sorting the second half of the array.
		{
			dummy[k] = array[j];
			k += 1; 
			j += 1;
		}
	}
	while(i <= middle) //stores the remaining elements of the first half in the temporary array.
	{
		dummy[k] = array[i];
		k += 1; 
		i += 1;
	}
	while(j <= final) //stores the remaining elements of the second half in the temporary array.
	{
		dummy[k] = array[j];
		k += 1; 
		j += 1;
	}
	for(i = initial; i <= final; i += 1) //puts back the values from temporary array to the main array.
		{
			array[i] = dummy[i - initial];
		}
}

void merge_sort(long array[], int initial, int final) //recursive function to repeatedly call the merge function 
    if (initial < final) 
    { 
 
        int middle = (initial+final)/2; // stores the index of the middle element 
  
 
        merge_sort(array, initial, middle); //calls merge_sort to divide the left half of the current list
        merge_sort(array, middle+1, final);  //calls merge_sort to divide the right half of the current list
  
        merge(array, initial, final); 
    } 
} 
  

int main() 
{ 
	int n=0; 
    scanf("%d",&n); //takes input for the length of array.
	long array[n];
	scanf("%ld",&array[0]);
	for(int i=1;i<n;i++) //takes the input of array.
	{
		scanf(",%ld",&array[i]);
	}
      
     merge_sort(array, 0, n-1); //calling function for sorting the array.
  
    for (int i=0; i < n-1; i++) //prints sorted array. 
    {
       	printf("%ld ", array[i]);
    }
    printf("%ld ", array[n-1]);
    printf("\n"); 
    printf("%d",count); //prints count for the number of times merge function is used.
    return 0; 
} 
