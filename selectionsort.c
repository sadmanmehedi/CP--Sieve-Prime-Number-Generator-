Complexity=O(N^2)

void selectionSort(int arr[], int n)  
{  
    int i, j, min_idx;  
  
   
    for (i = 0; i < n-1; i++)  
    {  
        // Find the minimum element in unsorted array  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  
        
        if(min_idx!=i)
        {
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
        }
    
    }  

}  
