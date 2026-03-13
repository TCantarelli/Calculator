#include <stdio.h>
#include <math.h>
int main(){
        float a,b,c,x,y, DELTA, X1,X2,XV,YV;
    printf("escolha qual operação deve ser feita\n");
    printf("1-soma\n");
    printf("2-subtração\n");
    printf("3-divisão\n");
    printf("4-Multiplicação\n");
    printf("5-Equação do 2 grau\n");
    scanf("%f", &x);
    if (x == 1){
        printf("Escolha o primeiro numero a ser somado:");
        scanf("%f", &a);
        printf("escolha outro numero a ser somado");
        scanf("%f", &b);
        printf("a soma eh %f", a+b);
        }
    else if (x == 2){
        printf("Escolha o primeiro numero a ser subtraido:");
        scanf("%f", &a);
        printf("escolha outro numero a ser subtraido");
        scanf("%f", &b);
        printf("a soma eh %f", a-b);
    }
    else if (x == 3){
    printf("escreva o numero o qual voce quer dividir:");
    scanf("%f", &a);
    printf("escolha o numero voce quer que divida o anterior:");
    scanf("%f", &b);
    printf("o resultado da divisao de %f com %f eh %f", a, b, a/b);

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
        printf("delta positivo entao temos duas respostas reais sendo %f e %f, e o Xv é %f e o Yv é %f",X1 ,X2,XV,YV);

        }
        else if (DELTA == 0){
        X1 = -b / (2 * a);
        printf("Delta = 0 entao as duas raizes sao iguais e sao igual a %f, mas o Xv é %f e o Yv é %f", X1, XV, YV);

        }
        else if (DELTA < 0 ){
        printf("delta negativo, sem resposta no conjunto dos reais, mas o XV é %f e o YV é %f", XV, YV);
        }
    }

    return 0;
}
