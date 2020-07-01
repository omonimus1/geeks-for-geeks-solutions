//https://practice.geeksforgeeks.org/problems/find-first-set-bit-1587115620/1/?track=ppc-bit-magic&batchId=221
/*  function to find position of first set 
    bit in the given number
 * n: given input for which we want to get
      the position of first set bit
 */
unsigned int getFirstSetBit(int n){
    int counter =0;
    while(n> 0)
    {
        counter++;
        if(n%2 == 1)
            return counter;
        n/=2;
    }
    return 0;
}