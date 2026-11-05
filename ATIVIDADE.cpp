#include <stdio.h>

int main() {
    int senha_correta = 1234;
    int senha_digitada;

    printf("Digite a senha de acesso: ");
    scanf("%d", &senha_digitada);

    while (senha_digitada != senha_correta) {
        printf("Senha incorreta! Tente novamente: ");
        scanf("%d", &senha_digitada);
    }
    
    printf("Acesso permitido!\n\n");


    int qtd_alunos = 5;
    float notas[5];
    float soma = 0.0, media = 0.0;

    printf("--- CADASTRO DE NOTAS DE TURMA ---\n");
    for (int i = 0; i < qtd_alunos; i++) {
        printf("Digite a nota do %d aluno: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i]; // Acumula a soma
    }
    
    media = soma / qtd_alunos; // Calcula a média geral


    int opcao;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - Consultar media\n");
        printf("2 - Exibir mensagem de boas-vindas\n");
        printf("3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\nA media da turma calculada foi: %.2f\n", media);
                break;
            case 2:
                printf("\nSeja muito bem-vindo ao sistema escolar!\n");
                break;
            case 3:
                printf("\nEncerrando o programa. Ate logo!\n");
                break;
            default:
                printf("\n[ERRO] Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 3); 

    return 0;
}

