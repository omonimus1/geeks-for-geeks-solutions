// https://practice.geeksforgeeks.org/problems/back-to-front/1
/*Function to print vector in reverse order
* using iterator
* it1 : v.rbegin(), reverse iterator
* it2 : v.rend(), reverse iterator
*/
void reverseIterator(vector<int>::reverse_iterator it1, vector<int>::reverse_iterator it2){
    vector<int>::reverse_iterator it;
    for (it = it1; it != it2; it++)
    cout << *it<<" ";
    cout<<endl;
}