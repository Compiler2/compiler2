#define NUM_ITER 5292

#include <header.h>

int main_bench(){
	char s[220];
	int n,i,j,l1=0,l2=0,m;
	my_scanf("%d",&n);
	for (i=1;i<=n;i++){
		my_scanf("%s",s);
		l1=1;
		for (m=0;m<=9;m++){
			if (s[0]==48+m){
				l1=0;
				l2=0;
				m=20;
			}
		}
		if (l1==1){
			l2=1;
			for (j=0;s[j]!='\0';j++){
				for (m=0;m<=14;m++){
					if (s[j]==33+m){
						l2=0;
						m=30;
					}
				}
			}
			if (l2==1){
				for (j=0;s[j]!='\0';j++){
					for (m=0;m<=6;m++){
						if (s[j]==58+m){
						l2=0;
						m=30;
						}
					}
				}
				if (l2==1){
					for (j=0;s[j]!='\0';j++){
						for (m=0;m<=5;m++){
							if ((s[j]==91+m)&&(s[j]!='_')){
								l2=0;
								m=30;
							}
						}
					}
					if (l2==1){
						for (j=0;s[j]!='\0';j++){
							for (m=0;m<=3;m++){
								if (s[j]==123+m){
									l2=0;
									m=30;
								}
							}
						}	
					}
				}
			}
		}
		if (l2==1)
			my_printf("yes\n");
		else my_printf("no\n");
	}
	return 0;
}