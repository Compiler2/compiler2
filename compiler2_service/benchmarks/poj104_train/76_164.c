#define NUM_ITER 273211

#include <header.h>

int main_bench(){ 
	int i=0,n;
	int front=0,back=0; 
	my_scanf("%d",&n);
	if(n<3||n>50000) {  
		my_printf("no");
		return 0;
	}
	int *a=(int *)malloc(n*sizeof(int)); 
	int *b=(int *)malloc(n*sizeof(int)); 
	while(i<n) { 
		my_scanf("%d %d",a+i,b+i); 
		if(a[i]>b[i])  {  
			my_printf("input error");   
			return 0;  
		}
		if((front!=back&&a[i]<front)||front==back) {  
			front = a[i];
			back  = b[i]; 
		} 
		i++;
	}
	for(i=0;i<n;i++){ 
		if(front<=a[i]&&a[i]<=back&&back<b[i]) 
		{ 
			back  = b[i];  
			i=-1; 
		}
	}
	for(i=0;i<n;i++){ 
		if(a[i]<front||b[i]>back)  {
			my_printf("no");
			return 0;  
}
 }
	free(a);
	free(b); 
	my_printf("%d %d\n",front,back);
}
