/*13_1.直覺但不結構化的if...goto-HaHaHa!笑他10次(30.0)*/
#include <stdio.h>
int main(){
    int i=0;
    repeat:
    printf("HaHaHa!\n");
    i=i+1;
    if(i<=10){
        goto repeat;
    }
	return 0;
}
