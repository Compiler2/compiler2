#define NUM_ITER 1081373

#include <header.h>

int main_bench()
 { 
	char s[50],w[50];
	int i,j,m,k,ls,lw;
	my_scanf("%s %s",s,w);
	ls=strlen(s);
    lw=strlen(w);
    for(i=0;i<lw;i++)
	{
		m=i;
		if (s[0]!=w[i]) continue;
		for(j=0;j<ls;j++,i++)
		{
			if(s[j]!=w[i]) break;
			k=1;
		}
		if(k=1) break; 
	}
	my_printf("%d",m);
  return 0; 
} 


