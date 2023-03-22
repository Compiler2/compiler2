#include <header.h>

int main_bench(){
    int n,i,a[100],b[100],c=0,d=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
    
    my_scanf("%d %d",&a[i],&b[i]);
    if(a[i]==0&&b[i]==1){
    c++;
}else if(a[i]==1&&b[i]==2){
    c++;
}else if(a[i]==2&&b[i]==0){
    c++;
}else if(a[i]==b[i]){
continue;
}else{
     d++;
}

}


if(c>d){
        my_printf("A");
        }
if(c<d){
        my_printf("B");
        }
if(c==d){
        my_printf("Tie");
        }

return 0;
} 