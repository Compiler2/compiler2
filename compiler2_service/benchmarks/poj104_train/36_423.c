#define NUM_ITER 768109

#include <header.h>

void array(char a[])
{
	int l,i,j,max;
	char aa;
	l=strlen(a);
	for(i=0;i<l;i++)
	{max=i;
	 for(j=i+1;j<l;j++)
		 if(a[j]>a[max]) max=j;
	 aa=a[i];
	 a[i]=a[max];
	 a[max]=aa;
	}
}
int main_bench()
{
	char a[100],b[100];
	my_scanf("%s%s",a,b);
	array(a);
	array(b);
	if(strcmp(a,b)==0) my_printf("YES");
	else my_printf("NO");
}