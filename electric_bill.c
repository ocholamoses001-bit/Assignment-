/*
Name: Moses Ouma 
Reg No : PA106/G/28795/25
Date: 8th October 2025
Description : Program to calculate electric_bill
*/

#include <stdio.h>
int main(){
int units;
float bill_amount;
// prompt user to enter number of units
printf("enter number of units consumed");
scanf("%d",&units);
// calculate bills on the specific rates
if ( units<=100 ) {bill_amount =units *10.0;
}
else if ( units <=200){
bill_amount=(100*10.0)+((units -100)*15.0);
}
else{//units >200
bill_amount= (100*10.0)+(100*15.0)+((units-200)*20.0);
}
// print the total bill amount 
printf("total bill amount:KES %.2f\n,bill_amount");
return 0;
}