#define NUM_ITER 32287

#include <header.h>

int main_bench()
{
int i,j,n;
my_scanf("%d\n",&n);char a[3000];
for(j=0;j<n;j++)
{
  
  gets(a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]=='A')
    {a[i]='T';continue;}
    if(a[i]=='T')
    {a[i]='A';continue;}
	if(a[i]=='G')
	{a[i]='C';continue;}
    if(a[i]=='C')
    {a[i]='G';continue;}
  } 
  puts(a);
}
return 0;

}