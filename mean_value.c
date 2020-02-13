// Calculate the mean value on n values with a flag Yes or No

#include<stdio.h>

int main (){
        int i = 0;
        char exit = 'N';
        float num = 0;
        float mean = 0;
        float number;
        
        while (exit != 'Y'){
                printf("Type a number \n");
                scanf("%f", &number);
                num = num + number;
                i++;
                printf("Exit? [Y/N]");
                scanf(" %c", &exit);
                if (exit == 'S'){
                        mean = num/i;
                }
        }
        
        printf("The mean value of %d numbers is %.2f", i, mean);
        
        return 0;
}