#include <header.h>


int main_bench()
{
	char str1[55];
	char str2[55];
	my_scanf("%s",str1);
	getchar();
	my_scanf("%s",str2);
	int l1,l2;
	l1=strlen(str1);
	l2=strlen(str2);
	int i,j,count=0;
	for(i=0;i<l2;i++)
	{
		if(str2[i]==str1[0])
		{
			for(j=1;j<l1;j++)
			{
				if(str1[j]==str2[i+j])
					count++;
			}
			if(count==l1-1)
				my_printf("%d",i);
		}
	}
	return 0;
}