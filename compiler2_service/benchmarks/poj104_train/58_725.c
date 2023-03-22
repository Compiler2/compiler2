#include <header.h>

int main_bench()
{
	int i,j=0,t,n,r;
    char str[100]={0};
    my_scanf("%d",&n);
	getchar();
	do{
		r=0;
		gets(str);
        t=strlen(str);
		for(i=0;i<t;i++)
		{
			if(i==0)
			{
				if(str[i]=='_')
					r++;
				if(str[i]>96&&str[i]<123)
					r++;
				if(str[i]>64&&str[i]<91)
					r++;
			}
			else
			{
				if(str[i]=='_')
					r++;
				if(str[i]>96&&str[i]<123)
					r++;
				if(str[i]>64&&str[i]<91)
					r++;
				if(str[i]>47&&str[i]<58)
					r++;
			}
		}
		if(r==t)
			my_printf("1\n");
		else
			my_printf("0\n");
		j++;
	}while(j<n);
	return 0;
}




