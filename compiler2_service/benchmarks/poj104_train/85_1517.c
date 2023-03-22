#define NUM_ITER 36321

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	char a[100];
	for(int i=0;i<n;i++)
	{
		my_scanf("%s",a);
		if(a[0]-'A'>=0&&a[0]-'Z'<=0||
			a[0]-'_'==0||
			a[0]-'a'>=0&&a[0]-'z'<=0)
		{
			for(int j=1;j<100;j++)
			{
				if(a[j]=='\0')
				{
					my_printf("yes\n");
					break;
				}else
				if(a[j]-'A'>=0&&a[j]-'Z'<=0||
			       a[j]-'_'==0||
			       a[j]-'a'>=0&&a[j]-'z'<=0||
					a[j]-'0'>=0&&a[j]-'9'<=0)
				{
					continue;
				}else
				{
					my_printf("no\n");
					break;
				}

			}
		}else
		{
			my_printf("no\n");
		}
	}
        return 0;
}