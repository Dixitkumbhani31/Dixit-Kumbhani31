#include<stdio.h>

main()

{
	float f,c;
	
	printf("Enter temperature in celsius :");
	scanf("%f",&c);
	
	f=c*9/5+32;
	
	printf("fehrenheit=%.2f",f);
}
