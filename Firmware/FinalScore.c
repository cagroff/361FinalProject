#include <stdio.h>

finalscore(int scorelist1[], int scorelist2[]){

    // initialize score totals
    int total1 = 0;
    int total2 = 0;

    // player 1 scorecard
    // add first 6
    // bonus points if requirement is met
    // add the rest
    for (int i = 0; i < 6; i++) {
        total1 = total1 + scorelist1[i];
    }
    if (total1 >= 63) {
        total1 = total1 + 35;
    }
    for (int i = 6; i < 13; i++) {
        total1 = total1 + scorelist1[i];
    }

    // repeat for player 2
    for (int i = 0; i < 6; i++) {
        total2 = total2 + scorelist2[i];
    }
    if (total2 >= 63) {
        total2 = total1 + 35;
    }
    for (int i = 6; i < 13; i++) {
        total2 = total2 + scorelist1[i];
    }

    // report results winner/tie
    printf("GAME OVER! \n");

    if (total1 > total2){
        printf("First Place: Player 1 with a score of %d \n", total1);
        printf("Second Place: Player 2 with a score of %d \n", total2);
    }

    if (total2 > total1){
        printf("First Place: Player 2 with a score of %d \n", total2);
        printf("Second Place: Player 1 with a score of %d \n", total1);
    }

    if (total2 = total1){
        printf("It's a TIE! Both players scored %d \n", total2);
    }

    return 0;
}
