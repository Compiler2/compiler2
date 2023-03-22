#define NUM_ITER 1157517

#include <header.h>

int main_bench()
{
	char min[50],max[50],s[1000];
	int i,len,len1=0,len2=50,count,k=0,j;
	gets(s);
	len=strlen(s);
	for(i=0;i<=len;i++)
	{
		if(s[i]==' '|| s[i]=='\0')
		{
			count=i-k;
			
			if(count>len1)
			{ 
				int l=0;
				for(j=k;j<i;j++)
				{
					max[l]=s[j];
					l++;
				}
				max[l]='\0';
				len1 = count;
			}
			if(count<len2&&count!=0)
			{ 
				int l=0;
				for(j=k;j<i;j++)
				{
					min[l]=s[j];
					l++;
				}
				min[l]='\0';
				len2 = count;
			}
			k=i+1;
		}
	}
	my_printf("%s\n",max);
	my_printf("%s",min);
	return 0;
}

	
