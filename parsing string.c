#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);// we get string from user
    s = realloc(s, strlen(s) + 1); // reallocation of string
    
    parse_print(s);
    
    
    return 0;
}

void parse_print(char *s){
	
	printf("\nParsing and printing string from head\n");
	while(*s != NULL){
        
        while(*s != ' ' && *s != NULL){
              printf("%c",*s);  
            ++s;
        }
        printf("\n");
        
        if(*s != NULL)
            ++s;
    
        
    }
	
}
