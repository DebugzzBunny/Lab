/*INPUT: Takes integers,n and b 
  OUTPUT: Prints the number n converted to base b.
  REMARKS: The resultant string is stored in a dynamically allocated string
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int itob(int n,char *s,int b)
{
	int rem=0;
	int i=0;
	while(n>0)
	{
		rem=n%b;
		if(rem<=9)// if remainder is less than 9 then the same character should be included
		{
			s[i]=(char)(rem+'0');
		}
		else
		{
			s[i]=(char)(rem-10+'a'); //adds corresponding alphabet to string                                                
		}
		n=n/b;
		i++;		
	}
	return 0;
}
int main()
{
	int number,base;
	char *a=malloc(256*sizeof(char));// dynamically allocated memory for string a
	scanf("%d %d",&number,&base);//inputs n and b
	if((base<=32)&&(base>=1))//base has constraints
	{
		itob(number,a,base);//function call
		for(int j=0;j<strlen(a)/2;j++)// reverses the string
		{
			char dummy=a[j];
			a[j]=a[strlen(a)-1-j];
			a[strlen(a)-1-j]=dummy;
		}		
		
		printf("%s",a);// prints the string
	}
	return 0;
}
