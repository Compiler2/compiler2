#include <header.h>

int main_bench()
{
	char a[50],b[50];
	int i,j,k=0,l=0;
	my_scanf("%s %s",a,b);
	for(i=0;i<strlen(a);i++){
		for(j=l;j<strlen(b);j++)
			if(a[i]==b[j]) {
				k++;
				l=j+1;
				break;}
	}
	if(k==strlen(a))
		my_printf("%d",j+1-k);
	return 0;
}