// #include <stdio.h>
// #include <string.h>



// int main(){
//     const char str[30] = "meu nome é gustavo";
//     const char letter = "n";
//     char *position;

//     position = char *strchr(str, letter);
//     printf("%i", position);


//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main () {


    // achar o ponteiro da parte da string 

    char string[] = "duzentos e sessenta";
    char *e;
    int index;
    const char letter = " ";
    char *str5;



    e = strchr(string, ' ');
    // remover parte de uma string
    str5 = e+1;

    // separa a primeira palavra em uma string nova
    index = (int)(e - string);

    


    char str2[index];
    
    strncpy(str2, string, index);
    
    str2[index] = '\0';
    printf("str2 = %s\n", str2);
    
    // falta criar um looping para ir removendo as palavras e fazer a verificação de que numero é 
    

    
    return 0;
    
    // seccionar parte da string 





   
   
}