/*13_3.直覺但不結構化的if...goto-月份判斷(40.0)*/
#include <stdio.h>
int main(){
    int month;
    month_repeat:
    scanf("%d",&month);
    if(month==12 or month==1 or month==2)
        printf("%d月是冬天\n",month);
    else if(month>=3 and month<=5)
        printf("%d月是春天\n",month);
    else if(month>=6 and month<=8)
        printf("%d月是夏天\n",month);
    else if(month>=9 and month<=11)
        printf("%d月是秋天\n",month);
    else if(month>=13)
        printf("超出範圍\n");
    if(month>=1){
        goto month_repeat;
    }
	return 0;
}
