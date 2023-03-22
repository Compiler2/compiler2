#define NUM_ITER 930103

#include <header.h>

int main_bench()
{
	char s1[256],s2[256],s3[256];
	int i,j,a=1,n,m,k;
	my_scanf("%s",s1);
	my_scanf("%s",s2);
	my_scanf("%s",s3);
	n=strlen(s1);
	m=strlen(s2);
	for(i=0;i<n;i++)
		if(s1[i]==s2[0])
		{
			for(j=1;j<m;j++)
			{
				if(s1[j+i]==s2[j])
					a++;
			}
			if(a==m)
			{
				for(k=0;k<i;k++)
					my_printf("%c",s1[k]);
				for(k=0;k<m;k++)
					my_printf("%c",s3[k]);
				for(k=i+m;k<n;k++)
					my_printf("%c",s1[k]);
				my_printf("\n");
				break;
			}	
		}
	if(a!=m) my_printf("%s\n",s1);
	return 0;
}
