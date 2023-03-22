#include <header.h>

int main_bench()
{
	int i=0,j,k,y,x=0,q=0;
	char a[257],b[257],c[257];
	gets(a);
	gets(b);
	gets(c);
		for(j=0;j<strlen(a);j++)
		{
			if(b[i]==a[j])
			{
				for(k=0;k<strlen(b);k++)
				{
					if(b[i+k]==a[j+k])
					{
						x++;
					}
					if(x==strlen(b))
					{
						for(y=0;y<j;y++)
						{
							my_printf("%c",a[y]);
						}
						for(y=0;y<strlen(c);y++)
						{
							my_printf("%c",c[y]);
						}
						for(y=j+strlen(b);y<strlen(a);y++)
						{
							my_printf("%c",a[y]);
						}
						q++;
						break;
					}
				}
			}
			if(q==1)
			{
				break;
			}
			if(j==strlen(a)-1)
			{
				my_printf("%s",a);
			break;
			}
		}
		return 0;
}