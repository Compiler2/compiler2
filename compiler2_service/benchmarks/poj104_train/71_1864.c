#include <header.h>

int main_bench()
{
    int n,i,j,a,b,c,e;
    my_scanf("%d",&n);
    int month[13]={0,3,0,3,2,3,2,3,3,2,3,2,3};
    for(i=0;i<n;i++){
         my_scanf("%d %d %d",&a,&b,&c);
         int d=0;
         if(b>c){
               e=b;
               b=c;
               c=e;
         }
         for(j=b;j<c;j++){
               d+=month[j];
         }
         if(((a%4==0&&a%100!=0)||a%400==0)&&b<=2){
               d++;
         }
         if(d%7==0){
               my_printf("YES\n");
         }
         else{
               my_printf("NO\n");
         }
    }
    return 0;
}