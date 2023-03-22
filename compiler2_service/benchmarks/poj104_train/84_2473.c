#include <header.h>

int main_bench()
{
int ax[100];
int a=0;
int i;
my_scanf("%d",&i);
while (a<=i-1)
{my_scanf("%d",&ax[a]);
a++;
}
int b=0,c,k=1;
while (k<i)
{b=0;
     while (b<i-k)
	 {
	      if(ax[b]>=ax[b+1])
		  {c=ax[b];
		   ax[b]=ax[b+1];
		   ax[b+1]=c;
		  }
	  b++;
	 }
k++;
}
my_printf("%d\n%d",ax[i-1],ax[i-2]);
return 0;
}