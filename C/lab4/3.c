/*INPUT:An array of ten comma separated integers and an element x to search for
  OUTPUT:1 if element is found and 0 if not, along with number of comparisions made
  REMARKS:Binary search algorithm is followed
*/
#include<stdio.h>
int main()
{
	int array[10];//array of ten integers
	int search_element=0;//Element to search for using Linear Search
	int result=0,count=0;//count stores number of comparisions;result stores 1 if element is found, else 0
	scanf("%d",&array[0]);
	for(int i=1;i<10;i++)//inputs comma separated integers and stores the values in an integer array
	{
		scanf(",%d",&array[i]);
	}
	scanf(" %d",&search_element);
	int initial=0;//starting point
	int final=9;// ending point
	int mid=0;// middle element required for binary search
	while(initial<=final)
	{
		mid=(final+initial)/2;
		if(array[mid]==search_element) // if mid element of the current subset of the list is equal to the element,then break the loop
		{
			count++;
			result=1;
			break;
		}
		else// dividing the current list into half
		{
			count++;
			if(search_element>array[mid])
			{	
				initial=mid+1;
			}
			else
			{	
				final=mid-1;
			}
		}
	}
	printf("%d %d",result,count);
		return 0;
}
