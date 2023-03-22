#define NUM_ITER 31099

#include <header.h>

int fun(int x,int y){
    if((x==0&&y==1)||(x==1&&y==2)||(x==2&&y==0))return 1;
    if((y==0&&x==1)||(y==1&&x==2)||(y==2&&x==0))return -1;
    if((x==0&&y==0)||(x==1&&y==1)||(x==2&&y==2))return 0;

}
int main_bench(){
    int n,x,y,j=0,i;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d %d",&x,&y);
        j=j+fun(x,y);
    }
    if(j>0)my_printf("A");
    if(j<0)my_printf("B");
    if(j==0)my_printf("Tie");
    return 0;
}
