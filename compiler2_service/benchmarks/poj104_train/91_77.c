#define NUM_ITER 1263401

#include <header.h>

int main_bench()
{
int m,n,i,j,k;
char a[123],b[123];
gets(a);
m=strlen(a);
  for(i=0;i<m-1;i++)
  {
  b[i]=((int)(a[i])+(int)(a[i+1]));
  }
  b[m-1]=((int)(a[m-1])+(int)(a[0]));
for(j=0;j<m;j++)
		my_printf("%c",b[j]);
	return 0;



}
 
