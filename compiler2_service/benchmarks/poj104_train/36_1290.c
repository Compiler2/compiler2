#include <header.h>

int main_bench()
{
    char str1[1000],str2[1000];
	int len1,len2;
	int i,j,temp,num=0;
	int a[1000],b[1000];
	my_scanf("%s",str1);
	my_scanf("%s",str2);
	len1=strlen(str1);
	len2=strlen(str2);
	for(i=0;i<len1;i++)
	{
		a[i]=str1[i];
		b[i]=str2[i];
	}
	for(i=0;i<len1;i++)
		for(j=0;j<len1-1-i;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	for(i=0;i<len1;i++)
		for(j=0;j<len1-1-i;j++)
		{
			if(b[j]<b[j+1])
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	for(i=0;i<len1;i++)
	{
		if(len1!=len2)
		{
			my_printf("NO");
			break;
		}
		if(a[i]==b[i])
			num++;
	}
	if(num==len1)
		my_printf("YES");
	if(num!=len1&&num!=0)
	    my_printf("NO");
	return 0;
}