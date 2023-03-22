#include <header.h>

   int main_bench(){
       int n,k,sz[1000],p;
       my_scanf("%d %d",&n,&k);
       for(int i=0;i<n;i++){
           my_scanf("%d",&sz[i]);
       }
       for(int y=0;y<n;y++){
           for(int m=1;m<n;m++){
           if(m!=y){p=sz[y]+sz[m];}
            if(p==k){break;}
           }
           if(p==k){my_printf("yes");break;}
           if(y==n-1){my_printf("no");}
       }
       return 0;
   }
