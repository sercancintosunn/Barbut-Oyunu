#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int zaratma(void);


int main() {

    int toplam,puan,oyunDurumu;


    printf("Oyuncu attigi 2 zarin toplami 7 veya 11 ise direkt kazaniyor.\nAttigi zar toplami 2,3,12 ise direkt kaybediyor.\nOyuncu toplam 4,5,6,8,9,10 atarsa oyuncunun kazanacagi sayi haline gelir.Kazanmak icin oyuncu sayisini bulana kadar zar atmaya devam eder.\nZarlari atmaya devam ederken 7 atarsa kaybeder.\n\n\n");

    srand(time(NULL));

    toplam = zaratma();

    switch (toplam) {

    case 7: case 11:
        oyunDurumu == 1;
            break;
            case 2: case 3: case 12:
                oyunDurumu == 2;
            break;
        default:
            oyunDurumu == 0;
            puan = toplam;
            printf("Oyuncunun kazanacagi zar: %d\n", puan);
            break;
    }

    while(oyunDurumu == 0){

        toplam = zaratma();

        if(toplam == puan)
            oyunDurumu = 1;
        else if(toplam == 7)
            oyunDurumu = 2;
    }

    if(oyunDurumu == 1)
        printf("Oyuncu Kazanır.\n");
    else
        printf("Oyuncu Kaybeder.\n");

    return 0;
}


int zaratma(void){

    int zar1,zar2,toplamZar;

    zar1 = 1 + (rand() % 6);
    zar2 = 1 + (rand() % 6);
    toplamZar = zar1 +  zar2;
    printf("Oyuncu %d + %d = %d atti.\n", zar1,zar2,toplamZar);
    return toplamZar;
}
