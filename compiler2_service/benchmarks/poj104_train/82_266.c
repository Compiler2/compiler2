#include <header.h>

int main_bench()
{
     int n,h,l,i,j=0,k=0;
     my_scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
           my_scanf("%d %d",&h,&l);
           if((h<90)||(h>140)||(l<60)||(l>90)) j=0;
           if((h<=140)&&(h>=90)&&(l<=90)&&(l>=60)) 
           {j++;
            if(j>=k) k=j;}         
                      
     }
     my_printf("%d",k);
return 0;
}
