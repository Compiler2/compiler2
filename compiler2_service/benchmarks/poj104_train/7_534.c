#include <header.h>

int main_bench()
{
	char string[256],substr[256],replace[256];
	int i,j,k,len,len1,len2,m;
	my_scanf("%s%s%s",string,substr,replace);
	len1=strlen(string);
	len2=strlen(substr);
	for(i=0;i<len1;i++)
	{
		if(substr[0]==string[i])
		{
			len=0;
			for(j=0;j<len2;j++)
			{
				if((substr[j]==string[i+j]) && len<len2) len++;
			}
			if(len==len2)
			{
				for(k=0;k<i;k++) my_printf("%c",string[k]);
				my_printf("%s",replace);
				for(k=i+len2;k<len1;k++) my_printf("%c",string[k]);
				m=1;
			}
		}
		if(m==1) break;
	}
	if(m!=1) my_printf("%s",string);
	return 0;
}
