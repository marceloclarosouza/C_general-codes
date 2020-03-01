// entre com 3 valores, teste se esses valores formam um triângulo e retorne o tipo do triangulo (equilatero, isosceles ou escaleno)


#include <stdio.h>
#include <stdlib.h>

int main()
{
        float l1, l2, l3, l1dif = 0, l2dif = 0, l3dif = 0;
        
        printf("Digite o valor de l1 ");
        scanf("%f", &l1);
        printf("Digite o valor de l2 ");
        scanf("%f", &l2);
        printf("Digite o valor de l3 ");
        scanf("%f", &l3);
        // calcular o módulo da diferenças
        l1dif = l2-l3;
        l2dif = l1-l3;
        l3dif = l2-l3;
        
        if (l1dif < 0){
                l1dif = l1dif*(-1);
        }
        else{
                l1dif = l1dif;
        }
        
        if (l2dif < 0){
                l2dif = l2dif*(-1);
        }
        else{
                l2dif = l2dif;
        }
        
        if (l3dif < 0){
                l3dif = l3dif*(-1);
        }
        else{
                l3dif = l3dif;
        }
        
        // testar se os valores formam ou não um triângulo e o seu tipo
        
        if ((l1 < l2+l3) && (l2 < l1+l3) && (l3 < l1+l2)
                    && (l1 > l1dif) && (l2 > l2dif) && (l3 > l3dif)){
                if ((l1 == l2) && (l1 == l3) && (l2 == l3)){
                        printf("Estes valores forma um triangulo equilatero\n");
                }
                else if ((l1 != l2) && (l1 != l3) && (l2 != l3)){
                        printf("Estes valores formam um triângulo escaleno\n");
                }
                else{
                        printf("Estes valores formam um triangulo isosceles\n");
                }
        }
        
        else{
                printf("Esses valores não formam um triangulo\n");
        }
        
        return 0;
}
