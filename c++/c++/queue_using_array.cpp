// https://practice.geeksforgeeks.org/problems/implement-queue-using-array/1/?track=DSA-Foundation-Final-Queue&batchId=193
void MyQueue :: push(int x)
{
    // Insert at the end of the queue (last element of the array)
    arr[rear++] = x;
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
    // Get value from first element of the array
    // check if the queue is empty
    if(rear == front) return -1;
    int number = arr[front++];
    return number; 
}