#include <header.h>

int main_bench(){
  int n,a,b,k,t=0,i=0,o=0;
  my_scanf("%d",&n);
  for(k=0;k<n;k++){
  my_scanf("%d%d",&a,&b);
  if(a==b){t++;}
  else if(a==0&&b==1){i++;}
  else if(a==0&&b==2){o++;}
  else if(a==1&&b==0){o++;}
else if(a==1&&b==2){i++;}
else if(a==2&&b==0){i++;}
 else if(a==2&&b==1){o++;}
  }
	  if(i>o){
		  my_printf("A");
	  }
	  else if(i<o){
		  my_printf("B");}
	  else if(i==o){
		  my_printf("Tie");}

return 0;
}