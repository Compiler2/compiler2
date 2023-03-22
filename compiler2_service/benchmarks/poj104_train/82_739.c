#include <header.h>

int main_bench(){
int ss[100],sz[100],time[100];
int n;
int t=0,i=0,a=0;
my_scanf("%d",&n);
time[0]=0;
while(t<n){
my_scanf("%d %d",&ss[t],&sz[t]);
if(ss[t]>=90&&ss[t]<=140&&sz[t]>=60&&sz[t]<=90){
i+=1;
a+=1;
time[a]=i;
}else{
i=0;
}
t++;
}
int s=0,max=0;
while(s<=a){
    my_scanf("%d",&time[s]);
if(max<time[s]){
max=time[s];
}
s++;
}
my_printf("%d",max);
return 0;
}
