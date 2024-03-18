#ifndef FILE_H
#define FILE_H
#define CALCULATOR(operation, num1, num2) \
    ({ \
        int result; \
        if (operation == '+') \
            result = num1 + num2; \
        else if (operation == '-') \
            result = num1 - num2; \
        else if (operation == '*') \
            result = num1 * num2; \
        else if (operation == '/' && num2 != 0) \
            result = num1 / num2; \
        else \
            result = 0; \
        result; \
    })

#define ARRAY_SUM(arr, size) \
    ({ \
        int sum = 0; \
        for (int i = 0; i < size; ++i) \
            sum += arr[i]; \
        sum; \
    })

#endif

