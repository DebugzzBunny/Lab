/*INPUT: Takes two strings s1 and s2 as input
  OUTPUT: Prints 1 if the strings aren't equal and zero if they are.
  REMARKS: Strings are stored using dynamic memory allocation
*/


#include<stdio.h>
#include<stdlib.h>
int strcmp(char *a,char *b);
int main()
{
	char *p=malloc(sizeof(char)*256);	//dynamically allocates memory for string 1
	char *q=malloc(sizeof(char)*256);   //dynamically allocates memory for string 2
	scanf("%s %s",p,q);                 // inputs both the strings
	printf("%d",strcmp(p,q));           // prints result by invoking strcmp function
	free(p);                            // frees memory allocated for string 1
	free(q);                            // frees memory allocated for string 2
	return 0;	           
}
int strcmp(char *a,char *b)
{
	int i=0;
	while((a[i]!='\0')||(b[i]!='\0'))
	{
		if(a[i]!=b[i])
		{
			return 1;                   // returns 1 if even a single character is different
		}
		i++;
	}
	return 0;                           // returns 0 if all characters are same
}
