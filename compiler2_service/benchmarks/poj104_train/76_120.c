#define NUM_ITER 3579

#include <header.h>

int main_bench(){
int n,i,j,k,t,num,a,b,m,max;
int x[50000][2];
my_scanf("%d",&n);
for (i=0;i<n;i++){
    for (j=0;j<2;j++){
    my_scanf ("%d",&x[i][j]);
    }
} 
for (k=1;k<=n;k++){
    for (t=0;t<n-k;t++){
        if (x[t][0]>x[t+1][0]){
            a=x[t+1][0];
            x[t+1][0]=x[t][0];
            x[t][0]=a;
            b=x[t+1][1];
            x[t+1][1]=x[t][1];
            x[t][1]=b;
          }
        if(x[t][0]==x[t+1][0]){
             if(x[t][1]>x[t+1][1]){
                          a=x[t+1][0];
                          x[t+1][0]=x[t][0];
                          x[t][0]=a;
                          b=x[t+1][1];
                          x[t+1][1]=x[t][1];
                          x[t][1]=b;        
             }
             }
        
    }
}
num=0;
max=x[0][1];
for (m=0;m<n;m++){
       if (x[m+1][0]>max){
          num++;
         my_printf("no");
         break;
        }
        if(x[m+1][1]>max){
        max=x[m+1][1];
        } 
    }
if (num==0){
            my_printf("%d %d",x[0][0],max);
}
  return 0;
}