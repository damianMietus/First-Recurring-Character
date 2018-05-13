/***********************
Damian Mietus
Reddit Daily Programmer
Challenge #340 [Easy] First Recurring Character
Completed May 12 2018
***********************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Item{
    char chr;
    int index;
};

int main(int argc, char *argv[]) {

    int size = 150;
    int i = 0;
    int k = 0;
    char c;
    char repeated;
    int firstChr = 0;
    int secondChr = 0;
    char *string = malloc(sizeof(char)*size);
    printf("Enter a string:\n");

    while ((c = getchar()) != '\n'){
        string[i] = c;
        i++;

        if (i == size){
            size++;
            string = realloc(string, sizeof(char)*size);
        }
    }

    struct Item arr[10];

    for (i = 0; i < strlen(string); i++){
        arr[i].chr = string[i];
        arr[i].index = i;

        for (k = 0; k < i; k++){
            if (arr[i].chr == arr[k].chr){
                firstChr = k+1;
                secondChr = i+1;
                repeated = arr[i].chr;
                i = strlen(string) + 1;
                break;
            }
        }
    }

    if (firstChr == 0 && secondChr == 0){
        printf("There appears to be no repeating characters.\n");
    } else {
        printf("The repeated character is %c, first at %d, and again at %d\n", repeated, firstChr, secondChr);
    }



    return 0;
}
