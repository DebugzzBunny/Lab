#include<stdio.h>
int main()
{
	int a=0,b=0;// stores degrees of two polynomials
	scanf("%d",&a);
	int c1[a+1];// stores coefficients of polynomial 1
	for(int i=0;i<a+1;i++)
	{
		scanf(" %d",&c1[i]);
	}
	
	scanf("%d",&b);
	int c2[b+1];// stores the coefficients of polynomial 2
        for(int i=0;i<b+1;i++)
        {
                scanf(" %d",&c2[i]);
        }
	int degree=0;
	int product[a+b+1];//stores coefficient of product
	if(a>b)// adds the terms of same degree and stores the coefficients in array added of appropriate size
	{
		degree=a;
		int added[a+1];
		int p=a-b;
		for(int i=0;i<a+1;i++)
		{
			added[i]=c1[i];
		}
		printf("%d",degree);
		for(int i=0;i<b+1;i++)
		{
			added[p]+=c2[i];
			p++;
		}
                for(int i=0;i<a+1;i++)
                {
                        printf(" %d",added[i]);
                }
	}
	else
	{
		degree=b;
		printf("%d",degree);
		int added[b+1];
		int p=b-a;
                for(int i=0;i<b+1;i++)
                {       
                        added[i]=c2[i];
                }
        	for(int i=0;i<a+1;i++)
		{
			added[p]+=c1[i];
			p++;
		}
		for(int i=0;i<b+1;i++)
		{
			printf(" %d",added[i]);
		}
	}
	printf("\n");
	for(int i=0;i<a+b+1;i++)// initialises the product's coefficients to 0
	{
		product[i]=0;
	}
	printf("%d",a+b);// prints the degree of the product polynomial
        for(int i=0;i<a+1;i++)
        {
                for(int j=0;j<b+1;j++)
		{
			product[i+j]+=c1[i]*c2[j];// stores the coefficients of product at appropriate position
		}

        }
	for(int i=0;i<a+b+1;i++)
	{
		printf(" %d",product[i]);// prints the product's coefficients
	}
	return 0;
}

