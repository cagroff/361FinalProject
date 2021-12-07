//Aerospace 361
//Group MI6
//Yahtzee
//Josh C., Harrison H., Nathanael P., Caleb G., Tatyana V.




//Let's Play YAHTZEE!!!!

//This is the main menu Option
  int yahtzee_menu (void)
{
        int option = 0, play_game = 0;

        printf("Welcome to Yahtzee!\n\n");

        do
        {
                do
                {
                        printf("Select an option by inputting the number:\n1. See rules\n2. New Game\n3. Exit\n");
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
                case 2:
                        play_game = 1;
 		case 3:
                        play_game = 0;
                        break;
                	default:
                        printf("Please enter a valid input (1, 2, or 3).\n");
                }
        }
        while ((option != 2) && (option != 3));
        system("cls");

        return play_game;
}


//This is the two players starting scoreboard. Both players have a score of zero. 
int ScoreCard1[13] = {51};
int ScoreCard2[13] = {51};


//This part of the code will roll the dice for Player one.



//When the player is done rolling they will choose a score.





//Now it is Player 2's Turn to roll, after so they will pick a score.



//Now here are the functions for Score Keeping
//
////First we will start off with Calculating the Upstairs.

//Calculating the Ones
int ones(int die[5], int c_combo[13], int points[13])
{

    int index = 0;
    int sum = 0;
    int value = 0;

    if(c_combo[0] == 0)
        {

            c_combo[0] = 1;
            value = 1;

            for(index = 0; index < 5; index++)
                {

                    if(die[index] == 1)
                        {

                            sum = sum + 1;

                        }

                }

            points[0] = sum;

        }

    return value;

}

//Calculating the Twos
int twos(int die[5], int c_combo[13], int points[13])
{

    int index = 0;
    int sum = 0;
    int value = 0;

    if(c_combo[1] == 0)
        {

            c_combo[1] = 1;
            value = 1;

            for(index = 0; index < 5; index++)
                {

                    if(die[index] == 2)
                        {

                            sum = sum + 1;

                        }

                }

            points[1] = sum*2;

        }

    return value;

}
//Calculating the Threes
int threes(int die[5], int c_combo[13], int points[13])
{

    int index = 0;
    int sum = 0;
    int value = 0;

    if(c_combo[2] == 0)
        {

            c_combo[2] = 1;
            value = 1;

            for(index = 0; index < 5; index++)
                {

                    if(die[index] == 3)
                        {

                            sum = sum + 1;

                        }

                }

            points[2] = sum*3;

        }

    return value;

}

//Calculating the Fours
int fours(int die[5], int c_combo[13], int points[13])
{

    int index = 0;
    int sum = 0;
    int value = 0;

    if(c_combo[3] == 0)
        {

            c_combo[3] = 1;
            value = 1;

            for(index = 0; index < 5; index++)
                {

                    if(die[index] == 4)
                        {

                            sum = sum + 1;

                        }

                }

            points[3] = sum*4;

        }

    return value;

}

//Calculating the Fives
int fives(int die[5], int c_combo[13], int points[13])
{

    int index = 0;
    int sum = 0;
    int value = 0;

    if(c_combo[4] == 0)
        {

            c_combo[4] = 1;
            value = 1;

            for(index = 0; index < 5; index++)
                {

                    if(die[index] == 5)
                        {

                            sum = sum + 1;

                        }

                }

            points[4] = sum*5;

        }

    return value;

}

//Calculating the Sixes
int sixes(int die[5], int c_combo[13], int points[13])
{

    int index = 0;
    int sum = 0;
    int value = 0;

    if(c_combo[5] == 0)
        {

            c_combo[5] = 1;
            value = 1;

            for(index = 0; index < 5; index++)
                {

                    if(die[index] == 6)
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
int 3_of_a_kind()
{

int number = 0, result = 0, sum = 0;
if (c_combo[6] == 0)
{
        result = 1;
        c_combo[6] = 1; // Sets combo to used
        for (number = 1; number<7; number++)
        {
                sum = 0;
                if (die[0] == number)
                {sum = sum +1;}
                if (die[1] == number)
                {sum = sum +1;}
                if (die[2] == number)
                {sum = sum +1;}
                if (die[3] == number)
                {sum = sum +1;}
                if (die[4] == number)
                {sum = sum +1;}
                if (sum>= 3)
                {
                        points[6] = die [0] + die[1] + die[2] + die[3] + die[4];
                        break;
                }
        }

}

return result;

}

//Now we are going to Calculate a Four of a Kind
int 4_of_a_kind()
{

int number = 0, result = 0, sum = 0;
if (c_combo[7] == 0)
{
        c_combo[7] = 1; // Sets combo to used
        for (number = 1; number>5; number++)
        {
                sum = 0;
                if (die[0] == number)
                {sum = sum +1;}
                if (die[1] == number)
                {sum = sum +1;}
                if (die[2] == number)
                {sum = sum +1;}
                if (die[3] == number)
                {sum = sum +1;}
                if (die[4] == number)
                {sum = sum +1;}
                if (sum>= 4)
                {
                        points[7] = die [0] + die[1] + die[2] + die[3] + die[4];
                        break;
                }
        }
        result = 1;
}

return result;

}

//Now Calculating A Full House
int small_straight(int die[5], int c_combo[13], int points[13])
{
    int number = 0;
    int number2 = 0;
    int result = 0;
    int sum1 = 0;
    int sum2 = 0;
    int three = 0;
    int two = 0;

    if(c_combo[8] == 0)
        {
            c_combo[8] = 1;

            result = 1;

            for(number = 1; number < 7; number++)
                {
                    sum1 = 0;

                    if(die[0] == number)
                        {
                            sum1 = sum1 + 1;
                        }

                    if(die[1] == number)
                        {
                            sum1 = sum1 + 1;
                        }

                    if(die[2] == number)
                        {
                            sum1 = sum1 + 1;
                        }
			if(die[3] == number)
                        {
                            sum1 = sum1 + 1;
 			}
		{		
                    sum1 = 0;

                    if(die[0] == number)
                        {
                            sum1 = sum1 + 1;
                        }

                    if(die[1] == number)
                        {
                            sum1 = sum1 + 1;
                        }

                    if(die[2] == number)
                        {
                            sum1 = sum1 + 1;
                        }

                    if(die[3] == number)
                        {
                            sum1 = sum1 + 1;
                        }

                    if(die[4] == number)
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

                    if(die[0] == number2)
                        {
                            sum2 = sum2 + 1;
                        }
		    if(die[1]==number2)
			{
 		       	    sum2 = sum2 + 1;
                        }

                    if(die[2] == number2)
                        {
                            sum2 = sum2 + 1;
                        }

                    if(die[3] == number2)
                        {
                            sum2 = sum2 + 1;
                        }

                    if(die[4] == number2)
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
int small_straight(int die[5], int c_combo[13], int points[13])
{
    int index = 0;
    int temp = 0;
    int passes = 0;
    int sum = 0;
    int result = 0;

    if(c_combo[9] == 0)
        {
            result = 1;

            c_combo[9] = 1;

            for(passes = 1; passes < 5; passes++)
                {
                    for(index = 0; index < 5 - passes; index++)
                        {
                            if(die[index] > die[index + 1])
                                {
                                    temp = die[index];
                                    die[index] = die[index + 1];
                                    die[index + 1] = temp;
                                }
                        }
                }

            for(index = 4; index > 0; index--)
                {
                    if(die[index] == die[index - 1] + 1)
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
int small_straight(int die[5], int c_combo[13], int points[13])
{
    int index = 0;
    int temp = 0;
    int passes = 0;
    int sum = 0;
    int result = 0;

    if(c_combo[10] == 0)
        {
            result = 1;

            c_combo[10] = 1;

            for(passes = 1; passes < 5; passes++)
                {
                    for(index = 0; index < 5 - passes; index++)
                        {
                            if(die[index] > die[index + 1])
                                {
                                    temp = die[index];
                                    die[index] = die[index + 1];
                                    die[index + 1] = temp;
                                }
                        }
                }

            for(index = 4; index > 0; index--)
                {
                    if(die[index] == die[index - 1] + 1)
                        {
                            sum++;
                        }
                }

            if(sum >= 4)
                {
                    points[10] = 30;
                }
        }

    return result;

}

//Calculating a Yahtzee!!

int yahtzee(int die[5], int c_combo[13], int points[13])
{
    int number = 0;
    int result = 0;
    int sum = 0;

    if(c_combo[11] == 0)
        {
            c_combo[11] = 1;

            for(number = 0; number < 5; number++)
                {
                    sum = 0;

                    if(die[0] == number)
                        {
                            sum = sum + 1;
                        }

                    if(die[1] == number)
                        {
                            sum = sum + 1;
                        }

                    if(die[2] == number)
                        {
                            sum = sum + 1;
                        }

                    if(die[3] == number)
                        {
                            sum = sum + 1;
                        }

                    if(die[4] == number)
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
int chance(int die[5], int c_combo[13], int points[13])
{
    int result = 0;
    int sum = 0;

    if(c_combo[12] == 0)
        {

            c_combo[12] = 1;
            result = 1;

            sum = die[0] + die[1] + die[2] + die[3] + die[4];

            points[12] = sum;

        }

        return result;
}

//Calculating Final Score

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
