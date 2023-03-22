#include <header.h>

int main_bench(){
int n;
my_scanf("%d",&n);
int age[100];
int num[4]={0,0,0,0};
double p[4];
for(int i=0;i<n;i++){
my_scanf("%d",&age[i]);
  }
for(int i=0;i<n;i++){
if(age[i]<=18){
num[0]++;
}
else if(age[i]<=35&&age[i>=19]){
num[1]++; 
}
else if(age[i]<=60&&age[i]>=36){
num[2]++;
}
else{
num[3]++;
}
}
for(int i=0;i<4;i++){
p[i]=num[i]*100.0/(n*1.0);
}
my_printf("1-18: %.2lf%%\n",p[0]);
my_printf("19-35: %.2lf%%\n",p[1]);
my_printf("36-60: %.2lf%%\n",p[2]);
my_printf("Over60: %.2lf%%",p[3]);
return 0;
 }

