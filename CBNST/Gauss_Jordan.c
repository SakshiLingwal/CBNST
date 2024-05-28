// Gauss Jordan Method
#include<stdio.h>
#include<math.h>
int main(){
    float a[10][10],x[10],temp;
    int n,i,j,k;
    printf("Enter no. of equations :");
    scanf("%fd",&n);
    printf("Enter the augmented/coefficients of matrix :");
    for(i=1;i<=n;i++){
        for(j=1;j<=(n+1);j++){
            scanf("%f",&a[i][j]);
        }
    }
    //printing augmented matrix
    for(i=1;i<=n;i++){
        for(j=1;j<=(n+1);j++){
            printf("%f\t",a[i][j]);
        }
        printf("\n");
    }
    // gauss jordan
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1;j++){
            if(i!=j)
                temp=a[j][i]/a[i][i];
            for(k=1;k<=n+1;k++){
                 a[j][k]=a[j][k]-(temp*a[i][k]);
            }
        }
    }
    /*obtained solution
    for(i=1;i<=n;i++)
        x[i]=a[i][n+1]/a[i][i];*/
    printf("Solution of eqn is :\n");
    for(i=1;i<=n;i++)
        printf("x[%d]=%.3f\n",i,x[i]);
    return 0;
}