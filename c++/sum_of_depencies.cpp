// https://practice.geeksforgeeks.org/problems/sum-of-dependencies-in-a-graph/0
#include <bits/stdc++.h>
using namespace std;

// RetuRN s
int solutionn(vector<int> vec[],int n){
    int sum=0;
    
    for(int i=0;i<n;i++){
        int count=vec[i].size();
        sum+=count;
    }
    
   return sum;
}


int main() {
	int test_cases;
	cin>> test_cases;
	while(test_cases--){
	    int number_of_nodes , number_of_edges;
	    // Read Number of nodes/vertices and edges of the graph
	    cin>>number_of_nodes>>number_of_edges;
	    //Create our list of adj
	    vector<int>vec[number_of_nodes];
	    for(int i=0;i<number_of_edges;i++){
	        int from,to;
	        cin>>from>>to;
	        vec[from].push_back(to);
	       
	    }
	    cout<<solutionn(vec,number_of_nodes)<<endl;
	}
	return 0;
}