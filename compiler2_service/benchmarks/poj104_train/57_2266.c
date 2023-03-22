#define NUM_ITER 31759

#include <header.h>

int main_bench()
{
	char a[100];
int n,i;
char *p;
my_scanf("%d",&n);
getchar();
for(i=0;i<n;i++)
{   

	
	
	gets(a);
	p=a+strlen(a)-1;
	if(*p=='r'){for(p=a;p<a+strlen(a)-2;p++)my_printf("%c",*p);}
	else if(*p=='y'){for(p=a;p<a+strlen(a)-2;p++)my_printf("%c",*p);}
	else if(*p=='g'){for(p=a;p<a+strlen(a)-3;p++)my_printf("%c",*p);}
	my_printf("\n");
}
return 0;
}
