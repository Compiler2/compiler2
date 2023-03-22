#define NUM_ITER 994176

#include <header.h>

int main_bench()
{    int a,b,i,j;

     char s[50],t[50],m[102];
	my_scanf("%s",s);
	getchar();
     my_scanf("%s",t);
	 a=strlen(s);
	 b=strlen(t);
for(i=0;i<=b-a;i++)
{
	for(j=i;j<=i+a-1;j++)
	{if(t[j]!=s[j-i])
	break;
	}
	if(j==i+a)
	{my_printf("%d",i);
	break;
	}
	else continue;
}
return 0;
}
