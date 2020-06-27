// https://practice.geeksforgeeks.org/problems/stack-from-array/1/?track=DSA-Foundation-Final-Stack&batchId=193

//Function to push data at the top of stack
void push(int data)
{
    if(top == stackMax -1)
    {
        cout << "Stack Full"<<endl;
        return; 
    }
    top++;
    stack[top] = data;
}
//Function to pop the topmost data
void pop()
{
    if(top == -1)
    {
        cout << "Stack Empty"<<endl;
        return;
    }
    //cout << stack[top] <<endl;
    top--;
}
//Function to display the stack from index 0 
void display()
{
    if(top == -1)
    {
        cout << "-1" <<endl;
        return; 
    }
    for(int i = 0; i <=top ; i++)
        cout << stack[i] << " ";
    cout <<endl;
}