int  len(char* str){
        int tam = 0;
        for( ;*str ; tam++, str++ ){};
        return tam;
}