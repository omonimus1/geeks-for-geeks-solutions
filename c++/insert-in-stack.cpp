// https://practice.geeksforgeeks.org/problems/insert-in-stack/1/?track=DSA-Foundation-Final-Stack&batchId=193
stack<int> insertIntoStack(int n, int arr[]){
     stack<int>s;
     for(int i =0; i < n; i++)
        s.push(arr[i]);
        
    return s; 
}