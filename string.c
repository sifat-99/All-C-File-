#include <stdio.h>

int main()
{

    int check=0;
    int values;
    while(check != 1){
        scanf("%d", &values);
        if(values == 2002){
            printf("Acesso Permitido\n");
            check=1;
            
        }
        else{
            printf("Senha Invalida\n");
        }
    }
    return 0;
}