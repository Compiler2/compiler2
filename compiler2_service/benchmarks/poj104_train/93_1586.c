#define NUM_ITER 1567793

#include <header.h>

int main_bench(){
	int a,b,c,d;
	int w=3;
	int z=5;
	int x=7;
	my_scanf("%d",&a);
	b=a%3;
	c=a%5;
	d=a%7;
	if (b==0&&c==0&&d==0)
		my_printf("%d %d %d",w,z,x);
	else if(b==0&&c==0)
		my_printf("%d %d",w,z);
	else if(b==0&&d==0)
		my_printf("%d %d",w,x);
	else if(c==0&&d==0)
		my_printf("%d %d",z,x);
	      else if(b==0)
			  my_printf("%d",w);
		       else if(c==0)
				   my_printf("%d",z);
			        else if(d==0)
						my_printf("%d",x);
					      else my_printf("n");
	 return 0;
						  
}
					