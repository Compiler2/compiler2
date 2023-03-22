#include <header.h>

int main_bench() {
	int n,i,j,a,b,t;
	int p[1000];
	int s;
	my_scanf ("%d",&n);
	for (i=0;i<n;i++){
		my_scanf ("%d",&p[i]);
	}
for (i=0;i<n;i++){
		if (p[i]==1||p[i]==2){
				my_printf ("1\n");
			}
			else {
				s=0;a=1;b=1;
				for (j=1;j<=p[i]-2;j++){
				s=a+b;
			t=b;
			b=s;
			a=t;

			
		}
		
		my_printf ("%d\n",s);
			}
		

}
return 0;
}