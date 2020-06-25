// https://practice.geeksforgeeks.org/problems/reverse-array-using-stack/1/?track=DSA-Foundation-Final-Stack&batchId=193
void reverseArray(int n, int* arr){
    stack<int>s;
    for(int i =0; i < n; i++)
        s.push(arr[i]);
        
    for(int i =0; i < n; i++)
    {
        arr[i] = s.top();
        s.pop();
    }
}