#define NUM_ITER 542602

#include <header.h>

int main_bench()
{
	int i,j=0,n;
	char a[50],b[50];
	my_scanf("%s%s",&a,&b);
	for(i=0;;i++)if(a[i]=='\0')break;
    n=i;
	i=0;
	do{
		if(b[j+i]!=a[i])j++,i=0;
		else if(b[j+i]==a[i])i++;
		else if(i==n){break;}
		else{}
	}while(i!=n);
	my_printf("%d",j);
	return 0;
}