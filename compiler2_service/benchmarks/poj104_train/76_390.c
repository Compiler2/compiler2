#define NUM_ITER 2723

#include <header.h>

int main_bench()
{ int n,a[50000],b[50000],min,max,i,j,s,t;
  my_scanf("%d",&n);
  for(i=0;i<n;i++){
     my_scanf("%d%d",&a[i],&b[i]);
  }  
  s=a[0];t=b[0];for(i=1;i<n;i++){
	  if(a[i]<s){s=a[i];}
	  if(b[i]>t){t=b[i];}
  }
 min=a[0];max=b[0];
 for(j=0;j<n-1;j++){
    for(i=1;i<n;i++){ 
       if(a[i]<=min){ if(b[i]>=max){max=b[i];min=a[i];}
                       else if(b[i]>=min&&b[i]<max){
                         min=a[i];}}
       else if(a[i]>min&&a[i]<=max){if(b[i]>max){max=b[i];}}}
}  if(min==s&&max==t){my_printf("%d %d",s,t);}else {my_printf("no");}
return 0;
}