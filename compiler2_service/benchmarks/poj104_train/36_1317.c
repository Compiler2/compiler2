#include <header.h>

	void sort(char c[],int n);
int main_bench()
{

	int len1,len2;
	char a[200],b[200];
	my_scanf("%s%s",a,b);
	len1=strlen(a);
	len2=strlen(b);
	sort(a,len1);
	sort(b,len2);
	if(strcmp(a,b)==0) my_printf("YES");
	else my_printf("NO");
    return 0;
}
void sort(char c[],int n)
{
	int i,k;
	char temp;
	for (k=n-1;k>0;k--)
	{
		for (i=0;i<k;i++)
		{
			if (c[i]>c[i+1])
			{
				temp=c[i];
				c[i]=c[i+1];
				c[i+1]=temp;
			}
		}
	}
}