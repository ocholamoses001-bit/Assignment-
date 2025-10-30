/*
NAME : Moses Ouma Ochola 
PA:106/G/28795/25
DESCRIPTION:c array programm that take the sum os seven day revunue and average
*/
#include<stdio.h>
int main(){
    int i;
    int sum =0;
    int average;
    
    
    int revenue[7] ;{
    printf("enter the revenue for monday:\t ");
    scanf("%d", &revenue[0]);
    printf("enter the revenue for tuesday:\t");
    scanf("%d", &revenue[1]);
    printf("enter the revenue for wednesday:\t");
    scanf("%d", &revenue[2]);
    printf("enter the revenue for thursday:\t");
    scanf("%d", &revenue[3]);
    printf("enter the revenue for friday:\t");
    scanf("%d", &revenue[4]);
    printf("enter the revenue for surtaday:\t");
    scanf("%d", &revenue[5]);
    printf("enter the revenue for Sunday:\t ");
    scanf("%d", &revenue[6]);
    
     for ( i = 0; i < 7; i++)
     {
        sum = sum + revenue[i];}
        printf("The total weekly revenue is %d\n",sum);
        average = sum/7;
        printf("The average daily revenue is %d",average);
     
     }


    return 0;

}