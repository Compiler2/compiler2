#define NUM_ITER 15487

#include <header.h>

void bubble_sort(int a[],int n){
 int i,k,t;
 for(k=n-1;k>0;k--){
  for(i=0;i<k;i++){
   if(a[i]>a[i+1]){
    t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;
   }
  }
 }
}
int main_bench(){
 int Num,i,N=0,j=0;
 my_scanf("%d",&Num);
 int a[Num];
 for(i=0;i<Num;i++){
  my_scanf("%d",&(a[i]));
  if(a[i]%2==1){
   N++;
  }
 }
 int b[N];
 for(i=0;i<Num;i++){
  if(a[i]%2==1){
   b[j]=a[i];
   j++;
  }
 }
 bubble_sort(b,N);
 for(j=0;j<N-1;j++){
  my_printf("%d,",b[j]);
 }
 j=N-1;
 my_printf("%d",b[j]);
 return 0;
}
 