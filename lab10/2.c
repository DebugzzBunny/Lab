#include<stdio.h>
#include<stdarg.h>
void minprintf(char* str, ...)
{
	va_list list;//variable argument list
	char *p;
	int integer;
	char character;
	va_start(list,str);
	for(p=str;*p!='\0';p++)
	{
		if(*p!='%')// print untill '%' is detected
		{
			putchar(*p);
			continue;
		}
		switch(*++p)
		{
			case 'd':// if % is followed by d integer is to be printed
				integer = va_arg(list, int);
				char itoc[100];
				int x=0;
				while(integer!=0)// extracts each digit and stores them in itoc
				{
					int rem=integer%10;
					itoc[x]='0'+rem;
					integer=integer/10;
					x++;
				}	
				x--;
				while(x>=0)// prints the integer digit by digit
				{
					putchar(itoc[x]);
					x--;
				}
				break;
			case 'c':// prints the character
				character =(char) va_arg(list, int);
				putchar(character);
				break;
		}
	}
	va_end(list);

}
int main()// sample main function
{
    minprintf("%d %c %d %d",2,'c',4,10);
}
