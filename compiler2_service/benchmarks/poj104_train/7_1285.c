#include <header.h>



int main_bench()
{
char str[256]={' '},sstr[256]={' '},rpl[256]={' '};
int lstr,lsstr;
	my_scanf("%s%s%s",str,sstr,rpl);
	lstr=strlen(str);lsstr=strlen(sstr);
	int pst,curr,indi=0;
	for(pst=0;pst<=lstr-lsstr;pst++){
		int state=1;
		for(curr=0;curr<lsstr;curr++){
			if(sstr[curr]!=str[curr+pst]){
				state=0;
				break;
			}
		}
		if(state==1){
			indi=1;
			break;
		}
	}
	if(indi==0)my_printf("%s",str);
	else{
		for(curr=0;curr<pst;curr++){
			my_printf("%c",str[curr]);
		}
		for(curr=0;curr<lsstr;curr++){
			my_printf("%c",rpl[curr]);
		}
		for(curr=pst+lsstr;curr<lstr;curr++){
			my_printf("%c",str[curr]);
		}
	}
	return 0;
}
