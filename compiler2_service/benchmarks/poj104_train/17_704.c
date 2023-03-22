#define NUM_ITER 12674

#include <header.h>

int main_bench()
{
	char a[100][101],b[100][101],c='(',d=')';
	int i,j,k;
	for(k=0;k<=20;k++)
	{
		for(i=0;i<101;i++) a[k][i]=0;
	    gets(a[k]);
		strcpy(b[k],a[k]);
	    for(i=0;i<101&&a[k][i]!=0;i++)
		     if(a[k][i]==d)
			     for(j=i-1;j>=0;j--)
				     if(a[k][j]==c) {a[k][i]=a[k][j]=1;break;}
        for(i=0;i<101&&b[k][i]!=0;i++) my_printf("%c",b[k][i]);
		my_printf("\n");
	    for(i=0;i<101&&a[k][i]!=0;i++)
		    if(a[k][i]==c) my_printf("$");
		    else if(a[k][i]==d) my_printf("?");
		         else my_printf(" ");
		my_printf("\n");
	}
	return 0;
}
