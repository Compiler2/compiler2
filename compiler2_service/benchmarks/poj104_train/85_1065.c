#define NUM_ITER 34175

#include <header.h>


int main_bench()
{
	int f=0,b=0,n;                
	char a[81],*p;

	my_scanf("%d",&n);
    getchar();

	while(n>0)
	{
		gets(a);
		p=a;
		if( (*p=='_') || (*p>='a'&&*p<='z') || (*p>='A'&&*p<='Z') )
			b=1;
		else
			b=0;

		while(*p!='\0')
		{
			if( (*p=='_')|| (*p>='a'&&*p<='z') || (*p>='A'&&*p<='Z') || (*p>='0'&&*p<='9') )
				f=1;
			else
			{
				f=0;
				break;
			}

			p++;
		}

		if(f==1&&b==1)
			my_printf("yes\n");
		else
			my_printf("no\n");
		n--;
	}
 return 0;
}
