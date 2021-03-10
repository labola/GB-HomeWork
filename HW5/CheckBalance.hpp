namespace HW
{
	bool CheckBalance(int* array, int n)
{
	int sumbegin, sumend;
	for(int i=0; i<n+1; i++)
	{	
		sumbegin = 0;
		sumend = 0;
		
		for(int j = 0; j < i; j++)
		{	
			sumbegin += array[j];
		}
		for(int j = i; j < n; j++)
		{	
			sumend += array[j];
		}

		if(sumbegin == sumend)
		{
			return true;
		}
	}
	return false;
}
}
