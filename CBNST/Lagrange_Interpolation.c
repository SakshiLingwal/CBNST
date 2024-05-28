//Lagrange's Interpolation Method
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of terms :");
    scanf("%d",&n);
    float X[n],Y[n],x,sum=0,t;
    int i,j;
    printf("Enter Values of X :");
    for(i=0;i<n;i++)
          scanf("%f",&X[i]);
    printf("Enter Values of Y :");
    for(i=0;i<n;i++)
          scanf("%f",&Y[i]);
          
    printf("Enter value of x for which you want y :");
    scanf("%f",&x);

//f(x)=y=((x-x1)(x-x2)(x-x3))/(x0-x1)(x0-x2)(x0-x3))
    for(i=0;i<n;i++)
    {
        t=1;
        for(j=0;j<n;j++)
        {   
            if(i!=j)
               t = t * ((x - X[j])/(X[i]-X[j]));
        }
        sum=sum + t * Y[i];    
    }
    printf("\nValue of Y at X=%.1f is = %.1f", x,sum);
}