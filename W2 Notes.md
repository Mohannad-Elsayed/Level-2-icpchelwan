### pair: 
2 variables conncetive to each other 
first and second  
pair<strin, int> = {"moha", 3};
comparing pairs = first with first, if both first equal, compare seconds, if equal, doesn't matter

### set:
always ascending sortied, no duplicates
insert, remove, search  O(log n)
Binary search tree
-- vector and set

-set has no push or pop only insert and erase
-iterators: rend(), begin(), rbegin(), end()
      
### insertion: 
s.insert(1) // insert (1) to the set
s.insert(begin(), end())  // insert a range of the iterator 

### cin a set:


### erase: 
s.erase(1) // erase an element with its value
s.erase(it) // erase the value by it's iterator
s.erase(s.find(1)) // remove a value after searching fot it

- set<int, greater<int>>  for sorting the set greater

- find returns end() when not found
- count() returns nuber of occuring, 0 if not found

### multiset 
- same as set but allow duplicates
### map
- same as array but the index is anything not jsut a number
- same as dictionary in python
- has key and value
- same as set, sorted, no dublicates
- Maps support random access
- keys can't be changed or modified
- map.find()  //  to see if the key is in the map or not
- 
