#include <header.h>

int main_bench(){
   int a[200],b[200],n,i,x=0,y=0,z=0;
   my_scanf("%d",&n);
   for(i=0;i<n;i++){
   my_scanf("%d%d",&a[i],&b[i]);
   if(a[i]==b[i]){
   x++;
   }else {
	   if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
   y++;
	   }else{
	   z++;
	   }
   }
   }
 
   if(y>z){
   my_printf("A");
   }else if(y<z){
   my_printf("B");
   }else{
   my_printf("Tie");
   }
return 0;
}