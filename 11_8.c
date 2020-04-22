/*11_8.多選一-BMI-3(20.0)*/
#include <stdio.h>
int main(){
    float w,h,bmi;
    int sexuality;
    scanf("%d%f%f",&sexuality,&w,&h);
    bmi=w/h/h;
    if(sexuality==1)
        printf("男生\n");
    else
        printf("女生\n");
    printf("BMI值是%.1f\n",bmi);
    if(sexuality==1){
        if(bmi>=20 and bmi<25)
            printf("標準範圍");
        else if(bmi<20)
            printf("體重太輕");
        else if(bmi>=25)
            printf("體重太重");
    }else if(sexuality==0){
        if(bmi>=18 and bmi<22)
            printf("標準範圍");
        else if(bmi<18)
            printf("體重太輕");
        else if(bmi>=22)
            printf("體重太重");
    }
	return 0;
}
