//Simple hello World program
/*
Name:Moses Ouma 
Reg no:PA106/G/28795/25
) Description: Program to display amount per unit of water consumed
*/
#include<stdio.h>
int main()
{
float units,bill;
printf("Enter amount of water units consumed:");
scanf("%f",&units);
if(units<=30){bill= units * 20;
}
else if(units>30&&units<=60){bill= units * 25;
}
else if(units>60){bill=units * 30;
}
printf("Total bill:%.2fKes\n",bill);
return 0;
}