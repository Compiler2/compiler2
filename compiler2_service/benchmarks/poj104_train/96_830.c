#include <header.h>

int main_bench(){
    char n[1000];
    int a[1000];
    int i,yu,len,sh;
    my_scanf("%s",&n);
    len=strlen(n);
    for(i=0;i<len;i++)
       a[i]=n[i]-48;
    if(len==1)  my_printf("0\n%s",n);
    if(len==2&&(10*a[0]+a[1])<13) my_printf("0\n%s",n);
    if(len>2||(len==2&&(10*a[0]+a[1])>=13)) 
    {    
         if((10*a[0]+a[1])>=13) { yu=(10*a[0]+a[1])%13;sh=(10*a[0]+a[1])/13;my_printf("%d",sh);}
         if((10*a[0]+a[1])<13){yu=10*a[0]+a[1];}
         for(i=2;i<len;i++)
         {
             
             sh=(10*yu+a[i])/13;
             yu=(10*yu+a[i])%13;
             my_printf("%d",sh);
         }
         my_printf("\n");
         my_printf("%d",yu);
    }
my_scanf("%d",&i);    
return 0;    
    
}