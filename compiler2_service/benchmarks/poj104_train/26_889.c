#define NUM_ITER 1316915

#include <header.h>

int main_bench()
{
   char s[101],t[101];
   int n,i,j=0;
   gets(s);
   n=strlen(s);
   for(i=0;i<n;i++){  
        if(s[i]!=' '){
     t[j]=s[i];j++;}
    else if(s[i]==' '&&s[i+1]==' '){
      continue;}
    else{
       t[j]=s[i];j++;}}
     t[j]='\0';
    my_printf("%s",t);
    return 0;
}