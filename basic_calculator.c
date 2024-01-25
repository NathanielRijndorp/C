#include <stdio.h>
#include <stdbool.h>

int main() {
    bool repeat = true;
    while (repeat) {
        int select;
        float var1, var2, total;
        printf("Select 0 to End Program.\nSelect 1 for Add.\nSelect 2 for Subtract.\nSelect 3 for Multiply.\nSelect 4 for Divide.\n");
        scanf("%d", &select);
        
        switch (select) {
            case 0: 
                printf("Program Task Ended.\n"); 
                repeat = false;
                break;
            case 1: 
                printf("Val 1: "); 
                scanf("%f", &var1);

                printf("Val 2: "); 
                scanf("%f", &var2);

                total = var1 + var2;
                printf("The sum of %f and %f is %f ", var1, var2, total);
                break;
            case 2: 
                printf("Val 1: "); 
                scanf("%f", &var1);

                printf("Val 2: "); 
                scanf("%f", &var2);

                total = var1 - var2;
                printf("The difference of %f and %f is %f ", var1, var2, total);
                break;
            case 3: 
                printf("Val 1: "); 
                scanf("%f", &var1);

                printf("Val 2: "); 
                scanf("%f", &var2);

                total = var1 * var2;
                printf("The product of %f and %f is %f ", var1, var2, total);
                break;
            case 4: 
                break;
                printf("Val 1: "); 
                scanf("%f", &var1);

                printf("Val 2: "); 
                scanf("%f", &var2);

                total = var1 / var2;
                printf("The quotient of %f and %f is %f ", var1, var2, total);
            default: 
                printf("Please select a proper number.\n");
        }
        printf("\nSelected: %d \n", select);
    }
    return 0;
}
