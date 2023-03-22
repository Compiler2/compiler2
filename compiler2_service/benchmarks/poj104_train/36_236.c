#include <header.h>

int main_bench(){
	void sort(char ch1[500],char ch2[500]);
      char ch1[500],ch2[500];
	  my_scanf("%s%s",ch1,ch2);
	  int len1,len2;
	  len1=strlen(ch1);len2=strlen(ch2);
	  if(len1!=len2)my_printf("NO");
	  else sort(ch1,ch2);
}
void sort(char ch1[500],char ch2[500]){
	int k,i,j,q,b[500]={0};
	k=strlen(ch1);
	for(i=0,q=0;i<k;i++){
		for(j=0;j<k;j++){
			if(b[j]==0&&ch1[i]==ch2[j]){b[j]=1;q++;break;
			}
		}
	}
	if(q==k)my_printf("YES");
	else my_printf("NO");
}
