#include <header.h>

  int main_bench(){
  int n,i,x,l;
  int j=0;
  int num=0;
  int a[501];
  int b[501];
  my_scanf("%d",&n);
  for(i=0;i<n;i++)
  {
	  my_scanf("%d",&(a[i]));
	  
	  if((a[i])%2!=0){
		  b[j]=a[i];
		  j++;
		  num++;
	  }
  }
  for(l=num-1;l>=0;l--){
	  for(j=0;j<num;j++){
		  if(b[j]>b[j+1]){
			  x=b[j+1];
			  b[j+1]=b[j];
			  b[j]=x;

		  }

	  }
  }
  for(j=1;j<num;j++){
	  
	  my_printf("%d,",b[j]);
	  
		  
	  }
  my_printf("%d",b[num]);
  
  return 0;
}
