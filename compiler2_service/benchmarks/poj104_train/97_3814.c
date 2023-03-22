#include <header.h>

int main_bench(){
int m;
my_scanf("%d",&m);
int sz[6]={100,50,20,10,5,1};
for(int i=0;i<=5;i++){
 if(m>=sz[i]){
 my_printf("%d\n",m/sz[i]);
 m-=(m/sz[i])*sz[i];}
 else 
 {my_printf("%d\n",0);}
}
return 0;
}


