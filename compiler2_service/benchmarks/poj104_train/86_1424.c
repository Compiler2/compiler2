#define NUM_ITER 1193

#include <header.h>

int main_bench(){
int n,time,cs,num;
int a[1000],b[1000][60];
my_scanf("%d",&n);
for (int i=0;i<n;i++){
            my_scanf ("%d",&a[i]);
     for (int j=0;j<a[i];j++){
             my_scanf("%d",&b[i][j]);
     }    
}
for (int k=0;k<n;k++){
     time=60;
     cs=0;
     num=0;
     if (a[k]==0){
            my_printf("60\n");
            continue;
     }
     for (int m=0;m<=a[k];m++){
        for (int t=0;t<60;t++){
            if (cs==b[k][m]){
                 time-=3;
                 break;
            }
            if(time<=0){
                 my_printf("%d\n",cs);
                  num=1;
                 break;
            }
            time--;
            cs++;
        }
     if (num==1){
        break;
     }
    }
} 
return 0;
}