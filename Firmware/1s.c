/* 
AerE 361 Final Project
Yahtzee Ones Function Example
*/

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
