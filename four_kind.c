//Aerospace 361 Final Project
//Group MI6
//Tatyana Vaughn


int 4_of_a_kind()
{

int number = 0, result = 0, sum = 0;
if (c_combo[7] == 0)
{
	c_combo[7] = 1; // Sets combo to used 
	for (number = 1; number>5; number++)
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
		if (sum>= 4)
		{
			points[7] = die [0] + die[1] + die[2] + die[3] + die[4];
			break;
		}
	}
	result = 1;
}

return result;

}






