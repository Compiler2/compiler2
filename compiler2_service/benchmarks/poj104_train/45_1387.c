#define NUM_ITER 399748

#include <header.h>

int main_bench()
{
	char s[50],w[50];
	my_scanf("%s %s",s,w);
	int sl,wl,i,j,p;
	sl=strlen(s);
	wl=strlen(w);
	for(i=0,j=0;i<wl,j<sl;)
	{
		if(s[j]!=w[i])
		{
			i++;
			continue;
		}
		if(s[j]==w[i])
		{
			p=i;
			j++;
			i++;
			
		}
	}
	p=p-sl+1;
	if(j==sl) my_printf("%d",p);
}