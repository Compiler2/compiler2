#define NUM_ITER 8583

#include <header.h>

int main_bench()
{
  int i,n,a[10000],b[1000],k,x,j;
  j=0;
  k=0;
  my_scanf("%d",&n);
  for(i=0;i<n;i++){
  	my_scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
  	if(a[i]%2!=0){
  	b[k]=a[i];
  	k++;
  }else{
  k=k;
  }
  }
  n=k;
  while(j<=n){
  	for(i=0;i<n-1;i++){
  		if(b[i]<=b[i+1]){
  		b[i]=b[i];
  		b[i+1]=b[i+1];
  		}else{
  		x=b[i];
  		b[i]=b[i+1];
  		b[i+1]=x;
  		}
  	}
  	j++;
  }
  
   for(i=0;i<n-1;i++){
   	my_printf("%d,",b[i]);
   }
my_printf("%d",b[n-1]);
    
  	
   
  return 0;
    
}
