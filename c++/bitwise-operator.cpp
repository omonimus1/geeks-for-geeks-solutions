// https://practice.geeksforgeeks.org/problems/bitwise-operators/1/?track=module-1-basics-and-control-structures&batchId=113
/*
Example:
Input:
1
4 8 2

Output:
0
10
0
2
-11
*/
void bitWiseOperation(int a, int b, int c){
    int d = a ^ a;
    int e = c ^ b;
    int f = a & b; 
    int g = c | (a ^ a);
    int flip_e = ~e;
    cout << d <<endl;
    cout << e << endl;
    cout << f <<endl;
    cout << g << endl;
    cout << flip_e << endl;
}