#define NUM_ITER 235167

#include <header.h>

int a(int n);
int main_bench()
{
    int b[5][5];
    int i,j,k;
    int n1,n2;
    for(i=0;i<5;i++)
     for(j=0;j<5;j++)
     my_scanf("%d",&b[i][j]);
     my_scanf("%d%d",&n1,&n2);
     if((a(n1)==0)||(a(n2)==0))
     my_printf("error");
     else
     {
         for(i=0;i<5;i++)
         {
             if(i==n1)
                 {
                     for(j=0;j<4;j++)
                     my_printf("%d ",b[n2][j]);
                     my_printf("%d\n",b[n2][j]);
                 }
                 else if(i==n2)
                 {
                     for(j=0;j<4;j++)
                     my_printf("%d ",b[n1][j]);
                     my_printf("%d\n",b[n1][j]);
                 }
                 else
                 {
                     for(j=0;j<4;j++)
                     my_printf("%d ",b[i][j]);
                     my_printf("%d\n",b[i][j]);
                 }

         }}


}
int a(int n)
{
    if((n>=0)&&(n<5))
    return 1;
    else
    return 0;
}
