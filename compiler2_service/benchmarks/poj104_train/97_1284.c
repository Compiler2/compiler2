#include <header.h>

int main_bench(){
 int m,bai,wushi,ershi,shi,wu,yi;
 int a,b,c,d,e,f;
 my_scanf("%d",&m);
 bai=m/100;
 my_printf("%d\n",bai);
 if(m%100>=50)wushi=1;
 else if(m%100<=50)wushi=0;
 my_printf("%d\n",wushi);
 if(m%50>=40)ershi=2;
 else if(m%50>=20&&m%50<40)ershi=1;
 else if(m%50<20)ershi=0;
 my_printf("%d\n",ershi);
 if(m-bai*100-wushi*50-20*ershi>9)shi=1;
 else if(m-bai*100-wushi*50-20*ershi<10)shi=0;
 my_printf("%d\n",shi);
 if(m%10>=5)wu=1;
 else if(m%10<5)wu=0;
 my_printf("%d\n",wu);
 yi=m%5;
 my_printf("%d\n",yi);
 return 0;
}