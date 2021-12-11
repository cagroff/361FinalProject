/* 
AerE 361 Final Project
Yahtzee Fours Function
Example
*/

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
