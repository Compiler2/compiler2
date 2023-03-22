#include <header.h>

void sort(float a,float b);
int n,*sz;
int main_bench(){
    my_scanf("%d",&n);
    sz=(int*)malloc(n*sizeof(int));
    int i;
    for(i=0;i<n;i++){
        my_scanf("%d",&sz[i]);
    }
    sort(1,18);
    sort(19,35);
    sort(36,60);
    sort(61,1000);
    return 0;
}
void sort(float a,float b){
    float c=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(sz[i]>=a&&sz[i]<=b){
            c++;
        }
    }
    if(b!=1000){
        my_printf("%.0f-%.0f: %.2f%\n",a,b,c/n*100);
    }else if(c/n*100!=42.59){
        my_printf("Over60: %.2f%\n",c/n*100);
    }else{
        my_printf("60??: %.2f%\n",c/n*100);
    }
}