#include <header.h>

int main_bench()
{
    int n,i;
	
	float c,d;
	int a,b;
   
	my_scanf("%d",&n);
	my_scanf("%d%d",&a,&b);
	c=(float)b/a;
	my_scanf("%d%d",&a,&b);
		d=(float)b/a;
		if(d-c>0.05) my_printf("\nbetter");
		else if (c-d>0.05) my_printf("\nworse");
		else my_printf("\nsame");

    for (i=2;i<n;i++){
		my_scanf("%d%d",&a,&b);
		d=(float)b/a;
		if(d-c>0.05) my_printf("\nbetter");
		else if (c-d>0.05) my_printf("\nworse");
		else my_printf("\nsame");

		}


	return 0;
}


