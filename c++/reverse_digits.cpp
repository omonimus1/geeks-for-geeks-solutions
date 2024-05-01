// https://practice.geeksforgeeks.org/problems/reverse-digit0316/1?page=1&difficulty[]=-2&status[]=unsolved&sortBy=submissions
long long int reverse_digit(long long int n)
{
    long long reverse = 0;
    while (n)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    return reverse;
}