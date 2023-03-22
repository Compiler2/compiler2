#include <header.h>

int main_bench(){
   int n,k;
   int y=0;
   int s[1000],z[1000000];
   my_scanf("%d%d",&n,&k);
   int i,u,j,v;
   for(i=0;i<n;i++){
   my_scanf("%d",&s[i]);
   }
   for(u=0;u<n;u++){
     for(j=u+1;j<n;j++){
       z[y]=s[u]+s[j];
       y++;
       }
     }
   int a=0;
   for(v=0;v<y;v++){
     if(z[v]==k){
      a=1;
      break;
     }
   }
   if(a==1){my_printf("yes");}
   else{my_printf("no");}
   return 0;
}