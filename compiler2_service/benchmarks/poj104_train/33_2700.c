#define NUM_ITER 27653

#include <header.h>

int main_bench()
{
int n;
char sz[100000];
my_scanf("%d",&n);
getchar();
for(int i=0;i<n;i++)
 {
   gets(sz);
    for(int j=0;sz[j];j++) 
     {if(sz[j]=='A') sz[j]='T';
      else if(sz[j]=='T') sz[j]='A';
           else if(sz[j]=='G') sz[j]='C';
                else if(sz[j]=='C') sz[j]='G';}
   puts(sz);
 }
return 0;
}


