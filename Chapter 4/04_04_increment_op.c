#include<stdio.h>
int main(){
    int i = 5;
    printf("The value after i++ is %d\n", ++i);
    i++; // ---> pahle print fir increament
    ++i; // ---> pahle increament fir print    
    printf("The value of i is %d\n", i);
    i+=10;  //increament i by 10//
    printf("The value of i is %d\n", i);
    return 0;
}