 
 ///COMPLEXITY:O(N^2)
 ///OPTIMIZED
 void bubbleSort(int arr[], int n)  
{  
 
      int i, j;  
         bool swapped=false; 
       for (i = 0; i < n-1; i++)      
      
       for (j = 0; j < n-i-1; j++)  
         if (arr[j] > arr[j+1])  
           {
           swapped=true;
           int tem=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
           }
       
       if(swapped==false)
       break;

}  
