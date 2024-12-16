// Inclui a biblioteca padrão de entrada e saída.
#include <stdio.h>
// Inclui a biblioteca padrão para funções utilitárias.
#include <stdlib.h>

// Função principal do programa.
void main()
{
    // Declara uma variável inteira para armazenar a idade do usuário.
    int idade;

    // Solicita ao usuário que digite sua idade.
    printf("Digite sua idade: ");
    // Lê a idade digitada e armazena na variável 'idade'.
    scanf("%d", &idade);

    // Verifica se a idade está entre 16 e 18 anos ou se é maior que 60 anos.
    if (idade >= 16 && idade < 18 || idade > 60)
    {
        // Se a condição for verdadeira, informa que o voto é opcional.
        printf("O voto é opcional");
    }
    else if (idade < 16)
    {
        // Se a idade for menor que 16, informa que o usuário não pode votar.
        printf("Você não pode votar");
    }
    else
    {
        // Caso contrário, informa que o voto é obrigatório.
        printf("O voto é obrigatório");
    }
    // Retorna "0" para indicar que o programa terminou com sucesso.
    return 0;
}
