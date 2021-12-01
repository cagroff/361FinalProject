/* 
AerE 361 Final Project
Yahtzee Full House Function
Josh Christensen
*/

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
                    
                    if(die[1] == number2)
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