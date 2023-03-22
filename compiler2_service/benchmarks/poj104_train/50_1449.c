#include <header.h>

int main_bench(){
int n,first;
my_scanf("%d",&n);
if(6-n>0){first=6-n;}
else{first=13-n;}

if((13-first)%7==0){my_printf("1\n");}
if((13+31-first)%7==0){my_printf("2\n");}
if((13+31+28-first)%7==0){my_printf("3\n");}
if((13+31+28+31-first)%7==0){my_printf("4\n");}
if((13+31+28+31+30-first)%7==0){my_printf("5\n");}
if((13+31+28+31+30+31-first)%7==0){my_printf("6\n");}
if((13+31+28+31+30+31+30-first)%7==0){my_printf("7\n");}
if((13+31+28+31+30+31+30+31-first)%7==0){my_printf("8\n");}
if((13+31+28+31+30+31+30+31+31-first)%7==0){my_printf("9\n");}
if((13+31+28+31+30+31+30+31+31+30-first)%7==0){my_printf("10\n");}
if((13+31+28+31+30+31+30+31+31+30+31-first)%7==0){my_printf("11\n");}
if((13+31+28+31+30+31+30+31+31+30+31+30-first)%7==0){my_printf("12\n");}


return 0;
}