#include<stdio.h>

main()
{
	char* N,N1,N2;
	scanf("%s %s %s",&N,&N1,&N2);
    if(N=="vertebrado")
    {
        if(N1=="ave")
        {
            if(N2=="carnivoro")
            {
                printf("aguia\n");
            }else{
                printf("pomba\n");
            }
        }else if(N1=="mamifero")
        {
            if(N2=="onivoro")
            {
                printf("homem\n");
            }else{
                printf("vaca\n");
            }
        }
    }else if(N=="invertebrado")
    {
        if(N1=="inseto")
        {
            if(N2=="hematofago")
            {
                printf("pulga\n");
            }else{ printf("lagarta\n");}
        }else if(N1=="anelideo")
        {
            if(N2=="hematofago")
            {
                printf("sanguessuga\n");
            }else{
                printf("aminhoca\n");
            }
        }
    }
}