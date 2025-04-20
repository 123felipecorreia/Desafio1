#include <stdio.h>

int main () {
    char paciente [40];
    char procedimento [10];

    int id,senha;
    senha = 1;

    char*paciente_ptr = paciente;
    char*procedimento_ptr = procedimento;
    int*id_ptr = &id;
    int*senha_ptr = &senha;

    //Input dos dados

    printf("Digite o nome do paciente: ");
    scanf("%s", paciente);
    printf("Digite o procedimento: ");
    scanf("%s", procedimento);
    printf("Digite o ID do paciente: ");
    scanf("%d", &id);

    //Exibicao dos dados e ponteiros

    printf("Nome do paciente: %s\n", paciente);
    printf("Procedimento: %s\n", procedimento);
    printf("ID do paciente: %d\n", id);
    printf("Senha do paciente: %d\n", *senha_ptr);

    //Exibição dos endereços dos Ponteiros
    printf("\nEndereço dos ponteiros: \n");
    printf("Paciente: %p\n", (void*)paciente_ptr);
    printf("Procedimento: %p\n", (void*)procedimento_ptr);
    printf("ID: %p\n", (void*)id_ptr);
    printf("Senha: %p\n", (void*)senha_ptr);

    senha++;


   
    return 0;


    

}