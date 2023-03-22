#define NUM_ITER 29950

#include <header.h>

char b(char f);
int main_bench(){
   char s[256];
   int i,j,n;
   my_scanf("%d",&n);
   for(j=0;j<n;j++) {
       my_scanf("%s",s);
       for(i=0;s[i];i++)
           s[i]=b(s[i]);
       my_printf("%s\n",s);
   }
return 0;
}
char b(char f){
   if(f=='A')return 'T';
   if(f=='T')return 'A'; 
   if(f=='C')return 'G'; 
   if(f=='G')return 'C'; 
} 