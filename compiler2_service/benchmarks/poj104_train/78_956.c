#include <header.h>



int main_bench(){
	int z,q,s,l,A,B,C,D;
	for(z=1;z<=5;z++)
		for(q=1;q<=5;q++)
			for(s=1;s<=5;s++)
				for(l=1;l<=5;l++){
					if((z!=q)&&(z!=s)&&(z!=l)&&(q!=s)&&(q!=l)&&(s!=l)){
						A=((z+q)==(s+l));
						B=((z+l)>(s+q));
						C=((z+s)<q);
						D=A+B+C;
						if(D==3){
							if(z==5)
								my_printf("z 50\n");
							else
								if(q==5)
									my_printf("q 50\n");
								else
									if(s==5)
										my_printf("s 50\n");
									else
										if(l==5)
											my_printf("l 50\n");
							if(z==4)
								my_printf("z 40\n");
							else
								if(q==4)
									my_printf("q 40\n");
								else
									if(s==4)
										my_printf("s 40\n");
									else
										if(l==4)
											my_printf("l 40\n");
							if(z==3)
								my_printf("z 30\n");
							else
								if(q==3)
									my_printf("q 30\n");
								else
									if(s==3)
										my_printf("s 30\n");
									else
										if(l==3)
											my_printf("l 30\n");
							if(z==2)
								my_printf("z 20\n");
							else
								if(q==2)
									my_printf("q 20\n");
								else
									if(s==2)
										my_printf("s 20\n");
									else
										if(l==2)
											my_printf("l 20\n");
							if(z==1)
								my_printf("z 10\n");
							else
								if(q==1)
									my_printf("q 10\n");
								else
									if(s==1)
										my_printf("s 10\n");
									else
										if(l==1)
											my_printf("l 10\n");
						}
					}
				}
	return 0;
}