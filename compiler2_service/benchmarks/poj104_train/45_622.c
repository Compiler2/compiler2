#define NUM_ITER 1186232

#include <header.h>

int main_bench()
{
	char s[100],w[100];
	int i,j,p=1,len;
	my_scanf("%s%s",s,w);
	len=strlen(s);
	for(i=0;w[i]!='\0';i++)
	{
		for(j=0;j<len;j++)
			if(w[i+j]!=s[j]) {p=0;break;}
	    if(p==1) {my_printf("%d",i);break;};
		p=1;
	}
}
