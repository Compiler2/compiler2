#define NUM_ITER 216536

#include <header.h>

int main_bench()
{
int i,j,k,max,temp,flag;
int a[5][5];
for(i=0;i<=4;i++)
  for(j=0;j<=4;j++)
	my_scanf("%d",&a[i][j]);
for(i=0;i<=4;i++)
   {
                max=a[i][0];
                flag=1;
               for(j=0;j<=4;j++)
               {
                            if(a[i][j]>=max)
                           { max=a[i][j];
                               temp=j;}
                }
               for(k=0;k<=4;k++)
             { 
                                if( a[k][temp]<max)
                              {flag=0;
                                break;
							}
              }
       if( flag==1)
      {
      my_printf("%d %d %d",i+1,temp+1,a[i][temp]);
      break;
      }
    }
         if (!flag)
         my_printf("not found");
    return 0; 
}