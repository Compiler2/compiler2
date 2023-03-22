#define NUM_ITER 839003

#include <header.h>

int main_bench(){
	char a[500],b[500];
	int i,j,k,kong=1;
	float n,t=0,l1,l2;
	my_scanf("%f",&n);
	my_scanf("%s",a);
	my_scanf("%s",b);
    l1=strlen(a);
    l2=strlen(b);
	if(l1!=l2){
		my_printf("error");
	}
	else{
      for(i=0;i<l1;i++){
		  j=a[i];
		  k=b[i];
		if((j!='A'&&j!='T'&&j!='G'&&j!='C')||(k!='A'&&k!='T'&&k!='G'&&k!='C')){
			my_printf("error");
			kong=0;
			break;
		}
	  }
	  if(kong==1){
		  for(i=0;i<l1;i++){
		
	     	if(a[i]==b[i]){
			    t=t+1;
			}
		}
		
		if(t/l1>n){
			my_printf("yes");
		}
		else{
			my_printf("no");
		}
	}
	}
return 0;
}
