/*INPUT: Coordinates of the centre of two circles and their radius
  OUTPUT:'YES' if the two circles intersect and 'NO' if they don't
  REMARKS: if the radius entered is a negative integer, then print 'Invalid input*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int x1,x2,y1,y2,r1,r2; // accepts the coordinates and the radii of the two circles
	double lhs; // two variables to store the square of the distance between the centres and square of the sum of radii
	scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&r1,&r2); // takes user input
	if(r1<0||r2<0) // radii can only be positive
	{
		printf("Invalid input");
		return 0;
	}
	lhs=sqrt(pow((x2-x1),2)+pow((y2-y1),2)); // square of the distance between the centres of the two circles

	if((lhs<r1+r2)&&(lhs>abs(r1-r2))||lhs==r1+r2||lhs==abs(r1-r2))//'YES' if they touch internally/externally or if they have common area
	{
		printf("YES");
	}
	else
		printf("NO");
	return 0;
}
