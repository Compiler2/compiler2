#define NUM_ITER 1341689

#include <header.h>

int main_bench()
{
	char *p,str[2100];
	int len,i,n;
	gets(str);
	len=strlen(str);
	for(i=0,p=&str[0],n=-1;i<len;i++,p++)
	{
		if(*p==' '&&i-n-1!=0)my_printf("%d,",i-n-1),n=i;
		if(*p==' '&&i-n-1==0)n=i;
		if(i==len-1)my_printf("%d",i-n);
	}
}