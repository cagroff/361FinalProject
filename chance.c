/* 
AerE 361 Final Project
Yahtzee Chance Function
Josh Christensen
*/

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