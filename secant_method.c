//Secant method :Gives less iterations compared to bisection method
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) (x*x*x-4*x+1)
// #define f(x) (x*x+x-1)
// #define f(x) (x*x*x-x-1)
#define e 0.0001
int main()
{
	int i=0;
	float x0,x1,x2;
	printf("Guess the interval: ");
	scanf("%f %f",&x0,&x1);
	do{
		x2=(x1*f(x0)-x0*f(x1))/(f(x0)-f(x1));	
		x0=x1;
		x1=x2;
		i++;
		printf("No. of iterations :%d\t",i);
		printf("Root of the equation is: %f\t",x2);
		printf("val of function is: %f\n",f(x2));
	}while(fabs(f(x2))>e);
	return 0;
}