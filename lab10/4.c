#include<stdio.h>
int main()
{
	FILE *f1;
	FILE *f2;
	FILE *f3;
	char str[100];//temporary string to copy data
   	f1 = fopen("file1.txt", "r");
   	f2 = fopen("file2.txt", "r");//opens the two files in r mode
   	f3= fopen("file3.txt", "w");// opens the third file in w mode
   	fgets(str,100,f1);//stores content of file1 in str
	fprintf(f3,"%s",str);// writes str into file3
    fclose(f3);

	f3= fopen("file3.txt","a");
	fgets(str,100,f2);//append content of file2 into file3
	fprintf(f3,"%s",str);
    fclose(f1);
   	fclose(f2);
  	fclose(f3);
  	return 0;
}
