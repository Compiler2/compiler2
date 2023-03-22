#define NUM_ITER 882801

#include <header.h>

int main_bench()
{
	int i,j,s,m,n,k;
	char str1[257],str2[257],str3[257];
	my_scanf("%s",str1);
	my_scanf("%s",str2);
	my_scanf("%s",str3);
	m=strlen(str1);
	n=strlen(str2);
	k=strlen(str3);
	for(i=0;i<=m-n;i++)
	{
		s=0;
		for(j=i;j<i+n;j++)
		{
			if(str2[j-i]==str1[j])
				s++;
		}
		if(s==n)
		{
			for(j=0;j<i;j++)
			{
				my_printf("%c",str1[j]);
			}
			for(j=0;j<k;j++)
			{
				my_printf("%c",str3[j]);
			}
			for(j=i+n;j<m;j++)
			{
				my_printf("%c",str1[j]);
			}
			break;
		}
	}
    if(s!=n)
		my_printf("%s",str1);
	return 0;
}
