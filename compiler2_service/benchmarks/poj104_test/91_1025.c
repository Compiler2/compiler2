#define NUM_ITER 1266641

#include <header.h>

int main_bench()
{
	char ch[101],str[101];
	char *p;
	int i,j,k;
	gets(ch);
	k=strlen(ch);
	p=ch;
	for (i=0;i<k-1;i++)
	{
		str[i]=*p+*(p+1);
		p++;
	}
	str[k-1]=*p+ch[0];
    for (i=0;i<k;i++)
		my_printf("%c",str[i]);
	return 0;
}