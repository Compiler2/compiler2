#include <header.h>

int main_bench(){
int n;
int a[1000],b[1000];
my_scanf("%d",&n);
int i,c,d;
c=0;
d=0;
for(i=0;i<n;i++){
   my_scanf("%d %d",&a[i],&b[i]);
   if(a[i]-b[i]==0){
      c+=0;
	  }else if((b[i]-a[i]==1)||((a[i]==2)&&(b[i]==0))){
	  c+=1;
	  }else{
	  d+=1;
	  }
}
 if(c>d){
 my_printf("A");
 }else if(c<d){
	 my_printf("B");
 }else{
	 my_printf("Tie");
 }
return 0;
}