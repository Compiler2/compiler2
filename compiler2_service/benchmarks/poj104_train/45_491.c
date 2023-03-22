#define NUM_ITER 813465

#include <header.h>

int main_bench()
{
	char a[100],b[100],*p;
	int i,j,q=0,t;
	my_scanf("%s%s",a,b);
	for(p=b,t=0;p<b+strlen(b);p++,t++)
		if(*p==*a)
		{
			for(j=1;j<strlen(a);j++,p++)
				if(*p=!*(a+j)){q=1;break;}
				if(q==0)my_printf("%d",t);break;
		}
}
