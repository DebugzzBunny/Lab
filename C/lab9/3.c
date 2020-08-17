/*INPUT:Inputs name,roll number, age and marks of multiple students
 OUTPUT:Prints the name,roll number, age and marks of multiple students
REMARKS:Student profile is implemented through a structure
*/
#include<stdio.h>
int main()
{
	int n;// number of students
	scanf("%d",&n);
	struct student
	{
		char name[1000];// stores name
		char rnum[1000];// stores roll number
		int age;// stores age
		int marks;// stores marks
	};
	struct student list[n];// array of structures
	for(int i=0;i<n;i++)// takes input
	{
		scanf("%s %s %d %d",list[i].name,list[i].rnum,&list[i].age,&list[i].marks);
	}
	for(int i=0;i<n;i++)// prints the array of student profiles
	{
		printf("%s %s %d %d\n",list[i].name,list[i].rnum,list[i].age,list[i].marks);
	}
	return 0;
}