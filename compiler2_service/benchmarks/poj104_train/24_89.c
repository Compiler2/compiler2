#define NUM_ITER 509297

#include <header.h>

int main_bench()
{
int n=0,i,word=0,num=0,max=0,min=20,mx=0,mn=0;
char string[500];
int wn[50],wm[50];
for(i=0;i<50;i++) wn[i]=1;
gets(string);
for(i=0;string[i]!='\0';i++)
  {if(string[i]==' ') {word=0;n++;}
  else if(word==0){word=1;num++;wm[n]=i;}
  else if(word) wn[n]++;}

for(i=0;i<num;i++)
  {if(wn[i]>max) {max=wn[i];mx=wm[i];}
   if(wn[i]<min) {min=wn[i];mn=wm[i];}}
for(i=mx;i<mx+max;i++)
my_printf("%c",string[i]);
my_printf("\n");
for(i=mn;i<mn+min;i++)
my_printf("%c",string[i]);
my_printf("\n");
}