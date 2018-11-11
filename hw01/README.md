# Homework 1
This is the first graded homework for the course.

Read carefully the problem descriptions and consult the example files for input and output format. Follow the format strictly, as the solutions are checked automatically. 

You could also use the provided .sh scripts to test each one of your programs against the sample input/output pair. For example:

Failing test of problem 2 due to empty (different) output of the solution:
```
$ ./test2.sh
  *** COMPILE ***
  ***   RUN   ***
  *** COMPARE ***
0a1,4
> 3 + 4 - 5 = 2
> 3 - (4 - 5) = 4
> 3 / 4 + 5 = 5.75
> 3 . 4 . 5 - (3 . 4 + 4 . 5 + 5 . 3) = 13
  *** RESULT  ***
  ***************
     * FAIL *
```

Passing test of problem 1:
Failing test of problem 2 due to empty (different) output of the solution:
```
$ ./test1.sh
  *** COMPILE ***
  ***   RUN   ***
  *** COMPARE ***
  *** RESULT  ***
  ***************
    *  PASS   *
```

## Problem 1
Read first and last name from the standard in (the console) and print the name in a phonebook format "<Family>, <Name>".

## Problem 2
Read 3 floating-point numbers from the standard in (the console), calculate and print all the computations listed bellow. Use the following format:
* x + y - z = r
* x - (y - z) = r
* x / y + z = r
* x . y . z - (x . y + y . z + z . x) = r

# Problem 3
By using only conditional statements (if-else-else-if) read 3 integer numbers from the standard in (the console) and print the largest one.
