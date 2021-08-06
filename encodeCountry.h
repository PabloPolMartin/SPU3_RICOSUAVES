#include <stdlib.h>
#include <string.h>

char* country = "Mexico";
int letter;
int point = 0;

char* countryEncoder(char* pais, int*addressVariable){

    srand(time(NULL));
    int len = lenght(country);
    
    char* encoded = (char*) malloc(sizeof(char)*len);

    for (int i = 0; i < len; i++){
        encoded[i] = '*';
    }

    letter = rand()%len;
    int hide = ran()%len;
    for(int i = 0; i < letter; i++){
        int hide = rand()%len;
        encoded[hide] = country[hide];
    }
    int*point = &letter;
    variableM(&letter);

    // printf("Country Name: %s\n", EncodedCountry);
    printf("Current Points:%d\n", letter);
}
    
