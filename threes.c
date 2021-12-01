/* 
AerE 361 Final Project
Yahtzee Threes Function
Josh Christensen
*/

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