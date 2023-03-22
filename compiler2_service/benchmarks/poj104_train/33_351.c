#include <header.h>

int main_bench()
{int n,i,j,l,leap;
char s[256],s1[2],s2[2];
 my_scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {  my_scanf("%s",s);
 l=strlen(s);
 for(j=0;j<l;j++)
 {leap=0;
 if(s[j]=='A'&&leap==0) {s[j]='T';leap=1;}
 if(s[j]=='T'&&leap==0) {s[j]='A';leap=1;}
 if(s[j]=='G'&&leap==0) {s[j]='C';leap=1;}
 if(s[j]=='C'&&leap==0) {s[j]='G';leap=1;}
 
 }
 my_printf("%s\n",s);
 for(j=0;j<l;j++)
	 s[j]='\0';
 }


 return 0;
}