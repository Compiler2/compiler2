#define NUM_ITER 35

#include <header.h>

int main_bench(){
int n,i,k=0,j,m,t=0;
char s[101][300]={0};
my_scanf("%d\n",&n);
for(i=1;i<=n;i++){
		my_scanf("%s",s[i]);}
my_scanf("%d",&m);
for(i=0;i<m-1;i++){
	for(j=1;j<=n;j++){
		if(s[j][0]=='@'){
			if(s[j][1]=='.'){
				s[j][1]='1';}
             if(s[j-1][0]=='.'){
				s[j-1][0]='1';}
              if(s[j+1][0]=='.'){
				s[j+1][0]='1';}
		}
	  for(k=1;k<=100;k++){
		  if(s[j][k]=='@'){
			  if(s[j][k+1]=='.'){
				  s[j][k+1]='1';}
              if(s[j][k-1]=='.'){
				  s[j][k-1]='1';}
              if(s[j-1][k]=='.'){
				  s[j-1][k]='1';}
              if(s[j+1][k]=='.'){
				  s[j+1][k]='1';}
		  }
	  }
	}
	for(j=1;j<=n;j++){
	  for(k=0;k<100;k++){
		  if(s[j][k]=='1'){
			  s[j][k]='@';}
		  }
	}
}
	for(j=1;j<=n;j++){
	  for(k=0;k<100;k++){
		  if(s[j][k]=='@'){
			  t++;
		  }
	  }
	}
	my_printf("%d",t);
return 0;
}
