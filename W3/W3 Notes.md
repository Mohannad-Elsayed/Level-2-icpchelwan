# Comparing function:
- sort a container on a specific criteria
- pass the function as a third parameter to the sort function ```sort(v.begin(), v.end(), CompareFunction)```
- compare function similar to bubble sort, return true to swap 2 elements, false if not swap
- use anonymous function instead of writitng a seperate function to sort ```[= &](parameters) -> return type{function logic}```
# Binary search:
- target = 3
- lower_bound() :
  - to find the first occurrence of a value or bigger in a sorted array
  - `1 1 2 2 3 4 5 5 5 6 6 6`
  - `f f f f t t t t t t t t`
  - ```if (mid >= target)```
  - preserve the answer and search for a better one
- upper_bound() :
  - to find the first occurrence of a value that is bigger than the target in a sorted array
  - `1 1 2 2 3 4 5 5 5 6 6 6`
  - `f f f f t t t t t t t t`
  - ```if (mid >= target)```
  - preserve the answer and search for a better one
- [Cow Problem](https://codeforces.com/group/c3FDl9EUi9/contest/264941/problem/B)

### Getting the sqrt of a number using binary search:
- start = 0, end = number
- search for a number that satisfies this condition ```(mid * mid) - n <= acc``` where ```acc``` is the accuracy desired. May be `1e-3` for instance.

# Two Pointers:
- searching for the sum of two numbers in a sorted array
- fixed sliding window in O(N)
- not fixed sliding window in O(N) 
[`solve`](https://codeforces.com/contest/701/problem/C)






# Tips and tricks:
- ```return void(cout << "anything" << endl);``` = to return void and print in the same statement
- ```return cout << "anything", 19;``` = return integer and print in the same statement