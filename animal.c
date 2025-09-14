#include <stdio.h>

int main(){
    char classe[20], ordem[20], genero[20];

    scanf("%s", classe);

    if(classe[0] == 'v'){
        scanf("%s", ordem);
        if(ordem[0] == 'a'){
            scanf("%s", genero);
            if(genero[0] == 'c'){
                printf("aguia\n");
            }
            else{
                printf("pomba\n");
            }
        }
        else{
            scanf("%s", genero);
            if(genero[0] == 'o'){
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }
        }

    }
    else{
        scanf("%s", ordem);
        if(ordem[0] == 'i'){
            scanf("%s", genero);
            if(genero[2] == 'm'){
                printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            }
        }
        else{
            scanf("%s", genero);
            if(genero[0] == 'h'){
                printf("sanguessuga\n");
            }
            else{
                printf("minhoca\n");
            }
        }

    }

    return 0;
}