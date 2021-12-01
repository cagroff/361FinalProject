/* 
AerE 361 Final Project
Yahtzee Small Straight Function
Josh Christensen
*/

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