/*INPUT:Inputs two complex numbers
 OUTPUT:Prints the sum,difference and product of the two complex numbers
REMARKS:Complex numbers are stored through structures
*/
#include<stdio.h>
int main()
{
	struct complex
	{
		float real;// stores real part
		float imag;// stores imaginary part
	};
	struct complex x;//first complex number
	struct complex y;// second complex number
	scanf("%f %f",&x.real,&x.imag);//takes input
	scanf("%f %f",&y.real,&y.imag);
	printf("%.2f + %.2fi\n",(x.real+y.real),(y.imag+x.imag));//prints their sum
	printf("%.2f + %.2fi\n",(x.real-y.real),(x.imag-y.imag));//prints their difference
	printf("%.2f + %.2fi",(x.real*y.real-x.imag*y.imag),(y.imag*x.real+x.imag*y.real));//prints their product
	return 0;
}