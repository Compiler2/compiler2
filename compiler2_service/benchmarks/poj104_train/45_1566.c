#define NUM_ITER 1063673

#include <header.h>

int main_bench()
{
	char str1[50],str2[50],a,b;
	int i,j,n,l1,l2;
	j=0;
	my_scanf("%s %s",str1,str2);
	l1=strlen(str1);
	l2=strlen(str2);
	for(i=0;((a=str1[i])!='\0');i++)
	{
		for(;((b=str2[j])!='\0');j++)
		{
			if(a==b) {j=j+1;break;};
		}
	}
	my_printf("%d\n",j-l1);
}