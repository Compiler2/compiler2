#define NUM_ITER 1813

#include <header.h>

int main_bench()
{
	char str[100][1000], s[1000];
	int i, j, n, a[1000], temp;
	for(i=0; i<100; i++)
	{
		str[i][0]='\0';
	}
	i=0;
	do
	{
		gets(str[i]);
		if(str[i][0]=='\0')
			break;
		i++;
	}while(1);
	n=i-1;
	for(i=0; i<=n; i++)
	{
		for(j=0; j<1000; j++)
			s[j]='\0'; 
		temp=0;
		my_printf("%s\n",str[i]);
		for(j=0; j< (strlen(str[i])); j++)
		{
			if(str[i][j]=='(')
			{
				s[j]='$';
				temp++;
				a[temp]=j; 
			}
			else if(str[i][j]==')')
			{
				if(temp==0)
					s[j]='?';
				else
				{
					s[a[temp]]=' ';
					temp--;
					s[j]=' ';
				}
			}
			else
				s[j]=' ';
		}
		my_printf("%s\n",s);
	}
}