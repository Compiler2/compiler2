#define NUM_ITER 1096153

#include <header.h>

int main_bench()
{
	char a[100];
	int b[100],c[100];
	int i,n,j=0,k=0;
	my_scanf("%s",a);
	for(i=0;i<strlen(a);i++){
		if((a[i]=='(')||(a[i]=='{')||(a[i]=='[')||(a[i]=='<'))
			b[j++]=i;
		else if((a[i]==')')||(a[i]==']')||(a[i]=='}')||(a[i]=='>')){
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