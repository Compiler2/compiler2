#define NUM_ITER 1436

#include <header.h>

int main_bench(){
int n;
my_scanf("%d",&n);
for(int i=1;i<=n;i++){
int k;
my_scanf("%d",&k);
int sz[100];
if(k==0){my_printf("60\n");}
else{
for(int a=1;a<=k;a++){
my_scanf("%d",&sz[a]);}
int p;
if((sz[k]+3*k)<60){
	p=60-3*k;
my_printf("%d\n",p);}
else{for(int b=1;b<=k;b++){
int q;
q=sz[b]+3*(b-1);
if(q>=57&&q<=60){
	p=sz[b];
my_printf("%d\n",p);
break;}
else if(q>60){
p=60-3*(b-1);
my_printf("%d\n",p);
break;}}}}}
return 0;
}

