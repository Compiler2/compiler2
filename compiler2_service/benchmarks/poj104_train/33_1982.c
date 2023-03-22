#include <header.h>

int main_bench()
{int n,i,j;
	char jj[1000][300];
		my_scanf("%d",&n);
for(i=0;i<n;i++)
{
	my_scanf("%s",jj[i]);
		for(j=0;j<strlen(jj[i]);j++)
		{
			if(jj[i][j]=='A')
			{jj[i][j]='T';
			continue;}
			if(jj[i][j]=='T'){
				jj[i][j]='A';
			continue;}
			if(jj[i][j]=='G'){
				jj[i][j]='C';
			continue;}
			if(jj[i][j]=='C'){
				jj[i][j]='G';
			continue;}
		}
		my_printf("%s\n",jj[i]);}
		return 0;

return 0;
}


