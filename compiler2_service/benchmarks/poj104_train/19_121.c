#define NUM_ITER 828450

#include <header.h>


int main_bench()
{
	int i,j=0,flag=0;
    char s[100],a[100],b[100],temp[100];
	gets(s);
	gets(a);
	gets(b);
    for(i=0;s[i]!='\0';i++)
	{
		if(flag==1&&s[i]!=' ')
		{
			temp[j]=s[i];
			j=j+1;
		}
		else if(flag==0&&s[i]!=' ')
		{
			flag=1;
            j=0;
			temp[j]=s[i];
			j=j+1;
		}
		else if(flag==1&&s[i]==' ')
		{
			temp[j]='\0';
			if(strcmp(temp,a)==0)
				my_printf("%s ",b);
			else
				my_printf("%s ",temp);
			flag=0;
			j=0;
		}
		else
			my_printf("%c",s[i]);
	}		
	temp[j]='\0';
	if(strcmp(temp,a)==0)
		my_printf("%s\n",b);
	else
		my_printf("%s\n",temp);
   return 0;
}