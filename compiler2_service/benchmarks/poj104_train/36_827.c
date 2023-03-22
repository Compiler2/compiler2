#define NUM_ITER 891874

#include <header.h>

int main_bench()
{
	void swap(char str[]);
	char a[100],b[100];
	int len1,len2;
	my_scanf("%s %s",a,b);
	len1=strlen(a);
	len2=strlen(b);
	if(len1!=len2)
		my_printf("NO");
	else
	{
		swap(a);
		swap(b);
		if(strcmp(a,b)==0)
			my_printf("YES");
		else
			my_printf("NO");
	}
}

void swap(char str[])
{
	int length,i,j;
	char t;
	length=strlen(str);
	for(i=0;i<length-1;i++)
		for(j=0;j<length-1-i;j++)
		{
			if(str[j+1]>str[j])
			{
				t=str[j];
				str[j]=str[j+1];
				str[j+1]=t;
			}
		}
}