#define NUM_ITER 2565

#include <header.h>

int judge(int x){
if(x%2==0){return 0;}
else{return 1;}
}
int main_bench(){

int n,number[500],count,i,p;
my_scanf("%d",&n);
for(i=0;i<n;i++){my_scanf("%d",&number[i]);}
for(i=0;i<n;i++){for(p=0;p<n-1;p++){if(number[p]>number[p+1]){number[p]+=number[p+1];number[p+1]=number[p]-number[p+1];number[p]-=number[p+1];}}}
count=0;
for(i=0;i<n;i++){
if(judge(number[i])&&count==0){my_printf("%d",number[i]);count=1;continue;}
if(judge(number[i])&&count==1){my_printf(",%d",number[i]);}
}







return 0;}