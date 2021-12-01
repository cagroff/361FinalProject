/* 
AerE 361 Final Project
Yahtzee Fives Function
Josh Christensen
*/

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