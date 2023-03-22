#define NUM_ITER 1540

#include <header.h>


void prop(int num1[11][11],int num2[11][11],int n)
{
     int i,j;
     if(n)
     {
     for(i=1;i<10;i++)for(j=1;j<10;j++)
         num2[i][j]= num1[i-1][j-1]+num1[i-1][j]+num1[i-1][j+1]
                    +num1[i][j-1]+num1[i][j]*2+num1[i][j+1]
                    +num1[i+1][j-1]+num1[i+1][j]+num1[i+1][j+1];
     prop(num2,num1,n-1);
     }
} 

main_bench()
{
      int m,n,num1[11][11]={0},num2[11][11]={0};
      int i,j;
      my_scanf("%d %d",&m,&n);
      num1[5][5]=m;
      prop(num1,num2,n);
      if(n%2==0)
      for(i=1;i<10;i++)
      {
          for(j=1;j<9;j++) my_printf("%d ",num1[i][j]);
          my_printf("%d\n",num1[i][9]);
      }
      else
      for(i=1;i<10;i++)
      {
          for(j=1;j<9;j++) my_printf("%d ",num2[i][j]);
          my_printf("%d\n",num2[i][9]);
      }
      
}