#define NUM_ITER 1418500

#include <header.h>

int main_bench()
{
	char a[1000];
	int n=0,t,i=0;
	gets(a);
	while(a[i]!='\0')
	{
		t=0;
		while((a[i]==' ')&&(a[i]!='\0'))i+=1;
		while((a[i]!=' ')&&(a[i]!='\0')){t+=1;i+=1;}
		if(n>0)my_printf(",");
		if(t>0){my_printf("%d",t);n+=1;}
		if(a=='\0')break;
	}
}