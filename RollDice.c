
int rolldice( int scorecard[]) {

    int dice[5];
    int reroll[5];
    int ready = 0;
    int space = 100;
    int turnend = 0;

    // roll number 1
    for (int d = 0; d < 5; d++) {

        dice[d] = (rand() % 6);
        reroll[d] = 0;

    }
    // select dice to reroll

    while (ready == 0) {

        // if press button, select dice
        if (pressone == 1) {
            reroll[0] = 1;
        }
        if (presstwo == 1) {
            reroll[1] = 1;
        }
        if (pressthr == 1) {
            reroll[2] = 1;
        }
        if (pressfou == 1) {
            reroll[3] = 1;
        }
        if (pressfiv == 1) {
            reroll[4] = 1;
        }

        // if press enter, move on
        if (pressent ==1) {
            ready = 0;
        }

    }

    // roll number 2
    for (int d = 0; d < 5; d++) {

        if ( reroll[d] = 1) {

            dice[d] = (rand() % 6);
            reroll[d] = 0;
        }

    }

    // select dice to reroll
    while (ready == 0) {

        // if press button, select dice
        if (pressone == 1) {
            reroll[0] = 1;
        }
        if (presstwo == 1) {
            reroll[1] = 1;
        }
        if (pressthr == 1) {
            reroll[2] = 1;
        }
        if (pressfou == 1) {
            reroll[3] = 1;
        }
        if (pressfiv == 1) {
            reroll[4] = 1;
        }

        // if press enter, move on
        if (pressent == 1) {
            ready = 1;
        }

    }

    // roll number 3
    for (int d = 0; d < 5; d++) {

        if ( reroll[d] = 1) {

            dice[d] = (rand() % 6);
            reroll[d] = 0;
        }

    } 

    // select space on scorecard
    while (turnend == 0) {
        
        // select spot on scorecard
        if (pressone == 1) {
            space = 0;   
        }
        if (presstwo == 1) {
            space = 1;   
        }
        if (pressthr == 1) {
            space = 2;   
        }
        if (pressfou == 1) {
            space = 3;   
        }
        if (pressfiv == 1) {
            space = 4;   
        }
        if (presssix == 1) {
            space = 5;   
        }
        if (presstok == 1) {
            space = 6;   
        }
        if (pressfok == 1) {
            space = 7;   
        }
        if (pressfhs == 1) {
            space = 8;   
        }
        if (presssms == 1) {
            space = 9;   
        }
        if (presslgs == 1) {
            space = 10;   
        }
        if (pressytz == 1) {
            space = 11;   
        }
        if (presschn == 1) {
            space = 12;   
        }
        
        // if invalid, display error and ask again
        if (scorecard[space] != 51){
            printf("You have already selected that space! Pick another.");
            space = 100;
        }

        // if valid, exit loop
        if (scorecard[space] == 51){
            turnend = 1;
        }
    }

    return (space, dice);
}