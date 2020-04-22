/*11_3.多選一-薪資計算(10.0)*/
#include <stdio.h>
int main(){
    int hour;
    float wage;
    scanf("%d",&hour);
    if(hour<=60)
        wage=hour*75;
    else if(hour>=61 and hour<=75)
        wage=60*75+(hour-60)*75*1.25;
    else
        wage=60*75+15*75*1.25+(hour-75)*75*1.75;
    printf("%.1f",wage);
	return 0;
}
