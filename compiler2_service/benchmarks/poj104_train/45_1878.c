#define NUM_ITER 1026663

#include <header.h>

int main_bench(){
char s[50];
char w[50];
char z[200];
char a[100];
int i=0,ls,lw,k=0,t=1,m,n=0,len,ci=0;
my_scanf("%s %s",s,w);
ls=strlen(s);
lw=strlen(w);
for(i=0;i<lw;i++){
   if(w[i]==s[0]){
	   m=i;
	for(k=0;k<ls;k++){
		if(s[k]!=w[i]){
			t=0;
			break;
	
		}
      i++;

    }
	if(t==1){
	n=m;
	}
	
   }		
		
}
      
	if(t){
	my_printf("%d",n);
	}

	  


return 0;
}