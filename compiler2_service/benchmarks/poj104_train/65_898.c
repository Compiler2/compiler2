#define NUM_ITER 31540

#include <header.h>

int main_bench(){
     int n;
     int a=0;
     int b=0;
     int ax[250];
     int bx[250];
     my_scanf("%d",&n);
     for(int i=0;i<n;i++){
            my_scanf("%d %d",&ax[i], &bx[i]);
    }
    for(int i=0;i<n;i++){
        if((ax[i]==1)&&(bx[i]==0)){b=b+1;}
         if((ax[i]==0)&&(bx[i]==1)){a=a+1;}
          if((ax[i]==2)&&(bx[i]==0)){a=a+1;}
          if((ax[i]==1)&&(bx[i]==2)){a=a+1;}
          if((ax[i]==2)&&(bx[i]==1)){b=b+1;}
           if((ax[i]==0)&&(bx[i]==2)){b=b+1;}
            if(ax[i]==bx[i]){a=a;b=b;}
    }
    if(a>b){my_printf("A");}
      if(a<b){my_printf("B");}
        if(a==b){my_printf("Tie");}
     return 0;
}
