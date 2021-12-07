//Aerospace 361
//Group MI6
//Yahtzee
//Josh C., Harrison H., Nathanael P., Caleb G., Tatyana V.
#include <stdio.h>
#include <mat.h>


//Let's Play YAHTZEE!!!!

//This is the main menu Option
int yahtzee_menu (void)
{
        int option = 0, main = 0;

        printf("Welcome to Yahtzee!\n\n");
//The user will have different options, whether they want to see the rules, start a new game or exit the game.
        do
        {
                do
                {
                        printf("Select an option by inputting the number:\n1. See Rules\n2. New Game\n3. Exit\n");
                        scanf("%d", &option);
                }
                while ((option != 1) && (option != 2) && (option != 3));

                switch (option)
                {
                case 1: //print game rules
                system("cls");

                printf("\nGame rules:\n");
                printf("The objective of YAHTZEE is to get as many points as possible by rolling\n");
                printf("five dice and getting certain combinations of dice.\n\n");
                printf("Gameplay:\n");
                printf("In each turn a player may roll the dice up to three times. A player doesn't have to roll all\n");
                printf("five dice on the second and third throw of a round, they may put as many dice as they want to the\n");
                printf("side and only throw the ones that don't have the numbers they are trying to get. For example, a player\n");
                printf("throws and gets 1,3,3,4,6. They decide they want to try for the large straight, 1,2,3,4,5. So, they put\n");
                printf("1,3,4 to the side and only throw dice 3 and 6 again, hoping to get 2 and 5. In this game you select\n");
                printf("the dice you want to keep. They will be moved down and will not be thrown the next time you roll.\n");
                printf("If you decide after the second throw in a turn that you don't want to keep the same dice\n");
                printf("before the third throw then you can select them again and they will be thrown in the third throw.\n");

                        break;
//Case 2 starts the game.
                case 2:
                        main = 1;
//Case 3 Exits the game 
 		case 3:
                        main = 0;
                        break;
                	default:
                        printf("Please enter a valid input (1, 2, or 3).\n");
                }
        }
        while ((option != 2) && (option != 3));
        system("cls");

        return main;
}


//This is the two players starting scoreboard. Both players have a score of zero. 
int ScoreCard1[13] = {51};
int ScoreCard2[13] = {51};

//This is the main part of the code, which is when the game starts. This while loop will continue as long as the game is not over yet.
int main()
{
	//This while loop will keep going until the game is over.
	int endgame=0;
	int turn=0;
	while (endgame!=1)
	{
		for(turn=0,turn<13,turn++)
		{
		//This is the score that both players have after each turn.
		//

		int rolldice(int scorecard1[]);
		
	        	
		//We will first go to Player 1. They will roll the dice, then choose what they want to reroll.
		//To do that we will call the rolling function.
		//After rolling, Player 1 will pick which score they want to pick.

		int rolldice(int scorecard2[]);
		
		}
	}
	
}	

//This part of the code will roll the dice and ask the user what they want to re-roll

int rolldice( int scorecard[]) {

    int dice[5];
    int reroll[5];
    int ready = 0;
    int space = 100;
    int turnend = 0;
//Roll Number 1
    for (int d = 0; d < 5; d++) {

        dice[d] = (rand() % 6);
        reroll[d] = 0;

    }
    while (ready == 0) {

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

        if (pressent ==1) {
            ready = 1;
        }

    }
//Roll number 2
    ready=0;
    for (int d = 0; d < 5; d++) {

        if ( reroll[d] = 1) {

            dice[d] = (rand() % 6);
            reroll[d] = 0;
        }

    }

    while (ready == 0) {

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

        if (pressent ==1) {
            ready = 1;
        }

    }

//Roll Number 3
    for (int d = 0; d < 5; d++) {

        if ( reroll[d] = 1) {

            dice[d] = (rand() % 6);
            reroll[d] = 0;
        }

    }

    while (ready == 0) {

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

        if (pressent == 1) {
            ready = 1;
        }

    }
//For while the turn hasn't ended yet

    while (turnend == 0) {

        if (pressone == 1) {
            space = 0;
	    int ones(int dice[5], int scorecard[13], int points[13]);
        }
        if (presstwo == 1) {
            space = 1;
	    int twos(int dice[5], int scorecard[13], int points[13]);
        }
        if (pressthr == 1) {
            space = 2;
	    int threes(int dice[5], int scorecard[13], int points[13]);
        }
        if (pressfou == 1) {
            space = 3;
	    int fours(int dice[5], int scorecard[13], int points[13]);
        }
        if (pressfiv == 1) {
            space = 4;
	    int fives(int dice[5], int scorecard[13], int points[13]);
        }
        if (presssix == 1) {
	    space = 5;
	    int sixes(int dice[5], int scorecard[13], int points[13]);
        }
        if (presstok == 1) {
            space = 6;
	    int 3_of_a_kind(int dice[5], int scorecard[13], int points[13])	    
        }
        if (pressfok == 1) {
            space = 7;
	    int 4_of_a_kind(int dice[5], int scorecard[13], int points[13])
        }
        if (pressfhs == 1) {
            space = 8;
	    int full_house(int dice[5], int scorecard[13], int points[13]);
        }
        if (presssms == 1) {
            space = 9;
	    int small_straight(int dice[5], int scorecard[13], int points[13]);
        }
        if (presslgs == 1) {
            space = 10;
	    int large_straight(int dice[5], int scorecard[13], int points[13])	    
        }
        if (pressytz == 1) {
            space = 11;
	    int yahtzee(int dice[5], int scorecard[13], int points[13])
        }
        if (presschn == 1) {
            space = 12;
	    int chance(int dice[5], int scorecard[13], int points[13]);
        }
        if (scorecard[space] != 51){
            printf("You have already selected that space! Pick another.");
            space = 100;
        }

        if (scorecard[space] == 51){
            turnend = 1;
        }
    }

    return (space, dice);
}



//Now here are the functions for Score Keeping
//
////First we will start off with Calculating the Upstairs.

//Calculating the Ones
int ones(int dice[5], int scorecard[13], int points[13])
{

    int d = 0;
    int sum = 0;
    int value = 0;

    if(scorecard[0] == 0)
        {

            scorecard[0] = 1;
            value = 1;

            for(d = 0; d < 5; d++)
                {

                    if(dice[d] == 1)
                        {

                            sum = sum + 1;

                        }

                }

            points[0] = sum;

        }

    return value;

}

//Calculating the Twos
int twos(int dice[5], int scorecard[13], int points[13])
{

    int d = 0;
    int sum = 0;
    int value = 0;

    if(scorecard[1] == 0)
        {

            scorecard[1] = 1;
            value = 1;

            for(d = 0; d < 5; d++)
                {

                    if(dice[d] == 2)
                        {

                            sum = sum + 1;

                        }

                }

            points[1] = sum*2;

        }

    return value;

}
//Calculating the Threes
int threes(int dice[5], int scorecard[13], int points[13])
{

    int d = 0;
    int sum = 0;
    int value = 0;

    if(scorecard[2] == 0)
        {

            scorecard[2] = 1;
            value = 1;

            for(d = 0; d < 5; d++)
                {

                    if(dice[d] == 3)
                        {

                            sum = sum + 1;

                        }

                }

            points[2] = sum*3;

        }

    return value;

}

//Calculating the Fours
int fours(int dice[5], int scorecard[13], int points[13])
{

    int d = 0;
    int sum = 0;
    int value = 0;

    if(scorecard[3] == 0)
        {

            scorecard[3] = 1;
            value = 1;

            for(d = 0; d < 5; d++)
                {

                    if(dice[d] == 4)
                        {

                            sum = sum + 1;

                        }

                }

            points[3] = sum*4;

        }

    return value;

}

//Calculating the Fives
int fives(int dice[5], int scorecard[13], int points[13])
{

    int d = 0;
    int sum = 0;
    int value = 0;

    if(scorecard[4] == 0)
        {

            scorecard[4] = 1;
            value = 1;

            for(d = 0; d < 5; d++)
                {

                    if(dice[d] == 5)
                        {

                            sum = sum + 1;

                        }

                }

            points[4] = sum*5;

        }

    return value;

}

//Calculating the Sixes
int sixes(int dice[5], int scorecard[13], int points[13])
{

    int d = 0;
    int sum = 0;
    int value = 0;

    if(scorecard[5] == 0)
        {

            scorecard[5] = 1;
            value = 1;

            for(d = 0; d < 5; d++)
                {

                    if(dice[d] == 6)
                        {

                            sum = sum + 1;

                        }

                }

            points[5] = sum*6;

        }

    return value;

}


//Now we are going to calculate the downstairs (Bottom of the card)
//Calculating Three of A Kind
int 3_of_a_kind(int dice[5], int scorecard[13], int points[13])
{

int number = 0, result = 0, sum = 0;
if (scorecard[6] == 0)
{
        result = 1;
        scorecard[6] = 1; // Sets combo to used
        for (number = 1; number<7; number++)
        {
                sum = 0;
                if (dice[0] == number)
                {sum = sum +1;}
                if (dice[1] == number)
                {sum = sum +1;}
                if (dice[2] == number)
                {sum = sum +1;}
                if (dice[3] == number)
                {sum = sum +1;}
                if (dice[4] == number)
                {sum = sum +1;}
                if (sum>= 3)
                {
                        points[6] = dice [0] + dice[1] + dice[2] + dice[3] + dice[4];
                        break;
                }
        }

}

return result;

}

//Now we are going to Calculate a Four of a Kind
int 4_of_a_kind(int dice[5], int scorecard[13], int points[13])
{

int number = 0, result = 0, sum = 0;
if (scorecard[7] == 0)
{
        scorecard[7] = 1; // Sets combo to used
        for (number = 1; number>5; number++)
        {
                sum = 0;
                if (dice[0] == number)
                {sum = sum +1;}
                if (dice[1] == number)
                {sum = sum +1;}
                if (dice[2] == number)
                {sum = sum +1;}
                if (dice[3] == number)
                {sum = sum +1;}
                if (dice[4] == number)
                {sum = sum +1;}
                if (sum>= 4)
                {
                        points[7] = dice [0] + dice[1] + dice[2] + dice[3] + dice[4];
                        break;
                }
        }
        result = 1;
}

return result;

}

//Now Calculating A Full House
int full_house(int dice[5], int scorecard[13], int points[13])
{
    int number = 0;
    int number2 = 0;
    int result = 0;
    int sum1 = 0;
    int sum2 = 0;
    int three = 0;
    int two = 0;

    if(scorecard[8] == 0)
        {
            scorecard[8] = 1;

            result = 1;

            for(number = 1; number < 7; number++)
                {
                    sum1 = 0;

                    if(dice[0] == number)
                        {
                            sum1 = sum1 + 1;
                        }

                    if(dice[1] == number)
                        {
                            sum1 = sum1 + 1;
                        }

                    if(dice[2] == number)
                        {
                            sum1 = sum1 + 1;
                        }
			if(dice[3] == number)
                        {
                            sum1 = sum1 + 1;
 			}
		{		
                    sum1 = 0;

                    if(dice[0] == number)
                        {
                            sum1 = sum1 + 1;
                        }

                    if(dice[1] == number)
                        {
                            sum1 = sum1 + 1;
                        }

                    if(dice[2] == number)
                        {
                            sum1 = sum1 + 1;
                        }

                    if(dice[3] == number)
                        {
                            sum1 = sum1 + 1;
                        }

                    if(dice[4] == number)
                        {
                            sum1 = sum1 + 1;
                        }

                    if(sum1 == 3)
                        {
                            break;
                        }

                }

            for(number2 = 1; number2 < 7; number2++)
                {
                    sum2 = 0;

                    if(dice[0] == number2)
                        {
                            sum2 = sum2 + 1;
                        }
		    if(dice[1]==number2)
			{
 		       	    sum2 = sum2 + 1;
                        }

                    if(dice[2] == number2)
                        {
                            sum2 = sum2 + 1;
                        }

                    if(dice[3] == number2)
                        {
                            sum2 = sum2 + 1;
                        }

                    if(dice[4] == number2)
                        {
                            sum2 = sum2 + 1;
                        }

                    if(number2 == number)
                        {
                            sum2 = 0;
                        }

                    if(sum2 == 2)
                        {
                            if(sum2 + sum1 == 5)
                                {
                                    points[8] = 25;
                                    break;
                                }
                        }
                }
        }

    return result;

}

//Calculating Small Straight
int small_straight(int dice[5], int scorecard[13], int points[13])
{
    int d = 0;
    int temp = 0;
    int passes = 0;
    int sum = 0;
    int result = 0;

    if(scorecard[9] == 0)
        {
            result = 1;

            scorecard[9] = 1;

            for(passes = 1; passes < 5; passes++)
                {
                    for(d = 0; d < 5 - passes; d++)
                        {
                            if(dice[d] > dice[d + 1])
                                {
                                    temp = dice[d];
                                    dice[d] = dice[d + 1];
                                    dice[d + 1] = temp;
                                }
                        }
                }

            for(d = 4; d > 0; d--)
                {
                    if(dice[d] == dice[d - 1] + 1)
                        {
                            sum++;
                        }
                }

            if(sum >= 3)
                {
                    points[9] = 30;
                }
        }

    return result;
}

//Calculating Large Straight
int large_straight(int dice[5], int scorecard[13], int points[13])
{
//Int d is the index of the dice that was rolled, 
    int d = 0;
    int temp = 0;
    int passes = 0;
    int sum = 0;
    int result = 0;

    if(scorecard[10] == 0)
        {
            result = 1;

            scorecard[10] = 1;

            for(passes = 1; passes < 5; passes++)
                {
                    for(d = 0; d < 5 - passes; d++)
                        {
                            if(dice[d] > dice[d + 1])
                                {
                                    temp = dice[d];
                                    dice[d] = dice[d + 1];
                                    dice[d + 1] = temp;
                                }
                        }
                }

            for(d = 4; d > 0; d--)
                {
                    if(dice[d] == dice[d - 1] + 1)
                        {
                            sum++;
                        }
                }

            if(sum >= 4)
                {
                    points[10] = 40;
                }
        }

    return result;

}

//Calculating a Yahtzee!!

int yahtzee(int dice[5], int scorecard[13], int points[13])
{
    int number = 0;
    int result = 0;
    int sum = 0;

    if([11] == 0)
//If this was picked, then it will be marked and will only be added if all of the numbers would be the same. 
       {
            scorecard[11] = 1;

            for(number = 0; number < 5; number++)
                {
                    sum = 0;

                    if(dice[0] == number)
                        {
                            sum = sum + 1;
                        }

                    if(dice[1] == number)
                        {
                            sum = sum + 1;
                        }

                    if(dice[2] == number)
                        {
                            sum = sum + 1;
                        }

                    if(dice[3] == number)
                        {
                            sum = sum + 1;
                        }

                    if(dice[4] == number)
                        {
                            sum = sum + 1;
                        }

                    if(sum == 5)
                        {
                            points[11] = 50;
                        }

                }

            result = 1;
        }

    return result;
}

//Calculating Chance Score
int chance(int dice[5], int scorecard[13], int points[13])
{
    int result = 0;
    int sum = 0;

//If this part of the scoreboard hasn't been selected yet, scoreboard will be marked and it will add the dice of all of dice numbers.
    if(scorecard[12] == 0)
        {

            scorecard[12] = 1;
            result = 1;

            sum = dice[0] + dice[1] + dice[2] + dice[3] + dice[4];

            points[12] = sum;

        }

        return result;
}

//Calculating Final Score

finalscore(int scorecard1[], int scorecard2[]){

    // initialize score totals
    int total1 = 0;
    int total2 = 0;

    // player 1 scorecard
    // add first 6
    // bonus points if requirement is met
    // add the rest
    for (int i = 0; i < 6; i++) {
        total1 = total1 + scorecard1[i];
    }
    if (total1 >= 63) {
        total1 = total1 + 35;
    }
    for (int i = 6; i < 13; i++) {
        total1 = total1 + scorecard1[i];
    }

    // repeat for player 2
    for (int i = 0; i < 6; i++) {
        total2 = total2 + scorecard2[i];
    }
    if (total2 >= 63) {
        total2 = total1 + 35;
    }
    for (int i = 6; i < 13; i++) {
        total2 = total2 + scorecard1[i];
    }

    // report results winner/tie
    printf("GAME OVER! \n");

	//Player 1 wins
    if (total1 > total2){
        printf("First Place: Player 1 with a score of %d \n", total1);
        printf("Second Place: Player 2 with a score of %d \n", total2);
    }

	//Player 2 Wins
    if (total2 > total1){
        printf("First Place: Player 2 with a score of %d \n", total2);
        printf("Second Place: Player 1 with a score of %d \n", total1);
    }

	//Player 1 and Player 2 Ties
    if (total2 = total1){
        printf("It's a TIE! Both players scored %d \n", total2);
    }

    return 0;
}
