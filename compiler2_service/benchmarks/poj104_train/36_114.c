#define NUM_ITER 928922

#include <header.h>

int main_bench()
{
	int i,j,k,a,b,flag;
	char s1[100],s2[100],*p1,*p2;
	my_scanf("%s %s",s1,s2);
	a=strlen(s1);
	b=strlen(s2);
	if(a!=b)my_printf("NO");
	else{
p1=s1;	
	p2=s2;
	for(j=0;j<a;++j)
	for(i=0;i<a;++i)
	{
		if(*(p1+i)!=0&&*(p2+j)!=0)
			if(*(p1+i)==*(p2+j))
		{
			
			*(p2+j)=0;
			*(p1+i)=0;
		}
	
	}
	for(p1=s1;p1<a+s1;p1++)
	{
		if(*p1!=0)
		{
			flag=0;
			break;
		}
		else flag=1;
	}
	if(flag)my_printf("YES");
	else my_printf("NO");
}
}
