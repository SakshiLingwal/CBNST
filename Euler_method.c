//Euler's Method
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x,y) -x*y
int main(){
    float a,b,x,y,t,k,h;
    printf("Enter the val. of x0,y0,h & xn");
    scanf("%f%f%f%f",&a,&b,&h,&t);
    x=a;
    y=b;
    
    while(x<t){
        k=h*f(x,y);
        y=y+k;
        x=x+h;
        printf("x=%f\ty=%f\n",x,y);
    }
    return 0;
}