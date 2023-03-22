#include <header.h>

int main_bench(){
	int sz[100],aged[100];
	char num[100][11],anum[100][11],q[100][11];
	int n,i,k,j=0,s,p,e=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",num[i]);
		my_scanf("%d",&sz[i]);
	}for(i=0;i<n;i++){
			if(sz[i]>=60){
				aged[j]=sz[i];
				strcpy(anum[j],num[i]);
				j++;
			}
	}for(s=1;s<j;s++){
	for(k=0;k<j-s;k++){
			if(aged[k]<aged[k+1]){
                e=aged[k+1];
				aged[k+1]=aged[k];
				aged[k]=e;
				strcpy(q[k],anum[k+1]);
				strcpy(anum[k+1],anum[k]);
				strcpy(anum[k],q[k]);
			}
		}
	}for(p=0;p<j;p++){
				my_printf("%s\n",anum[p]);
			}for(i=0;i<n;i++){
				if(sz[i]<60){
					my_printf("%s\n",num[i]);
				}
			}return 0;
		}