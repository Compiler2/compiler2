#define NUM_ITER 24947

#include <header.h>

int main_bench(){
    char a[21]={0};
    int n,h,t,p[1000]={0},q[1000]={0};
    my_scanf("%d",&n);
    for(int i=0;i<n;i++){
        my_scanf("%s",a);
        h=0;
        h=strlen(a);
        p[i]=h;
        for(t=0;t<h;t++){
        if(t==0){
            if(a[0]=='_'||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')){
            q[i]++;}}
            if(t!=0){
                if(a[t]=='_'||(a[t]>='a'&&a[t]<='z')||(a[t]>='A'&&a[t]<='Z')||(a[t]>='0'&&a[t]<='9'))
        {q[i]++;}
    }
}
if(q[i]==p[i]){
        my_printf("yes\n");}
        else
        {my_printf("no\n");}
    }
        return 0;}