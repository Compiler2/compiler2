#include <header.h>


int main_bench(){
         char word[50][100]={0};
         char max[100],min[100];
	int len[50];
	int n;
	int da=0,xiao=100;
	for(int i=0;i<100;i++){
		my_scanf("%s",word[i]);
                  len[i]=strlen(word[i]);
                  n=i;
                  if(len[i]==0){break;}
	}
         for(int j=0;j<n;j++){
                  if(len[j]<xiao){
                       xiao=len[j];
                       strcpy(min,word[j]);
                  }
                  if(len[j]>da){
                       da=len[j];
                       strcpy(max,word[j]);
                  }
         }
         my_printf("%s\n",max);
         my_printf("%s\n",min);
      	return 0;
}
