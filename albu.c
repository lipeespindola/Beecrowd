#include <stdio.h>

int fig(int album, int *array, int figurinhas){

    int jatem[album + 1]; // 1 ate album (figurinhas numeradas)

    for(int i = 1; i <= album; i++){
        jatem[i] = 0; //inicializadas como 0
    }

    for(int i = 0; i < figurinhas; i++){
        scanf("%d", &array[i]);
        if(jatem[array[i]] == 0){  //checa se ainda precisa dessa
            jatem[array[i]] = 1; //marcada como comprada
            album--;
            
        }
    }

    

       

    return album;

}

int main () {
    int album, figurinhas;

    scanf("%d", &album);
    scanf("%d", &figurinhas);

    int array[figurinhas];

    int total = fig(album, array, figurinhas);

    printf("%d\n", total);

    return 0;
}