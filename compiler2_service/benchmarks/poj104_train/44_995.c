#define NUM_ITER 483856

#include <header.h>

void nixu(char s[])
{int j,k,h,len=strlen(s);


	if(s[0]=='-') 
	{if(s[1]=='0')  my_printf("0\n");
	else {my_printf("-");
			for(k=0;k<len;k++)
			{
             s[k]=s[k+1];
			}

			nixu(s);}
	}
	else if(s[0]=='0')  my_printf("0\n");
	else if(s[0]>=49&&s[0]<=57)  
		{
			for(h=len-1;h>=0;h--)
		{if(h==len-1&&s[h]!='0')my_printf("%c",s[h]);
		else if(h!=len-1&&  (s[h+1]!='0')|| (s[h]!='0')   )my_printf("%c",s[h]);
		}
	my_printf("\n");}
}
int main_bench()
{
	int i;
	char a[10];
	for(i=0;i<6;i++)
	{
	my_scanf("%s",a);

	nixu(a);
	}
return 0;
}