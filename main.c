//
// Created by SatoMasaki on 9/5/15 AD.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

int main(int argv, char **argc)
{
    int i, num;
    size_t len;

    if (argv != 2) {
        fprintf(stderr, "引数は1つで\n");
        return -1;
    }

    len = strlen(argc[1]);

    for (i = 0; i < len; i++ ) {
        if (isdigit(argc[1][i]) == 0) {
            fprintf(stderr, "引数は整数で\n");
            return -1;
        }
    }

    num = atoi(argc[1]);

    for (i = 1; i <= num; i++) {
        if (i % 15 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0){
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
}
