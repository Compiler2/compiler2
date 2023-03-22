#include <header.h>

int main_bench()
{
    char s[50],w[50];
	my_scanf("%s%s",s,w);

	int c,d;
	c=strlen(s);
	d=strlen(w);
	int i;
	for(i=0;i<c;i++)
	{
		if(s[0]==w[i]&&s[1]==w[i+1])
		break;
	}my_printf("%d",i);



	return 0;
}
