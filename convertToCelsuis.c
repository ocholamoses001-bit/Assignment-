/*
Name:LARMECK GABRIEL
Reg No:PA106/G/28805/25
Description:C program to convert temperature to celsius
*/
#include<stdio.h>

float convertCelsius(float fahrenheit){
	float celsius;
	
	celsius=(fahrenheit-32)*5/9;
	
	return celsius;
}

int main(){
	float fahrenheit;
	
	printf("Enter tempereture in fahrenheit:");
	scanf("%f", &fahrenheit);
	
	float celsius=convertCelsius(fahrenheit);
	printf("The temperature in celsius is %.2f", celsius);
		
	return 0;
}