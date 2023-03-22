#define NUM_ITER 4065

#include <header.h>

int main_bench()
{
    int n,i,k,j,o;
    int a[300],b[300],c[300];
    int m=0,p=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
       my_scanf("%d",&a[i]); 
    }
    for(i=0;i<n-1;i++){
        for(k=1;k<n-i;k++){
            if(a[i]==a[i+k]){
              b[m]=i+k;
              m++;
            }
            else continue;
         }
    }

    for(i=0;i<n;i++){
         int s=1;
         for(j=0;j<m;j++){
            if(i==b[j]){
                s=0;
            }
            else continue;
         }
         if(s==1){ 
			c[p]=a[i];
			p++;
         }else continue;
    }
	for(o=0;o<p-1;o++){
		my_printf("%d,",c[o]);
	}
	my_printf("%d",c[p-1]);
    return 0;
}