/*INPUT: Takes two floats and a character as input (operands and operator)
  OUTPUT: Prints the result of the expression
  REMARKS: implemented through multiple functions using function pointers
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
float add(float a, float b)// adds a and b
{
	return a+b;
}
float sub(float a, float b)// subtracts b from a
{
	return a-b;
}
float multiply(float a, float b)// returns their product
{
	return a*b;
}
float divide(float a, float b)// returns the quotient assuming b is not 0
{
	return a/b;
}
int main()
{
	float a,b=0.0;
	char operator;
	char oplist[]={'+','-','*','/'};// array of operators
	float (*funcPoint[])(float,float)={add,sub,multiply,divide};// function array
	scanf("%f %f %c",&a,&b,&operator);
	for(int i=0;i<5;i++)
	{
		if(oplist[i]==operator)
		{
			printf("%.4f",funcPoint[i](a,b));// chooses appropriate function form function array matching operator character
			break;
		}
	}
	return 0;
}
