#define NUM_ITER 1112945

#include <header.h>

int main_bench()
{
	char s[50],w[50];
	int slen,wlen,total,i,j,k;
	my_scanf("%s",s);
	my_scanf("%s",w);
	slen=strlen(s);
	wlen=strlen(w);
	for(i=0;i<=wlen-slen;i++)
	{
		if(s[0]==w[i])
		{
			total=0;
			for(j=i,k=0;j<=slen+i-1;j++,k++)
			{
				if(s[k]==w[j])
					total++;
			}
			if(total==slen)
			{
				my_printf("%d",i);
				break;
			}
		}
	}
}







