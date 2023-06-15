# Wrap - Up
## Containers
Sequence containers, Associated containers- [ordered and unordered]<br>
Sequence containers have storage of data elements, Associated containers have pair of <key,actual value><br>
Sequence - vector, stacks, queue, dicts, arrays, lists<br>
Associative  - ordered - underlying implementation Balanced Binary search tree, o(height) or o(log n)<br>
Associative - ordered set, map, multi set, multi map<br>
Associative - unordered - underlying implementation Hash Tables -unordered set, unordered map, unordered multi-set, unordered multi map

### Vector
** Functions ** 
+ ```size(), capacity(), max_size()```
+ ```[], at()``` at() has bound check while [] doesnt have bound checks
+ ```shrink_to_fit()```
+ ```empty()``` returns if the vector is empty or not
+ ```begin(), end(), rbegin(), rend()``` iterators
+ ```insert(), erase()```
+ ```push_back(), pop_back()```

## Iterators
1. Input Iterators
    - Only able to read (Can be dereferenced (*it or it->val)) and not modify/assign
    - Unidirectional (forward)
    - Can be only incremented; Eg.<br>```it++, ++it```
    - Only one pass possible
    - Suitable for input streams - Keyboard Buffer, read-only files etc. 
2. Output Iterators
    - Only able to write for example,<br> 
    ```*it = 10```
    - Can be only incremented 
    - Only one pass possible
    - Suitable for output streams
3. Forward Iterators
    - It has requirements of both input and output
    - Able to read and write
    - Moves only in one direction (Forward)
    - Support multiple passes of container
    - Suitable for traversing singely linked list
4. Bidirectional Iterators
    - All capabilities of Forward Iterators + Backward Traversal
5. Random Access Iterators
    - All capabilities of Bidirectional and random access by indexing



 