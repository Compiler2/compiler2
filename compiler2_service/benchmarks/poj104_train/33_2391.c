#define NUM_ITER 234

#include <header.h>

int main_bench()
{  int n,i,j;
   char m[1000][1000],t[1000][1000];
   my_scanf("%d",&n);
   for(i=0;i<n;i++)
   { 
	   my_scanf("%s",m[i]);
   }
   for(i=0;i<n;i++)
	{
		for(j=0;j!=1000;j++)
		{   
			if(m[i][j]=='A')
				t[i][j]='T';
			else if(m[i][j]=='T')
				t[i][j]='A';
			else if(m[i][j]=='G')
				t[i][j]='C';
			else if(m[i][j]=='C')
				t[i][j]='G';
		}
	}
	for(i=0;i<n;i++)
	{
	  my_printf("%s\n",t[i]);
	}
	return 0;
}
