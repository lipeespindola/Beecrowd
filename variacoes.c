#include <stdio.h>
#include <math.h>
#include <string.h>

int main (){

    int testes;
    scanf("%d", &testes);
    getchar();

    while(testes-- > 0){
        char senha[16];
        scanf("%[^\n]", senha);
        int len = strlen(senha);
        int variacoes = 1;

        for(int i = 0; i <= len; i++){
            if(senha[i] == '\0') break;
            if(senha[i] == 65 || senha[i] == 97 || senha[i] == 101 || senha[i] == 69 || senha[i] == 73 || senha[i] == 105 || senha[i] == 111 || senha[i] == 79 || senha[i] == 83 || senha[i] == 115){
                variacoes *= 3;
            }
            else{
                variacoes *= 2;
            }
        }

        printf("%d\n", variacoes);

        getchar();
    }

}