#define NUM_ITER 35005

#include <header.h>


int main_bench() {
    int n;
    my_scanf("%d",&n);
    struct game{int g1;int g2;}g[n];
    
   
    int i;
    int p=0;
    for(i=0;i<n;i++)
    {
        my_scanf("%d %d",&(g[i].g1),&(g[i].g2));
        if((g[i].g1==0 && g[i].g2==1) || (g[i].g1==1 && g[i].g2==2)||g[i].g1==2 && g[i].g2==0){p++;}
        else if(g[i].g1==g[i].g2){}
        else{p--;}
        
        
    }
    
    
    if(p>0){my_printf("A");}
    else if(p<0){my_printf("B");}
    else if(p==0){my_printf("Tie");}
    
    
    
    return 0;
}