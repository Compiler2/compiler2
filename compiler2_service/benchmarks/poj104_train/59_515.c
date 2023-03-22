#include <header.h>

int main_bench(){
	 char a[200][200];
	 int f,i,j,t,q,sum=0;
	 my_scanf("%d",&f);
	 for(i=1;i<=f;i++){
			 my_scanf("%s",a[i]);
	 }
	 my_scanf("%d",&t);
	 for(q=1;q<t;q++){
		 for(i=1;i<=f;i++){
		    for(j=0;j<f;j++){
				if(a[i][j]=='@'){
               if(a[i-1][j]!='#'&&a[i-1][j]!='@')a[i-1][j]='!';
			   if(a[i+1][j]!='#'&&a[i+1][j]!='@')a[i+1][j]='!';
			   if(a[i][j+1]!='#'&&a[i][j+1]!='@')a[i][j+1]='!';
			   if(j-1>=0){
			   if(a[i][j-1]!='#'&&a[i][j-1]!='@')a[i][j-1]='!';
			   }
				}
			}
		 }
		 for(i=1;i<=f;i++){
		    for(j=0;j<f;j++){
				if(a[i][j]=='!')a[i][j]='@';
			}
		 }
	 }
	 for(i=1;i<=f;i++){
		 for(j=0;j<f;j++){
			 if(a[i][j]=='@')sum++;
		 }
	 }
	 my_printf("%d",sum);
	return 0;
}