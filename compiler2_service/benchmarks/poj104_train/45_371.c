#define NUM_ITER 1091488

#include <header.h>



int main_bench()
{ 
	char a[50];
	char b[50];
	int la,lb,i,j;
	char *pa,*pb;
	char *x;
	my_scanf("%s",a);pa=a;
	my_scanf("%s",b);pb=b;
	la=strlen(a);
	lb=strlen(b);
	for(;pb<b+lb;pb++)
	{
		if(*pb==*pa)
		{
			x=pb;
			for(pa=a;pa<a+la;pa++)
			{
				if(*pb==*pa)
				{
					pb=pb+1;
				}
				
				else break;
			}

			
			if(pa==a+la && *(pb-1)==*(pa-1))
			{
				my_printf("%d",x-b);
				break;
			}
			else
			{pb=x;pa=a;}
		}
	}





	return 0;
}

