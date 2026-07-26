#include <stdio.h>

int main()
{
    float num1, num2, total;
    int choice;
    char ch;
    do{

    
    printf("Simple Calculator\n");

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\nChoose Operation");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            total = num1 + num2;
            printf("\nResult = %.2f", total);
            break;

        case 2:
            total = num1 - num2;
            printf("\nResult = %.2f", total);
            break;

        case 3:
            total = num1 * num2;
            printf("\nResult = %.2f", total);
            break;

        case 4:
            if(num2 == 0)
            {
                printf("\nDivision by zero is not possible.");
            }
            else
            {
                total = num1 / num2;
                printf("\nResult = %.2f", total);
            }
            break;

        default:
            printf("\nInvalid Choice");
        
    }
    printf("\nDo you want to continue? (y/n): ");
    scanf(" %c", &ch);
    }while(ch == 'y' || ch == 'Y');
    
    return 0;
}