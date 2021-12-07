/* 
AerE 361 Final Project
Yahtzee Sixes Function
Josh Christensen
*/

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
