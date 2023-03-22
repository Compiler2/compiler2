#include <header.h>

int main_bench()
{
	char sz[50];
	int n;
	my_scanf("%d",&n);
	int count,x;
	for(int j=1;j<=n;j++)
	{
		count=0;
		x=0;
		my_scanf("%s",sz);
		for(int i=0;sz[i]!='\0';i++)
		{
			x++;
			if(sz[0]=='_'||(sz[0]>='a'&&sz[0]<='z')||(sz[0]>='A'&&sz[0]<='Z'))
			{
				if(sz[i]>='0'&&sz[i]<='9')
					count++;
			    if(sz[i]>='a'&&sz[i]<='z')
				    count++;
			    if(sz[i]>='A'&&sz[i]<='Z')
				    count++;
			    if(sz[i]=='_')
				    count++;
			}
		}
		if(count==x){
			my_printf("yes\n");
		}else{
			my_printf("no\n");
		}
	}
	return 0;
}