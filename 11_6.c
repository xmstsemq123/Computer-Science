/*11_6.多選一-BMI-1(10.0)*/
#include <stdio.h>
int main(){
    float w,h,bmi;
    scanf("%f%f",&w,&h);
    bmi=w/h/h;
    printf("BMI=%.6f\n",bmi);
    if(bmi>18.5 and bmi<=24)
        printf("你的體重在正常範圍");
    else
        printf("你的體重不標準");
	return 0;
}
