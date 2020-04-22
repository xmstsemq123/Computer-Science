/*11_2.多選一-年齡說(10.0)*/
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=14 and a>=1)
        printf("%d歲是小孩子",a);
    else if(a<=29 and a>=15)
        printf("%d歲是志於學",a);
    else if(a<=39 and a>=30)
        printf("%d歲是而立之年",a);
    else if(a<=49 and a>=40)
        printf("%d歲是不惑之年",a);
    else if(a<=59 and a>=50)
        printf("%d歲是知天命之年",a);
    else if(a<=69 and a>=60)
        printf("%d歲是耳順之年",a);
    else
        printf("%d歲是從心所欲，不逾矩之年",a);
	return 0;
}
