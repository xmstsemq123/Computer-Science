/*11_1.多選一-分數等第(10.0)*/
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=100 and a>=90)
        printf("Your score is %d and degree is A!",a);
    else if(a<=89 and a>=80)
        printf("Your score is %d and degree is B!",a);
    else if(a<=79 and a>=70)
        printf("Your score is %d and degree is C!",a);
    else if(a<=69 and a>=60)
        printf("Your score is %d and degree is D!",a);
    else
        printf("Your score is %d and degree is F!",a);
	return 0;
}
