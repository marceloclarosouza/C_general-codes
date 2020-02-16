//Escreva um programa para calcular o delta, as raízes e os vértices de uma função de segundo grau
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float deltaf (float a, float b, float c){
        float d;
        d = b*b - (4*a*c);
        return d;
}

float r1 (float a, float b, float c){
        float x, d;
        d = b*b - (4*a*c);
        x = (-b + sqrt(d))/(2*a);
        return x;
        
}
float r2 (float a, float b, float c){
        float x, d;
        d = b*b - (4*a*c);
        x = (-b - sqrt(d))/(2*a);
        return x;
}
float xv (float a, float b){
        float abs;
        abs = -b/(2*a);
        return abs;
}

float yv (float a, float b, float c){
        float ord, d;
        d = b*b - (4*a*c);
        ord = -d/(4*a);
        return ord;
}


int main()
{
        float a, b, c, x1, x2, delta, abs, ord;
        
        printf("Digite o valor de a \n");
        scanf("%f", &a);
        printf("Digite o valor de b \n");
        scanf("%f", &b);
        printf("Digite o valor de c \n");
        scanf("%f", &c);
        
        x1 = r1(a,b,c);
        x2 = r2(a,b,c);
        delta = deltaf(a,b,c);
        abs = xv(a,b);
        ord = yv(a,b,c);
        
        printf("%.2f %.2f %.2f %.2f %.2f", x1, x2, delta, abs, ord);
        
        return 0;
}
