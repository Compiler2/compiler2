#define NUM_ITER 1191709

#include <header.h>


int main_bench()
{char a[100],b[100],*p1,*p2;
int i,j,n,check=0;
my_scanf("%s",a);p1=a;
my_scanf("%s",b);p2=b;
  for(i=0;b[i]!='\0';i++)
    {
	  if(a[0]==b[i])
		{for(j=0;a[j]!='\0';j++)
			if(b[i+j]!=a[j]) break;
		if(a[j]=='\0') {check=1;n=i;break;}
		}
        
    }
  if(check==1) my_printf("%d",n);
	return 0;
}