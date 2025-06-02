#include <stdio.h>

struct dados {
    int codigo;
    char nome[50];
    int idade;
    char sexo;
    float salario;
};

struct dados cliente[5];

void imprimirDados(struct dados c[]) {
    printf("\n--- Dados dos Clientes ---\n");
    for(int i = 0; i < 5; i++) {
        printf("Cliente %d:\n", i + 1);
        printf("Código: %d\n", c[i].codigo);
        printf("Nome: %s\n", c[i].nome);
        printf("Idade: %d\n", c[i].idade);
        printf("Sexo: %c\n", c[i].sexo);
        printf("Salário: %.2f\n\n", c[i].salario);
    }
}

int somarIdades(struct dados c[]) {
    int soma = 0;
    for(int i = 0; i < 5; i++) {
        soma += c[i].idade;
    }
    return soma;
}

int main() {
    for(int i = 0; i < 5; i++) {
        printf("Digite os dados do cliente %d:\n", i + 1);
        printf("Código: ");
        scanf("%d", &cliente[i].codigo);
        printf("Nome: ");
        getchar(); // limpar buffer
        fgets(cliente[i].nome, 50, stdin);
        printf("Idade: ");
        scanf("%d", &cliente[i].idade);
        printf("Sexo (M/F): ");
        scanf(" %c", &cliente[i].sexo);
        printf("Salário: ");
        scanf("%f", &cliente[i].salario);
        printf("\n");
    }
