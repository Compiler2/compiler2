#define NUM_ITER 1048364

#include <header.h>

int main_bench() 
{ 
	char a[50],b[50]; 
	int i=0,j,p; 
	int flag=1; 
	my_scanf("%s",b); 
	my_printf(" ");
	my_scanf("%s",a);
	my_printf("\n"); 
	while(a[i] && flag) 
	{ 
		p=i; 
		j=0; 
		while(a[i]&&b[j]&&a[i]==b[j]) 
		{
			i++;j++;} 
		if(!(b[j])) 
		flag=0; 
		else 
		i=p+1; 

		} 
		if(!flag) 
		my_printf("%d\n",p); 

		return 0;
} 