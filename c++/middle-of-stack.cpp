// https://practice.geeksforgeeks.org/problems/middle-of-stack/1/?track=DSA-Foundation-Final-Stack&batchId=193
/*
    Sample Input:
    2
    5
    1 2 3 4 5
    4
    1 2 3 4
    Sample Output:
    3
    2
*/
int stackMiddle(int n, stack<int> st){
    int number_of_elements = st.size();
    int pos = (number_of_elements/2)+1;

    while(st.size() && pos > 1)
    {
        pos--;
        st.pop();
    }
    return st.top();
}