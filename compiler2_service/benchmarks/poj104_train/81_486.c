#define NUM_ITER 231323

#include <header.h>


void input(int *a)
{
  int i,j;
  for(i=0;i<5;i++)
	  for(j=0;j<5;j++)
          my_scanf("%d",a++);	  
}
 
void output(int *a)
{
  int i,j;
  for(i=0;i<5;i++)
  {
	  for(j=0;j<4;j++)
          my_printf("%d ",*a++);
	  my_printf("%d\n",*a++);
  }
}  

int inv(int (*a)[5],int n,int m)
{
  int z,t,i;
  if(n>=0&&n<=4&&m>=0&&m<=4)
  {
	  for(i=0;i<5;i++)
	  {
        t=a[n][i];
	    a[n][i]=a[m][i];
	    a[m][i]=t;
	  }
	     z=1;
  }
  else z=0;
  return z;
}

main_bench()
{
  int a[5][5];
  int n,m;
  input(a[0]);
  my_scanf("%d%d",&n,&m);
  if(inv(a,n,m)==0) my_printf("error");
  else output(a[0]);
}