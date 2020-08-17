#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv)//takes variable arguments
{
	int sum=0;
	for(int i=1;i<argc;i++)
	{
		sum+=atoi(argv[i]);//adds all inputs
	}
	printf("%d %d",argc-1,sum);//prints the sum
    return 0;
}
