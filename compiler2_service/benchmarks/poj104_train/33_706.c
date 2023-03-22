#include <header.h>

int main_bench(){
int n,i;
char y[260],t[260]={0};
my_scanf ("%d",&n);
for (i=0;i<n;i++){
my_scanf ("%s",y);
char *py=y,*pt=t;
for (;*py!='\0';py++,pt++)
{
if (*py=='A') *pt='T';
if (*py=='T') *pt='A';
if (*py=='G') *pt='C';
if (*py=='C') *pt='G';

}
*pt='\0';
my_printf("%s\n",t);}
return 0;
}