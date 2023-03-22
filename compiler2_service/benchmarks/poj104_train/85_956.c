#include <header.h>

int main_bench()
{
	int n,i;
	char a[100][21],*p;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",a[i]);
		p=a[i];
		
		while(*p!='\0')
		{
			if(a[i][0]>='0'&&a[i][0]<='9')
			{
				my_printf("no\n");
				break;
			}
            if((*p>='0'&&*p<='9')||(*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z')||*p=='_')
			{
				p++;
			}
			else {
				my_printf("no\n");
				break;
			}
			if(*p=='\0')
			{
				my_printf("yes\n");
			}
		}
			
	}
	return 0;
}