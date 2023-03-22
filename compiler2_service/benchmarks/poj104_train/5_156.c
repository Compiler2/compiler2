#define NUM_ITER 939714

#include <header.h>

int main_bench()
{char a[500],b[500];
 int i,n;
 float m,j=0;
 	my_scanf("%f",&m);
 	my_scanf("%s",a);
 	my_scanf("%s",b);
 	n=strlen(a);
 	if((strlen(a))!=(strlen(b)))
 	{	my_printf("error");
 		return 0;
	}
 	for(i=0;i<n;i++)
 	{	if((a[i]!='A')&&(a[i]!='T')&&(a[i]!='C')&&(a[i]!='G')||((b[i]!='A')&&(b[i]!='T')&&(b[i]!='C')&&(b[i]!='G')))
 		{	my_printf("error");
 			return 0;
    	}
    	else
    	{	if(a[i]==b[i])
    		j++;
		}
 	}
 	if(j/n>=m)
 	my_printf("yes");
 	else
 	my_printf("no");
 	return 0;
}