#define NUM_ITER 54157

#include <header.h>

int main_bench()
{
int a[100],n,i,j,b,c,t;
my_scanf("%d",&n);
for (i=0;i<n;i++)
my_scanf("%d",&a[i]);
b=a[0];
c=a[1];
if(b<c)
	{t=b;
     b=c;
	 c=t;
	}
for (j=2;j<n;j++)    
   {if(a[j]<b&&a[j]>c)
	   c=a[j];
	else if (a[j]>b)
	  {c=b;
	   b=a[j];
	  }
	}
my_printf("%d",b);
my_printf("\n");
my_printf("%d",c);
}
