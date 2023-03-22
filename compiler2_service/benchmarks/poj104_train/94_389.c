#define NUM_ITER 5105

#include <header.h>

int main_bench()
{
 int N,m;
 int a[500];
 int i,j,k,g;
 my_scanf("%d",&N);
 for(i=0;i<N;i++){
  my_scanf("%d",&a[i]);
 }
 for(k=1;k<=N;k++){
  for(j=0;j<N-k;j++){
   if(a[j+1]<a[j]){
    m=a[j+1];
    a[j+1]=a[j];
    a[j]=m;
   }
  }
 }
 int num=0;
 for(g=0;g<N;g++)
  if(a[g]%2!=0) num++;
i=0;
  for(g=0;g<N;g++)
  {
     if(a[g]%2!=0)
	 {
		 i++;
		 if(i<num)
			 my_printf("%d,",a[g]);
		 if(i==num)
			 my_printf("%d",a[g]);
	 }
	 }
  return 0;
}
