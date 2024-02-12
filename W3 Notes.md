# Comparing function:
- sort a container on a specific criteria
- pass the function as a third parameter to the sort function ```sort(v.begin(), v.end(), CompareFuncion)```
- compare function similar to bubble sort, return true to swap 2 elements, false if not swap
- use anonymous function instead of writitng a seperate function to sort ```[= &](parameters) -> return type{function logic}```
# Binary search:
- target = 5
- lower_bound() :
  - to find the first occurance of a value or bigger in a sorted array
  - 1 1 2 2 3 4 5 5 5 6 6 6
  - f f f f t t t t t t t t
  - ```if (mid >= target)```
  - preserve the answer and search for a better one
- upper_bound() :
  - to find the first occurance of a value that is bigger than the target in a sorted array
  - 1 1 2 2 3 4 5 5 5 6 6 6
  - f f f f t t t t t t t t
  - ```if (mid >= target)```
  - preserve the answer and search for a better one







# Tips and tricks:
- ```cout << void(cout << "anything" << endl);``` = to return void and print in the same statement
- ```return cout << "anything", 19;``` = return intger and print in the same statement