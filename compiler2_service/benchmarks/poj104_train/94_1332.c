#include <header.h>

int main_bench(){
	int n;
	int i=0;
	int s[500];
	int m=0;
	int q[500];
	int j;
	int t;
	int z;
	int u;
	my_scanf ("%d",&n);
	while (i<n){
        my_scanf ("%d",&s[i]);
		z=s[i]%2;
		if (z==1){
			m=m+1;
			j=m-1;
			q[j]=s[i];
		}
		
		i++;
	}
    j=1;
	while (j<m){
		u=j;
		while (j>0){

		    if (q[j]<q[j-1]){
		    	t=q[j-1];
			    q[j-1]=q[j];
		    	q[j]=t;
			}
			j--;
		}
		j=u+1;
	}
	j=0;
	while (j<m){
		if (j==m-1){
			my_printf ("%d",q[j]);

		}	else {

	     	my_printf ("%d"",",q[j]);
		}
	    j++;
	}
	return 0;
}