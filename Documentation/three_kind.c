//Aerospace 361 Final Project
//Group MI6
//Example
//Function Three of a kind



int 3_of_a_kind()
{

int number = 0, result = 0, sum = 0;
if (c_combo[6] == 0)
{
	result = 1;
	c_combo[6] = 1; // Sets combo to used
	for (number = 1; number<7; number++)
	{
		sum = 0;
		if (die[0] == number)
		{sum = sum +1;}
		if (die[1] == number)
		{sum = sum +1;}
		if (die[2] == number)
		{sum = sum +1;}
		if (die[3] == number)
		{sum = sum +1;}
		if (die[4] == number)
		{sum = sum +1;}	
		if (sum>= 3)
		{
			points[6] = die [0] + die[1] + die[2] + die[3] + die[4];
			break;
		}		
	}
		
}

return result;

}




