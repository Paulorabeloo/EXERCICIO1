#include <stdio.h>


int main()
{
    int idades[3];
    float pesos[3];
    float alturas[3];
    int somaidades = 0;
    int contadorpessoas1 = 0;
    int contadoraltura = 0;
    int contadoridade = 0;

    // Entradas
    for (int i = 0; i < 3; i++)
    {
        printf("Digite a idade da pessoa %d:\n", i + 1);
        scanf("%d", &idades[i]);

        printf("Digite o peso da pessoa %d (em kg):\n", i + 1);
        scanf("%f", &pesos[i]);

        printf("Digite a altura da pessoa %d (em metros):\n", i + 1);
        scanf("%f", &alturas[i]);
    }

    // Processamento
    for (int i = 0; i < 3; i++)
    {
        somaidades += idades[i];

        if (pesos[i] > 90 && alturas[i] < 1.50)
        {
            contadorpessoas1++;
        }

        if (alturas[i] > 1.90)
        {
            contadoraltura++;
            if (idades[i] >= 10 && idades[i] <= 30)
            {
                contadoridade++;
            }
        }
    }

    float media = (float)somaidades / 3;
    float porcentagem = 0.0;
    if (contadoraltura > 0)
    {
        porcentagem = ((float)contadoridade / contadoraltura) * 100;
    }

    // Saídas
    printf("A média das idades das pessoas é %.2f\n", media);
    printf("Quantidade de pessoas com peso > 90 e altura < 1.50: %d\n", contadorpessoas1);
    printf("A porcentagem de pessoas com idade entre 10 e 30 anos, entre as pessoas que possuem altura > 1.90: %.2f%%\n", porcentagem);

    return 0;
}
