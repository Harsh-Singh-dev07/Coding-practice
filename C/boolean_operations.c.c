#include<stdio.h>

int main(){
    int a=1; int b=1;
    printf("value of a and b is %d \n",a&&b);
    printf("the value of a or b is %d \n", a||b);
    printf("the value of not of a is %d \n",!a);
    
    if(a && b){
        printf("the program is executed \n");
    }
    //same as writing
    if(a){
        if(b){
            printf("the program is executed \n");
        }
    }
    return 0;
}
