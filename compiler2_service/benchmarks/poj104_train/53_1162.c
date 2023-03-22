#define NUM_ITER 10065

#include <header.h>

int main_bench(){
	int i,j,n,b=0,sz[300];
	int arr[300];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&(arr[i]));
	}
   	 
for (i=0;i <n-1;i++) 
{ 
for (j=i+1;j <n;j++) 
{ 
    if (arr[j]==arr[i]){ 
        arr[j] = 0x00;}  
} 
}
for(i=0;i<n;i++){
	if(arr[i]!=0){
		sz[b]=arr[i];
		b++;}
}
for(i=0;i<b-1;i++){
	my_printf("%d,",sz[i]);
}
my_printf("%d",sz[b-1]);
return 0;
} 

