/*12_4.讓選擇更完美-運算(20.0)*/
#include <stdio.h>
int main(){
    char type;
    int a,b;
    scanf("%c%d%d",&type,&a,&b);
    switch(type){
        case 'A':
            printf("%d+%d=%d",a,b,a+b);
            break;
        case 'B':
            printf("%d-%d=%d",a,b,a-b);
            break;
        case 'C':
            printf("%d*%d=%d",a,b,a*b);
            break;
        case 'D':
            printf("%d/%d=%d",a,b,a/b);
            break;
        default:
            printf("%d%%%d=%d",a,b,a%b);
    }
	return 0;
}
