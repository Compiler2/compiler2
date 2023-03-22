#include <header.h>

struct person
{
 char num[11];
 int yr;
}pe[100],t;
int main_bench()
{
 int n,i,e,k;
 my_scanf("%d",&n);
 for(i=0;i<n;i++){
  my_scanf("%s %d",pe[i].num,&pe[i].yr);
 }
    for(k = 0 ; k < n ; k++){
 for(i = 0; i <n-k-1 ; i++){
   if((pe[i+1].yr>=60)&&(pe[i].yr<pe[i+1].yr)){
    t=pe[i];
    pe[i]=pe[i+1];
    pe[i+1]=t;
   }
 }
}
    for(i=0;i<n;i++){
  my_printf("%s\n",pe[i].num);
 }
 return 0;
}