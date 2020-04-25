/*13_2.直覺但不結構化的if...goto-HaHaHa!笑他幾次(30.0)*/
#include <stdio.h>
int main(){
    int i=0,j;
    scanf("%d",&j);
    repeat:
    printf("HaHaHa!\n");
    i=i+1;
    if(i<=j){
        goto repeat;
    }
	return 0;
}
