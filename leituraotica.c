#include <stdio.h>

char check(int *quest){
    char resposta;
    int repetido = 0;
    if(quest[0] <= 127){
        resposta = 'A';
        repetido++;
    }
    if(quest[1] <= 127){
        resposta = 'B';
        repetido++;
    }
    if(quest[2] <= 127){
        resposta = 'C';
        repetido++;
    }
    if(quest[3] <= 127){
        resposta = 'D';
        repetido++;
    }
    if(quest[4] <= 127){
        resposta = 'E';
        repetido++;
    }

    if(repetido > 1 || repetido < 1){
        resposta = '*';
        return resposta;
    }
    else{
        return resposta;
    }
}


int main () {
    int n;
    int quest[5];

    do {
        scanf("%d", &n);
        if(n == 0) break; // EOF
        for(int i = 1; i <= n; i++){
            scanf("%d %d %d %d %d", &quest[0], &quest[1], &quest[2], &quest[3], &quest[4]);
            char resposta = check(quest);
            printf("%c\n", resposta);
        }

    }while(n != 0);

    
}