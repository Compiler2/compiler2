#define NUM_ITER 69148

#include <header.h>

int main_bench()
{
	int i,n,l[50];
	char s[50][20];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	   my_scanf("%s",s[i]);
	   l[i]=strlen(s[i]);
	}
	for(i=0;i<n;i++)
	{
		if(s[i][l[i]-2]=='e'&&s[i][l[i]-1]=='r')
		{
			s[i][l[i]-2]='\0';
			s[i][l[i]-1]='\0';
		}
		else if(s[i][l[i]-2]=='l'&&s[i][l[i]-1]=='y')
		{
			s[i][l[i]-2]='\0';
			s[i][l[i]-1]='\0';
		}
		else if(s[i][l[i]-2]=='n'&&s[i][l[i]-1]=='g'&&s[i][l[i]-3]=='i')
		{
			s[i][l[i]-2]='\0';
			s[i][l[i]-1]='\0';
			s[i][l[i]-3]='\0';
		}
		my_printf("%s\n",s[i]);
	}
	return 0;
}