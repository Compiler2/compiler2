#include <header.h>

int main_bench() {

       
       
       int n,result[100];
       double ext;

       
       int i,j,temp1=0,temp2=0;
       double temp3;


       my_scanf("%d",&n);
       my_scanf("%d%d",&temp1,&temp2);
       ext=(double)temp2/(double)temp1;
       for(i=1;i<=n-1;i++) {
               my_scanf("%d%d",&temp1,&temp2);
               temp3=(double)temp2/(double)temp1;
               if((temp3-ext)>0.05) {
                       result[i]=1;
               }
               else if((ext-temp3)>0.05) {
                       result[i]=2;
               }
               else {
                       result[i]=3;
               }
       }





       for(i=1;i<=n-1;i++) {
               if(result[i]==1) {
                       my_printf("better\n");
               }
               if(result[i]==2) {
                       my_printf("worse\n");
               }
               if(result[i]==3) {
                       my_printf("same\n");
               }
       }

       return 0;
}