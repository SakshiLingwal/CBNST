//Bisection method
#include<stdio.h>
#include<math.h>
#define f(x) (x*x*x - 4*x + 1)
#define e 0.0001         // Maximum number of iterations to avoid infinite loop
int main() {
    int i=0;
    float x0, x1, x2;
    printf("Enter values of x0 & x1: ");
    scanf("%f %f", &x0, &x1);
    // printf("Enter the error :");
    // scanf("%f",&e);
    while(f(x0)*f(x1)>0){
        printf("Incorrect roots.Retry with values having opposite signs!\n");
        scanf("%f %f",&x0,&x1);
    }
    do {
        x2=(x0+x1)/2;
        if(f(x0)*f(x2)<0) {
            x1 = x2;
        } 
        else{
            x0 = x2;
        }
        i++;
        printf("No. of iterations: %d\t", i);
        printf("Root is: %f", x2);
        printf("\tValue of function: %f\n", f(x2));
    } while (fabs(f(x2)) > e);
    return 0;
}
