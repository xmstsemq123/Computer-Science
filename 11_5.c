/*11_5.多選一-三角形型別(10.0)*/
#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c or a+c>b or b+c>a)
        if(a==b and a==c and b==c)
            printf("%d %d %d正三角形",a,b,c);
        else if(a%b==0 or a%c==0 or b%c==0)
            printf("%d %d %d等腰三角形",a,b,c);
        else if(a*a+b*b==c*c or a*a+c*c==b*b or c*c+b*b==a*a)
            printf("%d %d %d直角三角形",a,b,c);
    else if(a+b<=c or a+c<=b or b+c<=a)
        printf("%d %d %d無法構成三角形",a,b,c);
	return 0;
}
