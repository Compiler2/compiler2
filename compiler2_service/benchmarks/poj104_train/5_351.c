#define NUM_ITER 891167

#include <header.h>

int main_bench(){

int i,b,d;
double n,e;
char s1[500],s2[500];
int c=0;

my_scanf ("%lf\n",&n);
gets(s1);
gets(s2);
b=strlen(s1);
d=strlen(s2);
for (i=0;i<b;i++)
	{if((s1[i]!='A')&&(s1[i]!='T')&&(s1[i]!='C')&&(s1[i]!='G'))
{my_printf ("error");
return 0;}
	}

for (i=0;i<b;i++)
	{if((s2[i]!='A')&&(s2[i]!='T')&&(s2[i]!='C')&&(s2[i]!='G'))
{my_printf ("error");
return 0;}
	}



if(b==d)
	{for(i=0;i<b;i++)
		{if(s1[i]==s2[i])
				{c++;}
			}
	e=1.0*c/b;
	if(e>=n)
		{my_printf ("yes");}
	else 
		{my_printf ("no");}
	}


else 
	{my_printf ("error");
	}

	
return 0;
}