#define NUM_ITER 24682

#include <header.h>




int main_bench(){
int n,i,p,q;
char a[21];

my_scanf("%d",&n);
for(q=0;q<n;q++){
	int m=0;
    my_scanf("%s",a);
    p=strlen(a);
    for(i=0;i<p;i++){
		if(((a[0]>='A'&&a[0]<='Z')||(a[0]>='a'&&a[0]<='z')||(a[0]=='_'))&&((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z')||(a[i]>='0'&&a[i]<='9')||(a[i]=='_'))){
	            m=m+0;
	   }else{
	            m=m+1;
	   }

}
	if(m==0){
		my_printf("yes\n");
	}else{
	my_printf("no\n");
	}
	}
return 0;
}

