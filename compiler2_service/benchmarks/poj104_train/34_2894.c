#define NUM_ITER 351263

#include <header.h>

int main_bench()
{
 int n,m;
 my_scanf("%d",&n);
 while(n!=1)
 {if(n%2==0){m=n;n=m/2;my_printf("%d/2=%d\n",m,n);continue;}			
 if(n%2!=0&&n!=1){m=n;n=m*3+1;my_printf("%d*3+1=%d\n",m,n);continue;}				}
 my_printf("End\n");
return 0;
}