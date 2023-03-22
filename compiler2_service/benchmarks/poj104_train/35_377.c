#define NUM_ITER 456

#include <header.h>

int main_bench(){
  int m,n;
  my_scanf("%d,%d",&m,&n);
  int a[m][n];
  int max[m],min[n];
  int i,j,k=0;
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
       my_scanf("%d",&a[i][j]);}}
  for(i=0;i<m;i++){
      max[i]=a[i][0];}
  for(j=0;j<n;j++){
      min[j]=a[0][j];}
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        if(a[i][j]>max[i]){max[i]=a[i][j];}
        }}
  for(j=0;j<n;j++){
     for(i=0;i<m;i++){
        if(a[i][j]<min[j]){min[j]=a[i][j];}
        }}
  for(i=0;i<m;i++){
     for(j=0;j<n;j++){
    if(max[i]==min[j]){my_printf("%d+%d",i,j);k=1;}
        }}
   if(k==0){my_printf("No");}
  return 0;
}