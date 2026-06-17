#include<stdio.h>

int main(void){
    int a=9;
    int b=2;
    float c=a/b; /* operation between two integer gives interger 
                 thus answer is 4 instead of 4.5 check 02_second.c */
    printf("the value of a/b is %f \n", c);
    float d=9;
    int e=2;
    float f=d/e; /* here answer is 4.5 because the operation is now between a
     float and integer which gives float */
    printf("the value of d/e is %f \n", f);
    return 0;

}

   
