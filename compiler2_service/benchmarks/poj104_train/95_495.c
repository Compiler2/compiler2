#define NUM_ITER 961439

#include <header.h>

int main_bench()
{
	char s[2][81];
	int i,j,k;
	for (i=0;i<2;i++)
	{
		gets(s[i]);
		for (j=0;s[i][j]!='\0';j++)
		{
			if ((s[i][j]>='a')&&(s[i][j]<='z')) s[i][j]=s[i][j]-32;
		}
	}
	k=strcmp(s[0],s[1]);

	if (k>0) my_printf(">");
	if (k==0) my_printf("=");
	if (k<0) my_printf("<");
}
