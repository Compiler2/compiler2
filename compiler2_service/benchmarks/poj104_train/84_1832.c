#define NUM_ITER 62010

#include <header.h>

int main_bench(){
	int first,second,tmp;
	int n;
	int i=0;
	my_scanf("%d",&n);
	
    first=-10000;
	second=-100000;
		do{
			i++;
		my_scanf("%d",&tmp);
	     if (tmp>first)
		 {second=first;
		 first=tmp;
		 }
		   else if (tmp>second)
		 { second=tmp;
		 }
		}while (i!=n);
		
	



my_printf("%d\n%d",first,second);
return 0;
}