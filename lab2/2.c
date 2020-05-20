/*INPUT:an integer 'num' which defines the range in which we have to find prime numbers
 OUTPUT: number of prime numbers below(including 'num') 'num'
REMARK:If the number entered is less than or equal to 1, then program outputs'0' */
#include<stdio.h>
int main()
{
	int num,prime;// num defines the range and prime stores the number of prime numbers within the specified range
	prime=0;num=0;
	scanf("%d",&num);

	if(num<=1)
	{
		printf("%d",0);
		return 0;
	}
	int list[num+1];  // an array to list all numbers within that range
	for(int d=0;d<=num+1;d++)
	{
		list[d]=0;
	}
	for(int i=2;i*i<=num;i++)
	{
		if(list[i]==0)
		{
			for(int j=i*i;j<=num;j+=i)// multiples of i are flagged
			{
				list[j]=1;
			}
		}
	}
	for(int k=2;k<=num;k++)
	{
		if(list[k]==0)// the prime numbers are counted up
		{
			prime++;
		}
	}
	printf("%d",prime);
	return 0;
}

