#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	FILE* f1;//points to file1.txt
	FILE* f2;//points to file2.txt
	f1=fopen("file1.txt","w");//opens the files
	f2=fopen("file2.txt","w");
	system("date>file1.txt");// stores the output of date command in unix to file1
	sleep(5);// waits for 5 seconds
	system("date>file2.txt");//stores the date again in file2
	fclose(f1);
	fclose(f2);
	char c;
	f1 = fopen("file1.txt", "r"); //opens file1 in read mode
    	c = fgetc(f1); 
    	while (c != EOF) // prints the content
    	{ 
    	    printf ("%c", c); 
    	    c = fgetc(f1); 
   	} 
	f2 = fopen("file2.txt", "r");
        c = fgetc(f2);
        while (c != EOF)// prints the contents of file2
        {
            printf ("%c", c);
            c = fgetc(f2);
        }
	fclose(f1);
	fclose(f2);
	return 0;

}
