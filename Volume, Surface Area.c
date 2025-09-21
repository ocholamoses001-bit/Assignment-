//Simple hello World program
/*
Name:Moses Ouma
Reg no:PA106/G/28795/25
) Description: Program to find surface area and volume of a cylinder;
*/
#include<stdio.h>
#define PI 3.142//Define value of π
//Main function
int main()
{
float radius, height,Volume,SurfaceArea;
//promt user for input
printf("Enter the radius of the cylinder:");
scanf("%f",& radius);
printf("Enter the height of the cylinder:");
scanf("%f",&height);

//calculate volume and surface area
Volume =PI*radius*radius*height;
SurfaceArea=(2*PI*radius*radius)+(2*PI*radius*height);

//Output results
printf("Volume of the cylinder:%.2f\n", Volume);
printf("SurfaceArea of the cylinder:%.2f\n", SurfaceArea);


return 0 ;
}
