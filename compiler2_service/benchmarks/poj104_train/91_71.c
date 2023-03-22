#include <header.h>



int main_bench()
{
	char ch[101], *p ,a[101];
	int len,i=0;
	gets(ch);
	p=ch;
	len=strlen(ch);
	for(p=ch;p<ch+len;p++)
	{
		a[i]=*p+*(p+1);
		if(p==ch+len-1)
		a[i]=*(p)+ch[0];
		my_printf("%c",a[i]);
		i++;
	}my_printf("\n");
	return 0;
}
