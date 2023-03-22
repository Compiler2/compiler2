#define NUM_ITER 1019082

#include <header.h>


int main_bench()
{
	char s[1000],w[1000];
	my_scanf("%s%s",s,w);
	int sn=strlen(s);
	int wn=strlen(w);
	int pos=0;
	int i;
	for(i=0;i<wn;i++)
	{
		if(pos==sn-1)
			break;
		if(w[i]==s[pos]) pos++;
		else pos=0;
	}
	my_printf("%d",i-pos);

	return 0;
}