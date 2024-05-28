//Best convergence rate(less no. of iterations give the roots)
// Newton Raphson Method
#include<stdio.h>
#include<math.h>
#include<conio.h>
#define f(x) (x*x*x-4*x+1)
#define df(x) (3*x*x-4)         //derivative of the function
#define e 0.001
int main() {
    int i = 0;
    float x0, x1, f0, f1, df0;
    printf("Enter a guess value of x0 = ");
    scanf("%f", &x0);
    do{
        f0 = f(x0);
        df0 = df(x0);
        x1 = x0 - (f0 / df0);
        f1 = f(x1);
        x0 = x1;
        i++;
        printf("No. of iterations: %d\t", i);
        printf("Root value: %f\t", x1);
        printf("Val. of function: %f\n", f1);
    } while (fabs(f1) > e);
    return 0;
}
                    