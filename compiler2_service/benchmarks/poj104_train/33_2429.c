#define NUM_ITER 24847

#include <header.h>

int main_bench(){
	char xl[1000][256],hb[1000][256];
	int i,m,n,cd[1000];
	my_scanf("%d",&n);
	for(m=0;m<n;m++){
		my_scanf("%s",&xl[m]);
		cd[m]=strlen(xl[m]);
	}
	for(m=0;m<n;m++){
	    for(i=0;i<cd[m];i++){
		    switch(xl[m][i]){
		    case'A':hb[m][i]='T';
		    	break;
		    case'T':hb[m][i]='A';
			    break;
		    case'C':hb[m][i]='G';
			    break;
		    case'G':hb[m][i]='C';
		    	break;
	    	default:1;
			}
		}
	    hb[m][i]='\0';
	}
	for(m=0;m<n;m++){
		my_printf("%s\n",hb[m]);
	}
	return 0;
}