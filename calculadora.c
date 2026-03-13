#include <stdio.h>
#include <math.h>
int main(){
        float a,b,c,x,y, DELTA, X1,X2,XV,YV;
        int j, l;
    printf("escolha qual operação deve ser feita?\n");
    printf("1-soma\n");
    printf("2-subtração\n");
    printf("3-divisão\n");
    printf("4-Multiplicação\n");
    printf("5-Equação do 2 grau\n");
    printf("6-Pitagoras\n");
    printf("7-Raiz Quadrada\n");
    printf("8-Potenciação\n");
    scanf("%f", &x);
    if (x == 1){
        printf("Escolha o primeiro numero a ser somado:");
        scanf("%f", &a);
        printf("escolha outro numero a ser somado:");
        scanf("%f", &b);
        printf("a soma de %f e %f eh: %f", a, b, a+b);
        }
    else if (x == 2){
        printf("Escolha o primeiro numero a ser subtraido:");
        scanf("%f", &a);
        printf("escolha outro numero a ser subtraido:");
        scanf("%f", &b);
        printf("a subtração de %f e %f é: %f", a, b, a-b);
    }
    else if (x == 3){
    printf("escreva o numero o qual voce quer dividir:");
    scanf("%f", &a);
    printf("escolha o numero voce quer que divida o anterior:");
    scanf("%f", &b);
    printf("o resultado da divisao de %f com %f eh: %f", a, b, a/b);

    }
    else if (x == 4){
        printf("escolha o primeiro numero que deseja multiplicar:");
        scanf("%f", &a);
        printf("escolha o outro numero:");
        scanf("%f", &b);
        printf(" a multiplicação de %f com %f é %f", a , b, a*b);

    }
    else if (x == 5){
    printf("digite o valor de A:");
    scanf("%f", &a);
    printf("digite o valor de B:");
    scanf("%f", &b);
    printf("Digite o valor de C:");
    scanf("%f", &c);
    DELTA = (b * b) - (4* a * c);
    XV = -b / (2*a);
    YV = -DELTA / (4*a);
        if (DELTA > 0){
        X1 = (-b+ sqrt(DELTA)) / (2 * a);
        X2 = (-b- sqrt(DELTA)) / (2 * a);
        printf("Delta positivo entao temos duas respostas reais sendo %f e %f, e o Xv é %f e o Yv é %f",X1 ,X2,XV,YV);

        }
        else if (DELTA == 0){
        printf("Delta = 0 entao as duas raizes sao iguais e sao igual a %f, mas o Xv é %f e o Yv é %f", XV, XV, YV);

        }
        else if (DELTA < 0 ){
        printf("Delta negativo, sem resposta no conjunto dos reais, mas o XV é %f e o YV é %f", XV, YV);
        }


    }
    else if (x == 6){
        printf("1-Descobrir Hipotenusa\n");
        printf("2-descobrir cateto\n");
        scanf("%f", &y);

        if (y == 1){
        printf("Digite o valor de um dos catetos:\n");
        scanf("%f", &a);
        printf("Digite o valor do outro cateto\n");
        scanf("%f", &b);
        c = sqrt(a*a + b*b);
        printf(" O valor da hipotenusa eh: %f", c);
        }
        else if (y == 2){
        printf("Digite o valor da hipotenusa:\n");
        scanf("%f", &c);
        printf("Digite o valor do cateto:\n");
        scanf("%f", &a);
        b = sqrt(c*c - a*a);
        printf("O valor do outro cateto eh: %f", b);
        }
    }

    else if (x == 7){
        printf("digite o valor que quer extrair a raiz quadrada:\n");
        scanf("%f", &y);
        b = sqrt(y);
        printf("A raiz de %f é: %f", y, b);
    }

    else if (x == 8){
    printf("escolha o numero da base:\n");
    scanf("%f", &a);
    printf("escolha o numero que sera a potencia:\n");
    scanf("%f", &b);
    c = pow(a, b);
    printf("%f elevado a %f, é %f", a, b ,c);

    }
    return 0;
}
