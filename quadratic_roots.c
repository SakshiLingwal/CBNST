// Quadratic Roots
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x1,x2,real,img;
    printf("Enter the values of a,b & c :");
    scanf("%f%f%f",&a,&b,&c);
    float d=b*b-4.0*a*c;
    if(d>0){
        x1=(-b+sqrt(d))/(2.0*a);
        x2=(-b-sqrt(d))/(2.0*a);
        printf("Roots are real & different :%f\t%f",x1,x2);
    }
    else if(d==0){
        x1=-b/2.0*a;
        printf("Roots are same & real :%f",x1);
    }
    else{
        printf("Roots are imaginary");
        real=-b/(2.0*a);
        img=sqrt(-d)/(2.0*a);
        printf("Roots are complex and different");
        printf("x1 = %f,x2= %f",real,img);
    }
    return 0;
}