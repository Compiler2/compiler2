#define NUM_ITER 563

#include <header.h>

int main_bench(){
    int m,n,x,y,c,d,e,f,g;
	int a[100][100];
	my_scanf("%d %d",&n,&m);
	g=m*n;
	c=0;
	d=0;
	e=0;
	f=0;
	for(y=0;y<n;y++){
		for(x=0;x<m;x++){
			my_scanf("%d",&a[x][y]);
		}
	}

    while(g!=0){	
	if(g!=0){
		if(c+d!=m-1){
			for(x=c;x<m-d;x++){
				my_printf("%d\n",a[x][e]);
				g--;
			}
			e++;
		}else{
			my_printf("%d\n",a[c][e]);
			g--;
			e++;
		}
	}
	
	if(g!=0){
		if(e+f!=n-1){
			for(y=e;y<n-f;y++){
				my_printf("%d\n",a[m-d-1][y]);
				g--;
				
			}
			d++;
		}else{
			my_printf("%d\n",a[m-d-1][e]);
            d++;
			g--;
		}
	}
	
	if(g!=0){
		if(c+d!=m-1){
			for(x=m-d-1;x>=c;x--){
				my_printf("%d\n",a[x][n-f-1]);
				g--;
			}
			f++;
		}else{
			my_printf("%d\n",a[c][n-f-1]);
			g--;
			f++;
		}
	}
	if(g!=0){
		if(e+f!=n-1){
			for(y=n-f-1;y>=e;y--){
				my_printf("%d\n",a[c][y]);
				g--;
				
			}
			c++;
		
		}else{
			my_printf("%d\n",a[c][e]);
			c++;
			g--;
		}
	}
	}
	
	

	return 0;
}