/* 
AerE 361 Final Project
Yahtzee Twos Function
Josh Christensen
*/

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
