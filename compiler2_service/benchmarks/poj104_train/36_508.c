#define NUM_ITER 789819

#include <header.h>


void kjj(char a[],int len)
{
	int i,j;
	char c;
	len=strlen(a);
	for(i=1;i<len;i++)
		for(j=0;(j<len-i)&&(a[j]!='\0');j++)
			if(a[j]>a[j+1])
			{
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
			
}
			
int main_bench()
{
	char a[10000],b[10000];
	int len1,len2;
    my_scanf("%s %s",a,b);
    len1=strlen(a);len2=strlen(b);
	kjj(a,len1);
	kjj(b,len2);
	if(strcmp(a,b)==0&&len1==len2)
		my_printf("YES");
	else
		my_printf("NO");
}
