#include <header.h>

int main_bench(){
 int a[500];
 int b[500];
 int n,i,p=0,r;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
	{
       my_scanf("%d",&a[i]);
       if(a[i]%2==1){
         b[i]=a[i];
	   }else{
	     b[i]=0;
	   }
	}
   for(i=0;i<n;i++)
   {
     if(b[i]>p){
      p=b[i];
	 }
   }
  for(r=1;r<=p-2;r+=2)
  {
    for(i=0;i<n;i++){
     if(b[i]==r){
      my_printf("%d,",b[i]);
	 }
	}
  } 
  my_printf("%d",p);
 return 0;
}
