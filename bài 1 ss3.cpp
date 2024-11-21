#include<stdio.h>
int main()
{
	double Celsius;
	scanf("%.2lf" , &Celsius);
	printf("%.2lf", (Celsius * 9/5) + 32);
	return 0;
}