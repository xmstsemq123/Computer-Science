/*11_7.多選一-BMI-2(20.0)*/
#include <stdio.h>
int main(){
    float w,h,bmi;
    scanf("%f%f",&w,&h);
    bmi=w/h/h;
    printf("BMI=%.2f\n",bmi);
    if(bmi<18.5)
        printf("你的體重太輕");
    else if(bmi>=18.5 and bmi<24)
        printf("你的體重在正常範圍");
    else if(bmi>=24 and bmi<27)
        printf("你的體重過重");
    else if(bmi>=27 and bmi<30)
        printf("輕度肥胖");
    else if(bmi>=30 and bmi<35)
        printf("中度肥胖");
    else if(bmi>=35)
        printf("重度肥胖");
	return 0;
}
