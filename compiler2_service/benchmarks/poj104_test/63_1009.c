#define NUM_ITER 435

#include <header.h>

int main_bench()
{
    int i1,i2,j1,j2,i,j,k;
    int a[100][100]={0},b[100][100]={0},c[100][100]={0};
    my_scanf("%d%d",&i1,&j1);
     for (i=0;i<i1;i++)
     for (j=0;j<j1;j++)
       my_scanf("%d",&a[i][j]);
    my_scanf("%d%d",&i2,&j2);
      for (i=0;i<i2;i++)
       for (j=0;j<j2;j++)
         my_scanf("%d",&b[i][j]);
    if (j1==i2)
    {

     for (i=0;i<i1;i++)
     {
       for (j=0;j<j2;j++)
       {
         for (k=0;k<j1;k++)
         {
           c[i][j]+=a[i][k]*b[k][j];
         
         }
        if (j<1) my_printf("%d",c[i][j]);
                    else my_printf(" %d",c[i][j]);  
       }
       my_printf("\n");
     }     
    }
    else my_printf("?????\n"); 
    getchar();
    getchar();
    getchar();
    
}