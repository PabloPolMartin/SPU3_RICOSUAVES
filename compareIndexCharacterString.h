#include <stdio.h>
#include <string.h>
#include<stdbool.h>

bool compareIndexCharacterString (char* wordToCheck, int index, char character){
    index=index-1;
    if (wordToCheck[index]==character){
        return true;
    }
    return false;
}