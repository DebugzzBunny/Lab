/*INPUT: Inputs two strings a nd b 
  OUTPUT: prints string 2 if the first string ends with string 2, else 0
  REMARKS: Stringss are stored using dynamic memory allocation
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int strend(char *s,char *t)
{
	
	for(int i=0;i<strlen(t);i++)// goes from the end of string 2 and string 1 for the length of string 2 
	{
		if(s[strlen(s)-1-i]!=t[strlen(t)-1-i])// if even a single character doesn't match, return 0
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	char *a=malloc(256*sizeof(char));
	char *b=malloc(256*sizeof(char));
	scanf("%s %s",a,b);//inputs a and b
	if(strend(a,b))
	{
		printf("%s",b);// prints string2 if the function returns 1, else prints 0
	}
	else
	{
		printf("%d",0);
	}
}
