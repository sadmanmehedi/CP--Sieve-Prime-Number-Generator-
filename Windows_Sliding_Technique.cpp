///We are given an array of size NN; we need to calculate the maximum sum of KK consecutive elements.
int maxSum(int arr[], int k, int n, int &start, int &end)
{
  if (k > n)
  {
    return -1;
  }
  int maximumSum = 0;
  int currentSum = 0;
  // Compute the initial sum of first K elements.
  for (int i=0;i<k;i++)
  {
    currentSum += arr[i];
  }
  maximumSum = currentSum;
  start = 0;
  end = k - 1;
  // Sliding the window and updating maximumSum
  for (int i=k;i<n;i++)
  {
    // Add the rightmost element to the window and
    // discard the leftmost element from the window
    currentSum += arr[i] - arr[i-k];
    if (currentSum > maximumSum)
    {
      maximumSum = currentSum;
      start = i - k + 1; // the window starts one ahead of the element that was removed from the left
      end = i; // the window goes upto the position of the newly added element from the right
    } 
  }
  return maximumSum;
}
