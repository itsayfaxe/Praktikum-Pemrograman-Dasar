#include <stdio.h>

int main(){
    float yu_army = 958.730;
    int altar_army = 5;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %.3f pasukan\n", yu_army);
    printf("Jumlah pahlawan = %d pahlawan\n", altar_army);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %.3f pasukan\n", yu_army / altar_army);
    return 0;
}