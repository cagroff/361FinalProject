/* 
AerE 361 Final Project
Yahtzee Yahtzee Function
Example
*/

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
