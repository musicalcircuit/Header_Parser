#include <stdio.h>
#include "random_functions.h"
#define FILE_LENGTH 100

int main() {
    FILE *fp;
    char file_name[FILENAME_MAX] = {0};

    /* Get input from User */
    printf("Enter File Name: ", stdout);
    fgets(file_name, sizeof file_name, stdin);

    /* Try and open file and check for errors */
    fp = fopen(file_name, "r");
    if(fp == NULL)
        printf("Error Opening File\n", stdout);
    else
        printf("good job\n", stdout);

    return 0;

}
