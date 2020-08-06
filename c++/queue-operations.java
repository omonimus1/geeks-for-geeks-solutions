// https://practice.geeksforgeeks.org/problems/queue-operations/1
class Geeks{
    // Function to insert element into the queue
    static void insert(Queue<Integer> q, int k){
        q.add(k);
        
    }
    
    // Function to find frequency of an element
    // rteturn the frequency of k
    static int findFrequency(Queue<Integer> q, int k){
        int freq = Collections.frequency(q,k);
        return freq;
        
    }
    
}