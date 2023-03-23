#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int swaps = 0;
    int *xp; 
	int *yp;
    for(int x = 0; x < n-1; x++)
    {
        for (int y = 0; y < n - x - 1; y++)
        {
            if(arr[y] > arr[y+1])
            {
				xp = &arr[y];
				yp = &arr[y+1];
                swap(xp,yp);
                swaps++;
            }
            
        }
		printf("Pass #%d: %d\n",x+1,swaps);
		swaps = 0;
    }
}


int main()
{
    int arr[9]= {97,16,45,63,13,22,7,58,72};
    bubbleSort(arr, 9);
    return 0;
}