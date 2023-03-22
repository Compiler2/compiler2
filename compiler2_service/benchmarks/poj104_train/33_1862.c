#include <header.h>

int main_bench()
{
 int n,i,l,j;
 char a[255],b[255]={'\0'};
 my_scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  my_scanf("%s",a);
  l=strlen(a);
  for(j=0;j<l;j++)
   {
    if(a[j]=='A')
    b[j]='T';
    if(a[j]=='T')
    b[j]='A';
    if(a[j]=='C')
    b[j]='G';
    if(a[j]=='G')
    b[j]='C';
   }
  my_printf("%s\n",b);
  for(j=0;j<l;j++)
   b[j]='\0';
 }
 return 0;
}


 