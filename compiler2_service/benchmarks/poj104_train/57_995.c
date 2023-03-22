#include <header.h>

int main_bench(){
    char u[60][33],a[60][33];
    int n,j,m,k;
	m=0;
    my_scanf("%d",&n);
    
    for(j=0;j<n;j++){
    my_scanf("%s",u[j]);
}

    for(j=0;j<n;j++){
                 
     m=strlen(u[j]);
    if(u[j][m-1]==103){                                         
    if(u[j][m-2]==110){ 
    if(u[j][m-3]==105){
                   for(k=0;k<m-3;k++){
                   a[j][k]=u[j][k];
                   }
                    }
                    }
                    }else if(u[j][m-1]==121){
    if(u[j][m-2]==108){
    for(k=0;k<m-2;k++){
                   a[j][k]=u[j][k];
                   }
                    }
                    }else{
    for(k=0;k<m-2;k++){
                   a[j][k]=u[j][k];
                    }
                    }
}
for(j=0;j<n;j++){
my_printf("%s\n",a[j]);
}
return 0;
}


