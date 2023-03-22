#define NUM_ITER 23160

#include <header.h>

int main_bench(){
   int n,i,a,b;
   int sz[2][200];
   my_scanf ("%d",&n);
   for (i=0;i<=n-1;i++){
     my_scanf("%d",&sz[0][i]);
     my_scanf("%d",&sz[1][i]);
                        }
   for (i=0,a=0,b=0;i<=n-1;i++){
    if(sz[0][i]!=0&&sz[1][i]!=0&&sz[0][i]!=sz[1][i])
       {if(sz[0][i]>sz[1][i]){b=b+1;}
        else if(sz[0][i]<sz[1][i]){a=a+1;}
        }
    else if(sz[0][i]==sz[1][i]){continue;}
    else if(sz[0][i]==0&&sz[1][i]==1){a=a+1;}
    else if(sz[0][i]==0&&sz[1][i]==2){b=b+1;}
    else if(sz[1][i]==0&&sz[0][i]==1){b=b+1;}
    else if(sz[1][i]==0&&sz[0][i]==2){a=a+1;}
    }
  if(a>b){my_printf("A");}
  else if(a<b){my_printf("B");}
  else if(a==b){my_printf("Tie");}
  return 0;
}


  