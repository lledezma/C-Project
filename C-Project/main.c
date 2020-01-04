
#include <stdio.h>


int main(int argc, const char * argv[]){

    int n, num1, num2,result;
    printf("What operation you wish to do? \n");
    printf("#1 = sum\n");
    printf("#2 = subtraction\n");
    printf("#3 = Multiplication\n");
    scanf("%d", &n);

    printf("enter your numbers:");
    scanf(" %d",&num1);
    scanf("%d",&num2);

    switch(n)
    {
        case 1: result= num1 + num2;
            printf("%d\n", result);
            break;
        case 2: result = num1 - num2;
            printf("%d\n", result);
            break;
        case 3: result = num1*num2;
            printf("%d\n",result);
            break;
    }


    return 0;
}

