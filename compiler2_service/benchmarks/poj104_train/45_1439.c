#define NUM_ITER 997220

#include <header.h>

int main_bench()
{
char s[50]=" ";
char w[50]=" ";
my_scanf("%s%s",s,w);
int a=strlen(s);
int b=strlen(w);
int i;
int t=0;
if(a==1){
for(i=0;i<b;i++){
	if(w[i]==s[0]){

		my_printf("%d",i);break;}
}}
if(a==2){
for(i=0;i<b;i++){
	if(w[i]==s[0]){if(w[i+1]==s[1]){
		my_printf("%d",i);break;}}
}}
if(a>=3){t=1;
for(i=0;i<b;i++){
	if(w[i]==s[0]){if(w[i+1]==s[1]){if(w[i+2]==s[2]){
		my_printf("%d",i);break;}}}
}}	




return 0;
}
