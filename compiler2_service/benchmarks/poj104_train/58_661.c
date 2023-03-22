#define NUM_ITER 37079

#include <header.h>

int main_bench()
{
	int n,i=1,j,len;
	char s[81]={0};
	my_scanf("%d",&n);
	getchar();
	for(j=0;j<n;j++)
	{
	gets(s);
	if(s[0]=='_'||(s[0]>='A'&&s[0]<='Z')||(s[0]>='a'&&s[0]<='z'))
	{
		i=1;
		while(s[i]!='\0')
		{
			if((s[i]<'0'||(s[i]>'9'&&s[i]<'A')||(s[i]>'Z'&&s[i]<'a')||s[i]>'z')&&s[i]!='_')
			{
				my_printf("0\n");
				break;
			}
			i++;
		}
		if(s[i]=='\0')my_printf("1\n");
	}
	else
    my_printf("0\n");
}
return 0;
}
		
