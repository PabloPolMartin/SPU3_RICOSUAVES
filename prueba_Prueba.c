#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
// #include "len.h"

//GLOBAL VARIABLES//

char*EncodedCountry = "************";
char* country = "Mexico";
int points;
int currentPoint = 0 ;

//other function//
void  modifyVariables( int*AdressVariable){
    *AdressVariable = points;
    return;
}

//Main function//
char* encodeCountry( char*pais, int*AdressVariable ){
    
    srand(time(NULL));
    int len = strlen(country);
    
    //ENCODING STRING
    char* tempEncoded = (char*)malloc(sizeof(char)*len);   
        for (int i = 0; i < len; i++)
        {
        tempEncoded[i] = '*';
        }

    //showing some "****" of str
    points = rand()%len;
    int ocultar = rand()%len; 
         for (int i = 0; i < points; i++)
        {
        int ocultar = rand()%len;
        tempEncoded[ocultar] = country[ocultar];
        }
    EncodedCountry = tempEncoded;
    int*CurrentPoint = &points;
    modifyVariables(&points);

    //PRINTING RESULTS//
    printf("Country Name: %s\n", EncodedCountry);
    printf("Current Points:%d\n", points);
   
    
}



int main(){
   
    encodeCountry (country, &currentPoint);


}