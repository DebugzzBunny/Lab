/*INPUT: Takes two strings s1 and s2 as input
  OUTPUT: Prints s, given by concatenation of s2 onto s1
  REMARKS: Strings are stored using dynamic memory allocation
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int strconcat(char *a, char *b, char* c)
{
	for(int i=0;i<strlen(a);i++)       // adds s1 to s
	{
		*(c+i)=*(a+i);
	}
	for(int i=1;i<=strlen(b);i++)       // adds s2 to s
	{
		*(c+i+strlen(a)-1)=*(b+i-1);
	}
	printf("%s",c);                       //prints s
	return 0;
}
int main()
{
	char *s1=malloc(sizeof(char)*256);	//dynamically allocates memory for string 1
	char *s2=malloc(sizeof(char)*256);  //dynamically allocates memory for string 2
	char *s=malloc(sizeof(char)*512);   //dynamically allocates memory for concatenated string
	scanf("%s %s",s1,s2);               // inputs both strings
	strconcat(s1,s2,s);
	/*for(int i=0;i<strlen(s1);i++)       // adds s1 to s
	{
		*(s+i)=*(s1+i);
	}
	for(int i=1;i<=strlen(s2);i++)       // adds s2 to s
	{
		*(s+i+strlen(s1)-1)=*(s2+i-1);
	}
	printf("%s",s);                       //prints s*/
	return 0;
}
