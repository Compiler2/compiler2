#define NUM_ITER 17

#include <header.h>

int main_bench(){
	
int a[1000],b[1000],n,i,all[20000],j,m;
	
for(i=0;i<20000;i++)
	
	
all[i]=0;
	
   m=0;
	
my_scanf("%d",&n);
	
for( i=0;i<n;i++){
	
	
my_scanf("%d%d",&a[i],&b[i]);
	
	
for(j=0;j<20000;j++){
	
	
	
if(j>=2*a[i]&&j<=2*b[i])
	
	
	
	
all[j]=1;
	
	
}
	
}
	
int x,y;
	
for(i=1;i<20000;i++){
	
	
if(all[i]==0&&all[i+1]==1&&all[i-1]==1){
	
	
	
m++;
	
	
	
break;
	
	
}
	
	
else{
	
	
	
if(all[i]==1&&all[i+1]==1&&all[i-1]==0)
	
	
	
	
x=i/2;
	
	
	
if(all[i]==1&&all[i+1]==0&&all[i-1]==1)
	
	
	
	
y=i/2;
	
	
}
	
}
	
if(m==0)
	
	
my_printf("%d %d",x,y);
	

	
else{
	
	
my_printf("no");
	
}
	
getchar();
	
getchar();
	
return 0;
}

