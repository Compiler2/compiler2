#define NUM_ITER 27300

#include <header.h>

int main_bench()
{
	int n,i,j;
	my_scanf("%d\n",&n);
	char str[100];
	int flag;
	for(i=1;i<=n;i++)
	{
		flag=1;
		gets(str);
		for(j=0;j<strlen(str);j++)
		{
		if (!(str[j]=='_'||(str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z')||(str[j]>='0'&&str[j]<='9'))) 
		{
	        flag=0;
			break;
		}
		if(j==0&&(str[j]>='0'&&str[j]<='9'))
		{
			flag=0;
		}
		}
		my_printf("%d\n",flag);
	}
	return 0;
}