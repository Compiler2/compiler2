#define NUM_ITER 17618

#include <header.h>


int main_bench()
{
	int n,i,j,k,m;
	int len;
	char c[101]={'0'};
	my_scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
      my_scanf("%s",c);
	  my_printf("%s\n",c);
	  len=strlen(c);
      for(j=len-1;j>=0;j--)
	  {
		  if(c[j]!='(' && c[j]!=')')
			  c[j]=' ';
		  if(c[j]=='(' && j==len-1)
			  c[j]='$';
		  if(c[j]=='(')
		  {
			  k=j;
			  for(m=k;m<len;m++)
			  {
                  if(c[m]==')')
				  {
					  c[m]=' ';
					  c[j]=' ';
					  break;
				  }
			  }
			  if(m==len-1 && c[len-1] !=' ')
			  {
				  c[j]='$';
			  }
		  }
	  }
	  for(j=0;j<len;j++)
	  {
		  if(c[j]==')')
			  c[j]='?';
		  if(c[j]=='(')
			  c[j]='$';
	  }
	  my_printf("%s\n",c);
	}
	return 0;
}
