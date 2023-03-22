#define NUM_ITER 48782

#include <header.h>

int main_bench(){
    int n;
    my_scanf("%d\n",&n);
    float sz[100];
    float s[4];
    s[0]=0;
    s[1]=0;
    s[2]=0;
    s[3]=0;
    for(int t=0;t<n;t++){
       my_scanf("%f",&sz[t]);
       if(sz[t]<=18){
       s[0]+=1;
       }
       else if(sz[t]>18 && sz[t]<=35){
       s[1]+=1;
       }
       else if(sz[t]>35 && sz[t]<=60){
       s[2]+=1;
       }
       else{
       s[3]+=1;
       }
    }
    s[0]=s[0]*100.00/n;
    s[1]=s[1]*100.00/n;
    s[2]=s[2]*100.00/n;
    s[3]=s[3]*100.00/n; 
    my_printf("1-18: %.2lf%%\n",s[0]);
    my_printf("19-35: %.2lf%%\n",s[1]);
    my_printf("36-60: %.2lf%%\n",s[2]);
    my_printf("60??: %.2lf%%\n",s[3]);
    return 0; 
}    
  