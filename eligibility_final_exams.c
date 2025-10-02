//Simple hello World program
/*
Name:Moses Ouma
Reg no:PA106/G/28795/25
) Description: Prorams to display eligibility for the final exams;
*/
#include<stdio.h>
int main()
{
float Attendance, Average_marks;
printf("enter value of Attendance\n");
scanf("%a",& Attendance);
printf("enter value of Average_marks\n");
scanf("%f ,& Average_marks");
if(Attendance>=75&& Average_marks>=40)

printf("You qualify final exams ");
else
printf("sorry you ,we are unable to give you final exams");
return 0;
}