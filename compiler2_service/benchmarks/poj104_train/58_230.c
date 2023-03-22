#include <header.h>


int hefa(char*a){
	for (;*a=='_'||(*a>='A' &&*a<='Z')||(*a>='a' &&*a<='z')||(*a>='0' &&*a<='9')||*a=='\0';a++)
	{
		if (*a=='\0')
		{
			my_printf("1\n");
			return 0;
		}else if (!(*a=='_'||(*a>='A' &&*a<='Z')||(*a>='a' &&*a<='z')||(*a>='0' &&*a<='9')))
		{
			my_printf("0\n");
			return 0;
		}
	}
	my_printf("0\n");
	return 0;
}
int main_bench(){
	char zifu[2000000];
	char *p;
	int i,n;
	my_scanf("%d",&n);
	getchar();
	for (i=0;i<n;i++)
	{
		gets(zifu);
		p=zifu;
		if (*p=='_'||(*p>='A' &&*p<='Z')||(*p>='a' &&*p<='z'))
		{
			hefa(p);
		} 
		else
		{
			my_printf("0\n");
		}
	}
	return 0;
}
