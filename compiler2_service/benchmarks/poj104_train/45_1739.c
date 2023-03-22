#define NUM_ITER 962271

#include <header.h>

int main_bench()
 {
	char sz[101]={'\0'};
	char s[50]={'\0'},w[50]={'\0'};
	my_scanf("%s%s",s,w);
	int i=0,j=0,k=0;

	for(i=0;i<strlen(w);i++)
	{
		if(s[0] == w[i])
		{
			k=i;
			for(j=0;j<strlen(s);j++,k++)
			{
				if(s[j] != w[k]){break;}
			}
		}
		if(j==strlen(s)) {my_printf("%d",i);break;}
	}
	
    return 0;
 }
