#include<stdio.h>
#include<string.h>

// How can I make the selection sort work for strings same way it works for arrays? 
void selectionSort(char *inputArr){
    int i, j, min, length = strlen(inputArr);
    char tmp;

    for(i = 0; i < length - 1; i++){
        // Finding the smallest number in the subArray
        min = i;
        for (j = i; j < length; j++){
            if (inputArr[j] < inputArr[min] || i == j) {
                min = j;
            }
        }
    if (min != i) {
        // Swapping elements
        tmp = inputArr[i];
        inputArr[i] = inputArr[min];
        inputArr[min] = tmp;
    }
    }

  
}

int main(){
    char inputArr[20];

    printf("Input Array Text: "); scanf("%s", inputArr);
    selectionSort(inputArr);
    printf("The sorted text is: '%s'\n", inputArr);
    return 0;
}