#define NUM_ITER 33753

#include <header.h>

int main_bench()
{
	int n,l=0,i,a[1000];
	char s[1000][100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%s",s[i]);
	for(i=0;i<n;i++)
		a[i]=strlen(s[i]);
	for(i=0;i<n;i++)
	{
		my_printf("%s",s[i]);
	   	l+=a[i]+1;
		if(i!=n-1 && l+a[i+1]<=80)my_printf(" ");
		else{
			l=0;
			my_printf("\n");
		}
	}
     return 0;
}



