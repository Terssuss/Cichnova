#include <stdio.h>
#include <stdlib.h>

int main() {

    int input1, input2, pocet_karet = 8;
    char k1 = '1', k2 = '2', k3 = '3', k4 = '4', k5 = '5', k6 = '6', k7 = '7', k8 = '8';

     while (pocet_karet > 0) {

        system("cls");

        //vytvori karty
        printf("# # # # #   # # # # #   # # # # #   # # # # #\n");
        printf("#       #   #       #   #       #   #       #\n");
        printf("#   %c   #   #   %c   #   #   %c   #   #   %c   #\n", k1, k2, k3, k4);
        printf("#       #   #       #   #       #   #       #\n");
        printf("# # # # #   # # # # #   # # # # #   # # # # #\n\n");

        printf("# # # # #   # # # # #   # # # # #   # # # # #\n");
        printf("#       #   #       #   #       #   #       #\n");
        printf("#   %c   #   #   %c   #   #   %c   #   #   %c   #\n", k5, k6, k7, k8);
        printf("#       #   #       #   #       #   #       #\n");
        printf("# # # # #   # # # # #   # # # # #   # # # # #");

        //hrac zadava prvni kartu
        do {
            printf("\n\nZadej libovolnou kartu z 1. rady: ");                             //spravne kombinace jsou (1 + 7) (2 + 5) (3 + 8) (4 + 6)
                scanf("%i", &input1);
        
        } while (input1 < 1 || input1 > 4);
        
        //hracovi se ukaze jaky ma karta symbol
        switch (input1) {
            case(1): printf("\nkarta ma symbol - y"); break;
            case(2): printf("\nkarta ma symbol - x"); break;
            case(3): printf("\nkarta ma symbol - @"); break;
            case(4): printf("\nkarta ma symbol - &"); break;
        }

        //hrac zadava druhou kartu
        do { 
            printf("\n\nZadej libovolnou kartu z 2. rady: ");                             //spravne kombinace jsou (1 + 7) (2 + 5) (3 + 8) (4 + 6)
                scanf("%i", &input2);
        
        } while (input2 < 5 || input2 > 8);

        //hracovi se ukaze jaky ma karta symbol
        switch (input2) {
            case(5): printf("\nkarta ma symbol - x"); break;
            case(6): printf("\nkarta ma symbol - &"); break;
            case(7): printf("\nkarta ma symbol - y"); break;
            case(8): printf("\nkarta ma symbol - @"); break;
        }
        
    //program proveri jestli zadane kombinace plati
        if (input1 == 1 && input2 == 7 && k1 == '1') {
            k1 = 'y';
            k7 = 'y';
            pocet_karet -= 2;
        }

        if (input1 == 2 && input2 == 5 && k2 == '2') {
            k2 = 'x';
            k5 = 'x';
            pocet_karet -= 2;
        }

        if (input1 == 3 && input2 == 8 && k3 == '3') {

            k3 = '@';
            k8 = '@';
            pocet_karet -= 2;
        }

        if (input1 == 4 && input2 == 6 && k4 == '4') {

            k4 = '&';
            k6 = '&';
            pocet_karet -= 2;
        }
        getchar(); getchar();
    }

    printf("\nGRATULUJI JSI VITEZ");
}