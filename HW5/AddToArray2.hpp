namespace HW
{
	void AddToArray2(int* array, int n)
	{
		array[0]=1;
		for(int i = 1; i < n; i++)
		{
			array[i] = array[i-1] + 3;
		}
	}
}