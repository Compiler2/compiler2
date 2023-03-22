#define NUM_ITER 4346

#include <header.h>


int main_bench(){

    int sz[100];

    int i,e,n,k,dt;

    my_scanf("%d",&n);

    for(i=0;i<n;i++){

        my_scanf("%d",&(sz[i]));

    }

    for(e=1;e<=n;e++){

        for(k=0;k<n-e;k++){

            dt=sz[k];

            sz[k]=sz[k+1];

            sz[k+1]=dt;

        }

     }

     for(i=0;i<n;i++){

         if(i<n-1){

         my_printf("%d ",sz[i]);

         }else{

         my_printf("%d",sz[i]);

         }

      }

     return 0;

}