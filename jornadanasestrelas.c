#include <stdio.h>


int jornada(int *carneiros1, int n1, int *total){
    int i = 0;
    int sitios[n1];
    
    for(int i = 0; i < n1; i++){
        sitios[i] = 0;
    }

    while(i >= 0 && i < n1){
        if(carneiros1[i] % 2 == 0){

            if(carneiros1[i] == 0){
                break;
            }

            else{
                (*total)++;
                carneiros1[i]--;
                sitios[i] = 1;
                i--;
            }
        }
        else {
            (*total)++;
            carneiros1[i]--;       
            sitios[i] = 1;
            i++;
        }
    }

    int passados = 0;

    for(int i = 0; i < n1; i++){
        if(sitios[i] == 1){
            passados++;
        }
    }

    return passados;

}

int main () {
    int n, total = 0;

    scanf("%d", &n);
    int carneiros[n], soma = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &carneiros[i]);
        soma += carneiros[i];
    }

    int passados1 = jornada(carneiros, n, &total);

    printf("%d %d\n", passados1, soma - total);

    return 0;
    
}