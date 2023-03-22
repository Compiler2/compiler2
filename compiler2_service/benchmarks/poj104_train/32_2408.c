#include <header.h>

int main_bench()
{
	int n,i,j,k,str1[100]={0},str2[100]={0},len1,len2;
	char a[100]={0},b[100]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s%s",a,b);
		len1=strlen(a),len2=strlen(b);
		k=0;
		for(j=len1-1;j>=0;j--)
		{
			str1[k++]=a[j]-'0';
		}
		k=0;
		for(j=len2-1;j>=0;j--)
		{
			str2[k++]=b[j]-'0';
		}
		for(j=0;j<len1;j++)
		{
			str1[j]-=str2[j];
			if(str1[j]<0)
			{
				str1[j]+=10;
				str1[j+1]--;
			}
		}
		for(j=len1-1;j>=0;j--)
			my_printf("%d",str1[j]);
		my_printf("\n");
		for(j=0;j<100;j++)
		{
			str1[j]=0;
		}
		for(j=0;j<100;j++)
		{
			str2[j]=0;
		}
		for(j=0;j<100;j++)
		{
			a[j]=0;
		}
		for(j=0;j<100;j++)
		{
			b[j]=0;
		}
	}
	return 0;
}