#include <stdio.h>

double cube(void *value, int type);

int main() {
    int type;
    printf("Enter the type of value (1-char, 2-int, 3-long int, 4-float, 5-double): ");
    scanf("%d", &type);
    if (type < 1 || type > 5) {
        printf("Value is not valid");
        return 1;
    }
    printf("Enter the value: ");
    if (type == 1) {
        char value;
        scanf(" %c", &value);
        printf("Cube = %f", cube(&value, type));
    } else if (type == 2) {
        int value;
        scanf("%d", &value);
        printf("Cube = %f", cube(&value, type));
    } else if (type == 3) {
        long int value;
        scanf("%ld", &value);
        printf("Cube = %f", cube(&value, type));
    } else if (type == 4) {
        float value;
        scanf("%f", &value);
        printf("Cube = %f", cube(&value, type));
    } else if (type == 5) {
        double value;
        scanf("%lf", &value);
        printf("Cube = %f", cube(&value, type));
    }
    return 0;
}

double cube(void *value, int type) {
    double result;
    switch(type) {
        case 1:
            result = (double)(*(char*)value) * (*(char*)value) * (*(char*)value);
            break;
        case 2:
            result = (double)(*(int*)value) * (*(int*)value) * (*(int*)value);
            break;
        case 3:
            result = (double)(*(long int*)value) * (*(long int*)value) * (*(long int*)value);
            break;
        case 4:
            result = (double)(*(float*)value) * (*(float*)value) * (*(float*)value);
            break;
        case 5:
            result = (double)(*(double*)value) * (*(double*)value) * (*(double*)value);
            break;
        default:
            result = 0;
            break;
    }
    return result;
}
