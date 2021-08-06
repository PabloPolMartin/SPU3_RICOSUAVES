#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char* selectRandomLine(char* path){
    
    FILE* file = fopen("paises.txt","r");
    char currentLine[10];

    while (fscanf( file, "%s", currentLine ) != EOF)
    {  
        int l=0;
        if(l==rand()%21)
        {
            char* row=currentLine;

            return row;
        }
    }

    fclose(file);
    char* l=currentLine;
    return l;
};






