#define NUM_ITER 1085588

#include <header.h>

int main_bench()
{
	char s[50],w[50];
	int i,j,k=0,a=70,ls,lw;
	my_scanf("%s%s",s,w);
	ls=strlen(s);
	lw=strlen(w);
	for(i=0;i<lw;i++)
	{
		if (s[0]==w[i]&&k==0) {k=1; for(j=1;j<ls;j++) if (s[j]!=w[i+j]) k=0;}
		if (k==1&&i<a) a=i;
	}
	my_printf("%d",a);
}