#define NUM_ITER 1373202

#include <header.h>

int main_bench()
{
    char a[1000];
    int  b=1;
    my_scanf("%s",a);
    int c=strlen(a),i;
    for(i=0; (a[i]=toupper(a[i]))!=0;i++);
    i=0;
    while(i<c)
    {
     if(a[i]==a[i+1])
          b++  ;   
     else 
     {
          my_printf("(%c,%d)",a[i],b);
     b=1;
     }
     i++;
    } 
}   