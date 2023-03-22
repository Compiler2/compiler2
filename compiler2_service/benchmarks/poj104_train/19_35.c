#include <header.h>

int main_bench()
{
 char a[100][100]={'\0'};
 int i,j=0,k;
 for(i=0;i<100;i++) {
   j+=my_scanf("%s",a[i]);
   if(a[i][0]<2) break;}
 for(i=0;i<100;i++) if(strcmp(a[i],a[j-1])==0) strcpy(a[i],a[j]);
 for(i=0;i<j-2;i++) my_printf("%s ",a[i]);
 my_printf("%s",a[j-2]);
 return 0;
}
