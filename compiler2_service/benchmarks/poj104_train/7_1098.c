#define NUM_ITER 178000

#include <header.h>

int main_bench()
{
	int i,j,break1=0;
	char a[100],b[100],c[100];
    int right(char a[100],char b[100],int n);
	my_scanf("%s%s%s",a,b,c);
	for (i=0;i<100;i++)
	{
		if (a[i]==b[0])
		{
			if (right(a,b,i))
			{
				for (j=0;j<i;j++)
				{
					my_printf("%c",a[j]);
				}
				my_printf("%s",c);
				int len1=strlen(a);
				int len2=strlen(b);
				int len3=strlen(c);
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
int right(char a[100],char b[100],int i)
{
	int len,j;
	len=strlen(b);
	for (j=0;j<len;j++)
		if (a[i+j]!=b[j])
			return 0;
	return 1;
}
