#define NUM_ITER 17267

#include <header.h>

int main_bench(){
int N,sz[500],sz2[500],a=0,b;
my_scanf("%d",&N);
for(int i=0;i<N;i++){
my_scanf("%d",&(sz[i]));
if(sz[i]%2!=0){
sz2[a]=sz[i];
a+=1;
}
}
for(int p=0;p<a;p++){
for(int q=0;q<p;q++){
if(sz2[q]>sz2[p]){
b=sz2[q];
sz2[q]=sz2[p];
sz2[p]=b;
}
}
}
for(int c=0;c<a-1;c++){
my_printf("%d,",sz2[c]);
}
my_printf("%d",sz2[a-1]);
return 0;
}