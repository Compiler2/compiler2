#include <header.h>

main_bench()
{
	int n,i,len,j,t;
	char a[30];
	my_scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		t=1;
		my_scanf("%s",a);
		len=strlen(a);
		if(a[0]>='0'&&a[0]<='9')
			my_printf("no\n");
		else
		{
			for(j=0;j<len;++j)
				if(!(a[j]>='0'&&a[j]<='9'||a[j]>='a'&&a[j]<='z'||a[j]>='A'&&a[j]<='Z'||a[j]=='_'))
					t=0;
			if(t)
				my_printf("yes\n");
			else
				my_printf("no\n");
		}

			
	}


}
