//Simple hello World program
/*
Name:Moses Ouma
Reg no:PA106/G/28795/25
) Description: Program to display  eligibility of a client to qualify for a loan;
*/
#include<stdio.h>
int main()
{
float s,c;
printf("enter value of c:");
scanf("%f",& c);
printf("enter value of s:");
scanf("%f ,&s");
if(c>=20&&s>=21000)
printf("congratulations you qualify a loan");
else
printf("sorry you ,we are unable to give you loan");
return 0;
}