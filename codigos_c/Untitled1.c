#include <stdio.h>
#include <string.h>

int main () {


    // achar o ponteiro da parte da string 

    char string[] = "duzentos e sessenta";
    char *e;
    int index, size;



    e = strchr(string, ' ');
    index = (int)(e - string);

    size = sizeof(string) - index;

    char parte[50];
    memcpy(parte, string + index, size);
    printf("%c", parte);
    
}
