# Interview Questions

### Guidelines 
 * Tasks should be answered in C++/C.
 * Task implementation should be full, compiled, linked and bugs free.
 * Implementation pushed to GIT should work.
 * Explanation comments should be used where needed.
 * Use anything the language can do.
 * Ask me anything alon@skysoftsl.com
 * Commit each task's implementation separately.
 * Use a seperate branch to push your work.
 * Use a pull request to let me know you're done.

### Task 1: 
```
Input: 
  val1 - Unsigned integer representing a decimal number.
Output:
  val2 - Unsigned integer.
Purpose:
  Every nibble of val2, will hold one digit of val1.
Example (not limited to):
  Val1 == 1234
  Val2 == 0001 0010 0011 0100
Restrictions:
  Do not use strings in your implementation.
```
  
### Task 2: 
```
Input: 
  val1 - Unsigned integer representing a hexa decimal number.
Output:
  val2 - Unsigned integer.
Purpose:
  Given a hexa decimal number (for example 0x1234), val2 should hold a "similar" decimal number (1234).
  val1 would NEVER hold a number with letters, 0xABCEF is NOT a valid input.
Example (not limited to):
  Val1 == 0x1234
  Val2 == 1234
Restrictions:
  Do not use strings in your implementation.
```

### Task 3: 
```
Input:
  The text file: "vehicle_data.txt" with three columns - time (in seconds), velocity (in meter/second) and expected distance of riding (in feet).
  For this task, presume: 1 meter = 3 feet
Output:
  A new text file with errors summary.
Purpose:
  Get the data from the input file, for each time and velocity - calculate the distance (time * velocity = distance) and
  compare between the calculated distances to the expected ones.
  Check if there are some differences by the comparison, if so, output it to the output file.
  
```
