#define NUM_ITER 1050481

#include <header.h>

int main_bench()
{
char a[55],b[55],*p=a,*q=b;
int z;
my_scanf("%s %s",a,b);

int l,i;
for(i=0;i<strlen(b);i++)
{
z=1;
p=a;
if(*p==b[i])
{  
	l=i;q=b+i;
	while(*p!='\0')
	{
	if(*p!=*q)z=0;
	p++;q++;}
}
else continue;
if(z==0) continue;
else {my_printf("%d\n",l);goto loop;}
}
loop:;}