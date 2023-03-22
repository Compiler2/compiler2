#include <header.h>

int zh(int x,int y){
	if(x>=90&&x<=140&&y>=60&&y<=90){return 1;}
    else{return 0;}
}


int main_bench(){
int i,j,p=0,a[300],b[300],n;
my_scanf("%d",&n);
for(i=0;i<n;i++){my_scanf("%d %d",&a[i],&b[i]);}
for(i=0;i<n;i++){
	if((zh(a[0],b[0])==1)||(zh(a[i],b[i])==1&&zh(a[i-1],b[i-1])!=1)){
		j=i;
		while(zh(a[j],b[j])!=0){j++;}
		if(p<j-i){p=j-i;}
	}
}
my_printf("%d",p);
return 0;
}
