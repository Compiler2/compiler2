#define NUM_ITER 11132

#include <header.h>

int main_bench(){
   char id[100][10];
   int n,age[100],i,k=0,m,len,p;
   my_scanf("%d",&n);
   for(i=0;i<n;i++){
       my_scanf("%s %d",&(id[i]),&(age[i]));
   }
   char e[100][10],kong[10];
   int xin[100];
   for(i=0;i<n;i++){
       if(age[i]>59){
           xin[k]=age[i];
           strcpy(e[k],id[i]);
           k++;
       }
   }
   len=k;
   for(m=1;m<=len;m++){
       for(k=0;k<len-m;k++){
            if(xin[k]<xin[k+1]){
                  p=xin[k];strcpy(kong,e[k]);
                  xin[k]=xin[k+1];strcpy(e[k],e[k+1]);
                  xin[k+1]=p;strcpy(e[k+1],kong);
            }
        }
    }
    for(k=0;k<len;k++){
         my_printf("%s\n",e[k]);
    }
    for(i=0;i<n;i++){
       if(age[i]<60){
          my_printf("%s\n",id[i]);
       }
    }
return 0;
   }