/*16_1.if是while的好幫手-30內6的倍數(10.0)*/
#include <stdio.h>
int main(){
    int i=6;
    while(i<=30){
        if(i%6==0)
            printf("%d\n",i);
        i=i+1;
    }
	return 0;
}
