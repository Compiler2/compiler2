#define NUM_ITER 1284430

#include <header.h>

int main_bench()
{	
    char str[100];
    int s, _s,mas,min, num,i;
    
    gets(str);
    s=0;
    _s=0;
    num=0;	
    mas=0;
    min=50;	
    for(i=0;str[i]!='\0';i++)	
    {		
         if(str[i]==' ')		
         {			
         if(mas<num) 
         {
                     mas=num;
                     s=i;
         }
         if (min>num)
         {
                     min=num;
                     _s=i;
         }		
         num=0;
         }		
         else			
         num++;	
    }	
    if(mas<num) {mas=num;s=i;}	
    if(min>num) {min=num;_s=i;}	
    for(i=s-mas;i<s;i++) 
    my_printf("%c",str[i]);	
    my_printf("\n");
    for(i=_s-min;i<_s;i++) 
    my_printf("%c",str[i]);
	
    return 0;
    }