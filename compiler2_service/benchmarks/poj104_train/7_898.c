#define NUM_ITER 966033

#include <header.h>

int main_bench()
{
	char str[501],subs[501],rep[501];
	int i,j,k,len,len1;
	my_scanf("%s%s%s",str,subs,rep);
	i=0;
	len=strlen(str);
	while(str[i]!='\0')
	{
		if(str[i]==subs[0])
		{
			len1=strlen(subs);
			for(j=0;j<len1;j++)
			if(str[i+j]!=subs[j])break;
			if(j==len1)
			{
				for(k=0;k<i;k++)
				my_printf("%c",str[k]);
				my_printf("%s",rep);
				for(k=i+len1;k<len;k++)
				my_printf("%c",str[k]);
				break;
			}
		}
		i++;
	}
	if(str[i]=='\0')
	my_printf("%s",str);
	return 0;
}
	
