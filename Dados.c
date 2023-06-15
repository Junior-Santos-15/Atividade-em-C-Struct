#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_pessoa {
    char nome[250];
    int idade;
    float peso;
    float altura;
};

int main(){
setlocale(LC_ALL,"portuguese");

struct dados_pessoa pessoa;


printf("Digite o nome : ");
gets(pessoa.nome);

printf("Digite a idade : ");
scanf("%d",&pessoa.idade);

printf("Digite o peso : ");
scanf("%f",&pessoa.peso);

printf("Digite a altura : ");
scanf("%f", &pessoa.altura);

system("cls");

printf("Nome : %s\n", pessoa.nome);
printf("Idade : %d\n", pessoa.idade);
printf("Peso : %.1f\n", pessoa.peso);
printf("Altura : %.1f\n", pessoa.altura);

    return 0;
}

