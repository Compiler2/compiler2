#define NUM_ITER 30974

#include <header.h>

int main_bench(){
int n;
my_scanf("%d",&n);
char a[100];
for(int i=0;i<n;i++){
my_scanf("%s",a);
int k=strlen(a);
if(a[k-2]=='e'&&a[k-1]=='r'){
a[k-2]='\0';
}
else if(a[k-2]=='l'&&a[k-1]=='y'){
a[k-2]='\0';
}
else if(a[k-3]=='i'&&a[k-2]=='n'&&a[k-1]=='g'){
a[k-3]='\0';
}
my_printf("%s\n",a);
}

}