/*INPUT: Takes number of integers,n, and then inputs n integers 
  OUTPUT: Prints the numbers inputed.
  REMARKS: Numbers are stored using dynamic memory allocation
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=0;         //stores number of integers to be inputted
	scanf("%d\n",&n);
	int*p=malloc(sizeof(int)*n);// allocates memory dynamically for n integers
	scanf("%d",&p[0]);
	for(int i=1;i<n;i++)//inputs integers
	{
		scanf(" %d",&p[i]);
	}
	for(int i=0;i<n-1;i++)// prints the integers
	{
		printf("%d ",p[i]);
	}
	printf("%d",p[n-1]);
	free(p);         // frees the memory 
	return 0;
}
