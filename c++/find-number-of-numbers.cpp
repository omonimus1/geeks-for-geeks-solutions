// https://practice.geeksforgeeks.org/problems/find-number-of-numbers/1
int get_number_of_digits_k_in_number(int &number, int &k)
{
    int counter = 0;
    while(number > 0)
    {
        if(number % 10 == k)
            counter++;
        number /= 10;
    }
    
    return counter;
}

int num(int a[], int n, int k)
{
     int result = 0;
     for(int i =0;  i < n; i++)
     {
         result += get_number_of_digits_k_in_number(a[i], k);
     }
     
     return result;
}