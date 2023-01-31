#include <stdio.h>
int main()
{
    // int a;  int b=a;
    // int v = 3^3;
    // printf("%d", v);
    // return 0;
    // Q3. Write a program to determine whether a number is divisible by 97 or not
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("divisibilty test return: %d\n", num%97);

      // Q.4 Step by step evaluation of3*x/y-z+k
    int x=2,y=3,z=3,k=1;
    int result = 3*x/y-z+k;
    // 6/3-3+1
    // 2-3+1
    // 0
    printf("The value of result is %d",result);



    return 0;

}