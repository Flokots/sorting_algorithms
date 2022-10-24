#include<stdio.h>
#include<string.h>

int stringLength(char *s){
    int i = 0;
    while(s[i]){
        i++;
    }
    return i;
}

// What is the method of selection used here? 
void sort_0(char *t){
    char aux, minimum;
    int i, j, minimumIndex, length = stringLength(t);
    // Are we using length - 1 so as to exclude the closing byte of the string? 
    for(i = 0; i < length - 1; i++){
        for(j = i; j < length; j++){
            // Assigning the minimum variable a value? Why are we checking against minimum yet we haven't assigned it a value yet? 
            if(i == j || t[j] < minimum) {
                printf("%c\n", minimum);
                minimum = t[j];
                minimumIndex = j;
            }
            // ?? 
            if(minimum < t[i]) {
                aux = t[i];
                t[i] = t[minimumIndex];
                t[minimumIndex] = aux;
            }
        }
    }
    
        
}


void sort_1(char *t){
    char aux;
    int i, j, minimumIndex, length = strlen(t);
    for(i = 0; i < length - 1; i++){
        for(j=i; j < length; j++){
            // Are we using minimumIndex despite not having given it an initial value or what's the logic on line 44? 
            if(i == j || t[j] < t[minimumIndex]){
                minimumIndex = j;
            }
            if(t[minimumIndex] < t[i]){
                aux = t[i];
                t[i] = t[minimumIndex];
                t[minimumIndex] = aux;
            }
        }
    }
}

int main(){
    char text[20];
    printf("Text: "); scanf("%s", text);
    sort_1(text);
    printf("The sorted text: '%s'.\n", text);
    return 0;
}