#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

/*
    Source by BelajarCPP
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    bool kondisi = true;  // kondisi boolean bernilai = 1;
    
    if (kondisi) {
        printf("1");// statement akan di ekesekusi apabila kondisi bernilai TRUE
    } else {
        printf("0");
        // statement akan dieksekusi apabila kondisi bernilai FALSE
    }

    _getch();
    return 0;
}