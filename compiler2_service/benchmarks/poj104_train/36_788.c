#include <header.h>

int main_bench()
{
	char str[200],zfc[200],x;
	int i,j,h,len1,len2,m=0,n=0,s;
	my_scanf("%s %s",str,zfc);
	len1=strlen(str);
	len2=strlen(zfc);
	if(len1!=len2)
	{my_printf("NO");}
	else
	{
    	for(i=0;i<len1;i++)
		{s=0;m=0;
	    	for(j=0;j<len2;j++)
			{
		    	if(str[i]==zfc[j])
				{
			    	m++;
				}
			}
			x=str[i];
			for(h=0;h<len1;h++)
			{	
				if(str[h]==x)
				{s++;}
			}
	    	if(m!=s)
			{
			my_printf("NO");
			break;
			}
	    	else
			{n++;}
		}
	    if(n==len1)
		{my_printf("YES");}
	}
	return 0;
}