#define NUM_ITER 1169640

#include <header.h>

int main_bench()
{
    int y,m,d,j;
    my_scanf("%d %d %d",&y,&m,&d);
    if(y%4==0)
    {
              if(y%100==0)
              {
                          if(y%400==0)
                          j=1;
                          else
                          j=0;
              }
              else
              j=1;
              
    }
    else
    j=0;
    if(j==1)
    {      switch(m)
           {case 1:my_printf("%d",d);break;
           case 2:my_printf("%d",d+31);break;
           case 3:my_printf("%d",d+60);break;
           case 4:my_printf("%d",d+91);break;
           case 5:my_printf("%d",d+121);break;
           case 6:my_printf("%d",d+152);break;
           case 7:my_printf("%d",d+182);break;
           case 8:my_printf("%d",d+213);break;
           case 9:my_printf("%d",d+244);break;
           case 10:my_printf("%d",d+274);break;
           case 11:my_printf("%d",d+305);break;
           case 12:my_printf("%d",d+335);break;
           }
} 


 
    if(j==0)
    {switch(m)
           {case 1:my_printf("%d",d);break;
           case 2:my_printf("%d",d+31);break;
           case 3:my_printf("%d",d+59);break;
           case 4:my_printf("%d",d+90);break;
           case 5:my_printf("%d",d+120);break;
           case 6:my_printf("%d",d+151);break;
           case 7:my_printf("%d",d+181);break;
           case 8:my_printf("%d",d+212);break;
           case 9:my_printf("%d",d+243);break;
           case 10:my_printf("%d",d+273);break;
           case 11:my_printf("%d",d+304);break;
           case 12:my_printf("%d",d+334);break;
           }
}
           
getchar();
getchar();
    
    

}