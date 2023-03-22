#include <header.h>

int main_bench(){
 int n,i,j,t;
 my_scanf("%d",&n);
 char a[300],b[300];
 for(i=0;i<n;i++){
   my_scanf("%s",&a);
   t=strlen(a);
   for(j=0;j<t;j++){
     if(a[j]=='A') b[j]='T';
     if(a[j]=='T') b[j]='A';
     if(a[j]=='C') b[j]='G';
     if(a[j]=='G') b[j]='C';

   }b[t]='\0';
   my_printf("%s\n",b);
 }


return 0;
}
