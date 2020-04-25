/*12_5.讓選擇更完美-運算列表(20.0)*/
#include <stdio.h>
int main(){
    char type;
    int a,b;
    scanf("%c%d%d",&type,&a,&b);
    switch(type){
        case 'A':
            printf("%d+%d=%d\n",a,b,a+b);
            printf("%d-%d=%d\n",a,b,a-b);
            printf("%d*%d=%d\n",a,b,a*b);
            printf("%d/%d=%d\n",a,b,a/b);
            printf("%d\n",a%b);
            break;
        case 'B':
            printf("%d-%d=%d\n",a,b,a-b);
            printf("%d*%d=%d\n",a,b,a*b);
            printf("%d/%d=%d\n",a,b,a/b);
            printf("%d\n",a%b);
            break;
        case 'C':
            printf("%d*%d=%d\n",a,b,a*b);
            printf("%d/%d=%d\n",a,b,a/b);
            printf("%d\n",a%b);
            break;
        case 'D':
            printf("%d/%d=%d\n",a,b,a/b);
            printf("%d\n",a%b);
            break;
        default:
            printf("%d\n",a%b);
    }
	return 0;
}
