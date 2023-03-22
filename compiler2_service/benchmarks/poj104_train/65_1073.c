#include <header.h>

int main_bench(){
  int n,i,cqa[200],cqb[200],a,b;
  a=0;
  b=0;
  my_scanf("%d",&n);
  for(i=0;i<n;i++){
    my_scanf("%d%d",&cqa[i],&cqb[i]);
  }
  for(i=0;i<n;i++){
    if(cqa[i]==cqb[i]){
	  a=a;
	  b=b;
	}
	if(cqa[i]-1==cqb[i]){
	  a=a;
	  b=b+1;
	}
	if(cqa[i]+1==cqb[i]){
	  a=a+1;
	  b=b;
	}
	if(cqa[i]+2==cqb[i]){
	  a=a;
	  b=b+1;
	}
	if(cqa[i]-2==cqb[i]){
	  a=a+1;
	  b=b;
	}}
	if(a==b){
	  my_printf("Tie");
	}
	if(a<b){
	  my_printf("B");
	}
	if(a>b){
	  my_printf("A");
	}
return 0;
}