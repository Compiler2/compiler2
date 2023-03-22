#define NUM_ITER 99736

#include <header.h>

int main_bench()
{
    int i,j,l,count=0;
	char y[50],x[50];
	my_scanf ("%s",x);
	my_scanf ("%s",y);
	l=strlen(x);
    for (i=0,j=0;i<l;){
		if (x[i]==y[j]){
			i++;
			j++;
		}
		else {
			j++;
			count++;
		}
	}
    my_printf("%d",count);
	
	return 0;
}
