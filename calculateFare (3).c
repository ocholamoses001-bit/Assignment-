/*
Name:LARMECK GABRIEL
Reg No:PA106/G/28805/25
Decription:C program to compute fare
*/
#include <stdio.h>

int calculateFare(int distance){
	int fare;
	fare=distance * 50;
	
	return fare;
}

int main(){
	int distance;
	
	printf("Enter distance travelled:");
	scanf("%d", &distance);
	
	int fare=calculateFare(distance);
	printf("Your total fare is %d", fare);
	
	return 0;
}