#include <time.h>  
#include <stdlib.h>
#include <string.h>

char* encodeCountry(char* pais, int*addressVariable){

    srand(time(NULL));
    int len = strlen(pais);
    
    char* encoded = (char*) malloc(sizeof(char)*len);

    for (int i = 0; i < len; i++){
        encoded[i] = '*';
    }

    
    int hide = rand()%len;
    
    for(int i = 0; i < hide; i++){
        int hide = rand()%len;
        encoded[hide] = pais[hide];
    }
    return encoded;
}
