#define NUM_ITER 1442524

#include <header.h>

int main_bench()
{
    char a[100];
    int n,i,count=1,j=0;
    my_scanf("%s",&a);
    while(a[j]!='\0')
    {             
     if(a[j]>='a'&&a[j]<='z') a[j]=a[j]-32; 
     j++;             
     }
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]==a[i+1])
      count+=1;
      else {my_printf("(%c,%d)",a[i],count);count=1;continue;}
     }
}
