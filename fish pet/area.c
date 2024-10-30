#include <stdio.h>

int main()
{
	float base, height, area;
	printf("Enter the width of the base.");
	scanf("%f",&base);
	
	printf("Enter the height of the triangle.");
	scanf("%f",&height);
	
	area = 0.5*base *height;
	printf("The area of the triangle is  %.2f",area);
}

