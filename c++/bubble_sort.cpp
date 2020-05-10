int main()
{   
    int arr[] = {10, 20, 30, 40, 50}, i, j, isSwapped;
    int n = sizeof(arr) / sizeof(*arr);
    isSwapped = 1;
    for(i = 0; i < n - 1 && isSwapped; ++i)
    {
        isSwapped = 0;
        for(j = 0; j < n - i - 1; ++j)
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                isSwapped = 1;
            }
    }
    for(i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    return 0;
}