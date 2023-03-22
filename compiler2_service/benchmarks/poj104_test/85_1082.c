#define NUM_ITER 1517132

#include <header.h>



int main_bench()
{
	int n,i,j,len;
	char ch[21],m[10];
	gets(m);
	n=atoi(m);
	for(i=0;i<n;i++)
	{
		gets(ch);
		len=strlen(ch);
		for(j=0;j<len;j++)
		{
			if(j==0)
			{
			if((ch[j]<'A'||ch[j]>'Z')&&(ch[j]<'a'||ch[j]>'z')&&ch[j]!='_')
				break;
			}
			else
			{
			if((ch[j]<'A'||ch[j]>'Z')&&(ch[j]<'a'||ch[j]>'z')&&ch[j]!='_'&&(ch[j]<'0'||ch[j]>'9'))
				break;
			}
		}
		if(j==len)
			my_printf("yes\n");
		else
			my_printf("no\n");
	}
	return 0;
}
