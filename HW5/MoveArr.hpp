namespace HW
{
void MoveArr(int* array, int n, int len)
{	
	int TempArr[5];
	if(n<0) 
	{
			n *=-1;
			for(int i=0; i < (len-n); i++)
			{		
				TempArr[i]=array[i+n];					
			}
			for(int j=len-n, k=0; k < n; k++, j++)
			{
				TempArr[j]=array[k];
			}
			for(int i=0; i<len;i++)
			{
				array[i] = TempArr[i];
			}
			
	}else
	{				
			for(int i=0; i <= n; i++)
			{		
				TempArr[i+n]=array[i];			
			}
			for(int j=len-n, k=0; k < n; k++, j++)
			{
				TempArr[k]=array[j];
			}
			for(int i=0; i<len;i++)
			{
				array[i] = TempArr[i];
			}
	}
			
}
    
}
