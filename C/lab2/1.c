/*
Problem 1: (Euclid’s Algorithm) Write a (C) program to input two
integers and print the GCD (Greatest Common Divisor) of the two numbers.
Note: If both the input numbers are 0, then the output should be “Invalid
input”.
Sample Input 1: 10 -15
Output 1: 5
Sample Input 2: 0 0
Output 2: Invalid input
Sample Input 3: 73 0
Output 2: 73
*/

/*INPUT:integers 'a' and 'b' are entered whose gcd is to be found
 OUTPUT: GCD of the entered numbers
REMARK:If the numbers entered are 0, then program outputs'Invalid input' */
#include<stdio.h>
int gcd;  //to store the GCD
int main()
{
	int GCD(int c,int d); // function to calculate GCD using Euclid's method
	int a,b;
	scanf("%d %d",&a,&b);// inputs the two numbers
	if(a<0)//to take absolute value of a and b
	{          
		a=-a;
	}
	if(b<0)
	{
		b=-b;
	}
	if(a==0&&b==0)
	{
		printf("Invalid input");
		return 0;
	}
	
	if(a==0)                           
	{
		printf("%d",b);
	}
	else if(b==0)
	{
		printf("%d",a);
	}
	else if(a>=b)
	{
		printf("%d",GCD(a,b));
	}
	else if(b>a)
	{
		printf("%d",GCD(b,a));
	}


}

int GCD(int c,int d)             //recursive function to calculate 					GCD
{
	gcd=d;
	int r=c%d;
	if(r==0)
	{
		return gcd;
	}
	gcd=c%d;
	GCD(d,r);
}


