#include <stdio.h>

int main () {
    int testes;

    scanf("%d", &testes);

    while(testes-- > 0){
        int matriz[4][4];

        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                scanf("%d", &matriz[i][j]);
            }
        }

        int up = 0, down = 0, left = 0, right = 0; //flag de movimento
        int flag_2048 = 0;

        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                if(matriz[i][j] != 0){
                    if(matriz[i][j] == 2048){
                        flag_2048 = 1;
                        break;
                    }
                    if(i != 3){
                        if((matriz[i + 1][j] == 0 || matriz[i + 1][j] == matriz[i][j]) && down == 0){
                            down = 1;
                        }
                    }
                    if(j != 0){
                        if((matriz[i][j - 1] == 0 || matriz[i][j - 1] == matriz[i][j]) && left == 0){
                            left = 1;
                        }
                    }
                    if(j != 3){
                        if((matriz[i][j + 1] == 0 || matriz[i][j + 1] == matriz[i][j]) && right == 0){
                            right = 1;
                        }
                    }
                    if(i != 0){
                        if((matriz[i - 1][j] == 0 || matriz[i - 1][j] == matriz[i][j]) && up == 0){
                            up = 1;
                        }
                    }
                }
            }
        }

        int primeiro = 1;

        if(flag_2048 == 1){
            printf("NONE\n");
            continue;
        }
        if(down == 1) { 
            printf("DOWN");
            primeiro = 0;
        } 
        if(left == 1) {
            if(primeiro == 1){
                printf("LEFT");
                primeiro = 0;
            }
            else{
                printf(" LEFT");
            }
        }
    
        if(right == 1) {
            if(primeiro == 1){
                printf("RIGHT");
                primeiro = 0;
            }
            else{
                printf(" RIGHT");
            }
        }
        if(up == 1) {
            if(primeiro == 1){
                printf("UP");
            }
            else{
                printf(" UP");
            }
        }
        if(down == 0 && up == 0 && left == 0 && right == 0) printf("NONE");
        printf("\n");

    }
}