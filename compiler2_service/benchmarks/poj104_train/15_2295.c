#define NUM_ITER 584

#include <header.h>

int main_bench(){
int n,number[1001],i,p,count,start,end;
count=0;
my_scanf("%d",&n);
for(i=1;i<=n;i++){	
	start=0;
	end=0;
	for(p=1;p<=n;p++){my_scanf("%d",&number[p]);}
	for(p=1;p<=n-1;p++){
		if(start==0&&number[p]==0&&(p==1||number[p-1]!=0)&&number[p+1]!=0){start=p;}
		if(start!=0&&number[p]==0&&(p==1||number[p-1]!=0)&&number[p+1]!=0){end=p;}	
	}
	if(end-start<=1){continue;}
	count+=(end-start-1);



}
my_printf("%d",count);
return 0;}