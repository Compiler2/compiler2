#define NUM_ITER 854869

#include <header.h>

int main_bench()
{
	char str1[80],str2[80];
	int a,b,m,n,c,d,e,f;
	my_scanf("%s%s",str1,str2);
	m=strlen(str1);
	n=strlen(str2);
	if(m!=n)
		my_printf("NO");
	else
	{
		for(a=0;a<m;a++)
			for(c=0;c<m-a;c++)
				if(str1[c]<str1[c+1])
				{
					e=str1[c];
				    str1[c]=str1[c+1];
				    str1[c+1]=e;
				}
			for(b=0;b<n;b++)
				for(d=0;d<n-b;d++)
					if(str2[d]<str2[d+1])
					{
						f=str2[d];
						str2[d]=str2[d+1];
						str2[d+1]=f;
					}
		if(strcmp(str1,str2)==0)
			my_printf("YES");
		else
			my_printf("NO");
	}
}
	