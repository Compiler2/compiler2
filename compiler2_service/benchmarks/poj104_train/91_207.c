#define NUM_ITER 559486

#include <header.h>

int main_bench()
{
 int i,j,n,k,m;
 char *p,*q,l;
 p=(char *)malloc(100*sizeof(char));
 q=(char *)malloc(100*sizeof(char));
 gets(p);
 m=strlen(p);
 for(i=0,j=0;i<m-1;i++,j++)
    {
     *(q+j)=*(p+i)+*(p+i+1);
     my_printf("%c",*(q+j));
     }
 l=*p+*(p+m-1);
 my_printf("%c",l);
}