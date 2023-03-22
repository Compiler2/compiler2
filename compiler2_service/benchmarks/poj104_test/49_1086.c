#include <header.h>

int main_bench()
{
	static char str[501];
	int len,i,j,p,l;
	gets(str);
	for(len=0;str[len]!='\0';len++);
	for(l=2;l<=len;l++)
	{
		for(i=0;i<=len-l;i++)
		{
			for(j=0;j<l/2;j++)
			{
				if(str[i+j]!=str[i+l-1-j])
				{
					goto here;
				}
			}
				for(p=i;p<i+l;p++)
					my_printf("%c",str[p]);
				my_printf("\n");
				here: continue;
		}
	}
	
	return 0;
}
