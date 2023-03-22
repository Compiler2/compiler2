#define NUM_ITER 273183

#include <header.h>

int main_bench()
{
 char a[80]={'\0'},b[80]={'\0'};
 int i,d;
 gets(a);
 gets(b);
 for(i=0;i<80;i++) {
 if(a[i]<91&&a[i]>64) a[i]+=32;
 if(b[i]<91&&b[i]>64) b[i]+=32;
 }
 d=strcmp(a,b);
 if(d>0) my_printf(">");
 else if(d<0) my_printf("<");
 else my_printf("=");
 return 0;
}