#include<stdio.h>

int main(){
	float C,F;
	printf("Enter the temperature in F: ");
	scanf("%f",&F);
	C=(F-32)*5/9;
	printf("%.1f F =%.1f C\n", F,C);
	
	printf("Enter the temperature in C: ");
	scanf("%f",&C);
	F=C*9/5+32;
	printf("%.1f C =%.1f F\n", C,F);
}
/*
Enter temperature in C: 20.5
20.5 C = 68.9 F

Enter temperature in F: 80.5
80.5 F = 26.9 C
*/
