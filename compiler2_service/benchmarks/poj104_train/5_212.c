#define NUM_ITER 818884

#include <header.h>

int main_bench(){
  char a[501],b[501];
  double n,c,d,k=0;
  int i,e=1;
  my_scanf("%lf",&n);
  my_scanf("%s\n%s",&a,&b);
  c=strlen(a);
  d=strlen(b);
  if(c!=d){
    my_printf("error");
  }else if(c==d){
	for(i=0;i<c;i++){
		if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C'||b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'){
		e=0;
		break;
		}else{
			if(a[i]==b[i]){
			k=k+1;
			}
		}
	}
         if(e==0){
                  my_printf("error");
         }else if(k!=0&&(k/c)>=n){
                  my_printf("yes");
         }else if(e==1&&(k/c)<n){
                  my_printf("no");
         }
  }
return 0;
}