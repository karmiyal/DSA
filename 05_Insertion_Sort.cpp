class Solution
{
    public:
    void insert(int arr[], int i,int n)
    {   
       insertionSort(arr,n);
       for(int i=0;i<=n;i++)
       {
           arr[i];
       }
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        for(int i=0;i<=n-1;i++){
            int j=i;
            while(j>0&&arr[j-1]>arr[j])
            {
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                j--;
            }
        }
    }
};