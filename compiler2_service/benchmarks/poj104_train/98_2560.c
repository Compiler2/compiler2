#define NUM_ITER 1123736

#include <header.h>

char a[10000],tmp[40],cn;
int n,i,j,l=0,tmpl=0;

int main_bench()
{
	
	gets(&cn);
	n=atoi (&cn);
	gets(a);
    for (i=0;i<n;i++)
	{
		for (j=0;j<40;j++)
		{
			if (a[j+l]!=' ')
			{
				tmp[j]=a[j+l];
			}
			else 
			{
				tmp[j]='\0';
				j=40;	
			}
		}
		l+=strlen(tmp)+1;
        l:if (tmpl==0)
		{
			my_printf ("%s",tmp);
			tmpl+=strlen(tmp)+1;
		}
        else if ((strlen(tmp)+tmpl)<=80)
		{
			my_printf (" %s",tmp);
  		    tmpl+=strlen(tmp)+1;
		}
		else if ((strlen(tmp)+tmpl)>80)
		{
			my_printf ("\n");
			tmpl=0;
			goto l;
		}
        
	}
	return 0;
}