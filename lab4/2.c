/*INPUT:An array of ten comma separated integers and search_element to search for
  OUTPUT:1 if element is found and 0 if not, along with number of comparisions made
  REMARKS: Used Linear search algorithm
*/
#include<stdio.h>
int main()
{
	int array[10];//array of ten integers
	int search_element=0;//Element to search for using Linear Search
	int comparisions=0,result=0;//comparisions stores number of comparisions;result stores 1 if element is found, else 0
	scanf("%d",&array[0]);
	for(int i=1;i<10;i++)//inputs comma separated integers and stores the values in an integer array
	{
		scanf(",%d",&array[i]);
	}
	scanf(" %d",&search_element);
	for(comparisions=0;comparisions<10;comparisions++)//Linear search 
	{
		if(search_element==array[comparisions])//if search element is found in array, then result is 1
		{
			result=1;
			comparisions++;
			break;// exits loops and prints result
		}
	}
	printf("%d %d",result,comparisions);//prints result and the number of comparisions made 
	return 0;
}
