/*12_2.讓選擇更完美-點套餐(20.0)*/
#include <stdio.h>
int main(){
    char set;
    scanf("%c",&set);
    switch(set){
        case 'A':
        case 'a':
            printf("牛奶\n西瓜\n檸檬水\n吐司");
            break;
        case 'B':
        case 'b':
            printf("西瓜\n檸檬水\n吐司");
            break;
        case 'C':
        case 'c':
            printf("檸檬水\n吐司");
            break;
        default:
            printf("吐司\n");
    }
	return 0;
}
