#include <header.h>

int main_bench()
{
  int e;
 int k=0;
 int n;
 int b[500];
 int a[500];
 my_scanf("%d",&n);
 for(int i=0;i<n;i++){
     my_scanf(" %d",&a[i]);
 }
  for(int i=0;i<n;i++){
     if(a[i]%2!=0){
       b[k]=a[i];
       k++;
     }
  }
  for(int c=1;c<=k;c++){
     for(int g=0;g<k-c;g++){
        if(b[g]>b[g+1]){
           e=b[g+1];
           b[g+1]=b[g];
           b[g]=e;
        }
     }
  }
  my_printf("%d",b[0]);
for(int g=1;g<k;g++){
  my_printf(",%d",b[g]);
}
return 0;
}