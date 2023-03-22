#include <header.h>

int main_bench(){
    int i,sz[100],len,tag=0;
    char zfc[301];
    my_scanf("%s",zfc);
    len=strlen(zfc);
    for(i=0;i<('z'-'A'+1);i++){
            sz[i]=0;
            }
    for(i=0;i<len;i++){
            if((zfc[i]>='A'&&zfc[i]<='Z')||(zfc[i]>='a'&&zfc[i]<='z')){
                    sz[zfc[i]-'A']++; 
                    }
            }
    
    for(int j='A';j<='z';j++){
            if(sz[j-'A']!=0){
                  my_printf("%c=%d",j,sz[j-'A']);
                  my_printf("\n");
                  tag=1;
                  }
            }
    if(tag==0){
               my_printf("No");}
            return 0;
    } 

