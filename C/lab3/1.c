/*
Problem 1: (Intersecting Circles) Given two circles with centers at (x 1 ,
y 1 ) and (x 2 ,y 2 ) and having radius r 1 and r 2 respectively, are considered to be
intersecting if they have a common area. Even if the two circles touch at a
point they are considered to be intersecting.
Write a (C) program to input integer values of (x 1 , y 1 , x 2 , y 2 , r 1 , r 2 ), out-
put “YES” if the two circles intersect, otherwise output “NO” (without the
quotes). Note: If one of the radius values is negative, output should be
”Invalid input”. Radius value of 0 is acceptable.
Sample Input 1: 1 4 5 1 1 1
Output 1: NO
Sample Input 2: 13 1 1 6 7 8
Output 2: YES
*/




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
