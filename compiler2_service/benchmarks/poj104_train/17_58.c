#define NUM_ITER 1647047

#include <header.h>

int main_bench()
{
char sen[100];
int z,y,i,j,l,t,m;
while(gets(sen))
{
	z=0;y=0;
	l=strlen(sen);
	my_printf("%s\n",sen);

    for(i=0;i<l;i++)
	{
       if(sen[i]=='(')
	   {z++;}
	   if(sen[i]==')')
	   {y++;}
	}
	   if(z>y)
	   {
		   m=y;
	   }
	   else
	   {
		   m=z;
	   }
	   
	for(i=0;i<m;i++)
	{
		j=1;
		for(t=0;t<l;t++)
		{
	      if(sen[t]=='(')
		  {
		     j=0;z=t;
		  }
	     if(sen[t]==')')
		 { 
		   if(j==0)
		   {
			   sen[z]='0';
			   sen[t]='0';
		   }
		   j=1;
		 }
		}
	}
	for(i=0;i<l;i++)
	{
		if(sen[i]=='(')
		{
			my_printf("$");
		}
		else if(sen[i]==')')
		{
			my_printf("?");
		}
		else if((sen[i]!='(')&&(sen[i]!=')'))
		{
			my_printf(" ");
		}
	}
	my_printf("\n");
	}
return 0;
}
