## Array QUIZ

1) Which of the following is true about arrays in C.
Answer: For every type T except void and function type, there can be an array of T.

2) In a C file (say sourcefile1.c), an array is defined as follows. Here, we don’t need to mention arrary arr size explicitly in [] 
because the size would be determined by the number of elements used in the initialization.
 
```int arr[] = {1,2,3,4,5};```
In another C file (say sourcefile2.c), the same array is declared for usage as follows:
 
```extern int arr[];```
In sourcefile2.c, we can use sizeof() on arr to find out the actual size of arr.

Answer: FALSE

3)  In C, 1D array of int can be defined as follows and both are correct.
 ```
int array1D[4] = {1,2,3,4};
int array1D[] = {1,2,3,4};
```
But given the following definitions (along-with initialization) of 2D arrays
 ```
int array2D[2][4] = {1,2,3,4,5,6,7,8}; /* (i) */
int array2D[][4] = {1,2,3,4,5,6,7,8}; /* (ii) */
int array2D[2][] = {1,2,3,4,5,6,7,8}; /* (iii) */
int array2D[][] = {1,2,3,4,5,6,7,8}; /* (iv) */
```
Answer: Only (i) and (ii) are correct.
4)

5)Output of following Java program?
```
import java.util.Arrays;
class Test
{
    public static void main (String[] args) 
    {
        int arr1[] = {1, 2, 3};
        int arr2[] = {1, 2, 3};
        if (Arrays.equals(arr1, arr2))
            System.out.println("Same");
        else
            System.out.println("Not same");
    }
}
```
Answer: Same

## Math section

1)

2)

3) In how many ways 2 different natural numbers can be chosen using the numbers between 0 and 160 (both inclusive) so that 70 is their average?
Answer: 70.

So the average is given as, ( a + b )/ 2 = 70
a + b = 140
Since both cant be same so one number should be less than 70 and another greater than 70,
let 0 ≤ a ≤ 69 and 71 ≤ b ≤ 140
The total number of ways in which x can be chosen = 70C1 = 70 ways and the value of a depends
on the value of b and there will be only one value of b corresponding to a value of a.

4)

5)