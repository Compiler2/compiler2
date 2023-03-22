#include <header.h>

int main_bench()
{
	char w[256],s[256],r[256];
	int len1,len2,len3,i,j,k;
	my_scanf("%s\n",w);
	my_scanf("%s\n",s);
	my_scanf("%s",r);
	len1=(int)strlen(s);
	len2=(int)strlen(w);
	len3=(int)strlen(r);
	for(i=0;i<len2;i++)
	{
		if(w[i]==s[0])
		{
			for(j=1;j<len1;j++)
			{
				if(s[j]!=w[i+j])
				{
					break;
				}
			}
		}
		if(j==len1)
		{
			for(k=0;k<len3;k++)
			{
				w[i+k]=r[k];
			}
			break;
		}

	}
	my_printf("%s",w);


	return 0;
}