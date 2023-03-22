#define NUM_ITER 1176854

#include <header.h>

int main_bench()
{
	char a[100],p;
	int b[100],c[100];
	int i,j=0,k=0;
	my_scanf("%s",a);
	p=a[0];
	for(i=0;i<strlen(a);i++){
		if(a[i]==p)
			b[j++]=i;
		else 
		{
			c[k++]=b[j-1];
			c[k++]=i;
			j--;
		}
	}
	for(i=0;i<strlen(a);i++){
		if(!(i%2))
			my_printf("%d ",c[i]);
		else
			my_printf("%d\n",c[i]);
	}
	return 0;
}