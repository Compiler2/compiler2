#include <header.h>

int comp(char a[100],char b[100],int i)
{
	int l,j;
	l=strlen(b);
	for (j=0;j<l;j++)
		if (a[i+j]!=b[j])
			return 0;
		return 1;
}


int main_bench()
{
	int i,j,len1,len2,len3,break1=0;
	char a[100],b[100],c[100];
    int comp(char a[100],char b[100],int i);
	my_scanf("%s %s %s",a,b,c);
	len1=strlen(a);
    len2=strlen(b);
    len3=strlen(c);
	for (i=0;i<100;i++)
	{
		if (a[i]==b[0])
		{
			if (comp(a,b,i))
			{
				for (j=0;j<i;j++)
				{
					my_printf("%c",a[j]);
				}
				my_printf("%s",c);
				
				for (j=j+len2;j<len1-len2+len3;j++)
					my_printf("%c",a[j]);
				break;
				break1=1;
			}
		}
		if (break1==1) break;
		if (i==strlen(a)) my_printf("%s",a);
	}
				
	return 0;
}
