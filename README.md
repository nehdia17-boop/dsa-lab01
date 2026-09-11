# DSA Lab 01 : Intro to Git and Simple Test Cases

**Name:** Nehdia Rizvi
**Reg. Number:** 540841

## What's in here

This folder has all 6 programs for the lab, plus this README.

- **task1.cpp** : I made an array of 5 numbers, changed the third one to 7, and printed the whole array using a loop.
- **task2.cpp** : I read 5 numbers from the user and added them up using two separate loops (one to read, one to sum).
- **task3.cpp** : I built a Student class with rollNumber and marks, made two student objects, and showed that changing one student's marks doesn't touch the other's, since they're separate objects.
- **task4.cpp** : I read 8 numbers and found the largest and smallest, along with the index where each first showed up.
- **task5.cpp** : I reversed an array of 6 numbers in place, using recursion instead of a loop.
- **task6.cpp** : I read 10 numbers and moved the first occurrence of every unique value to the front of the same array, without using a second array.

## Task 2 : tracing it by hand

For the first test case, I traced through the code manually to see how `total` builds up:

| i | numbers[i] | total |
|---|---|---|
| 0 | 1 | 1 |
| 1 | 2 | 3 |
| 2 | 3 | 6 |
| 3 | 4 | 10 |
| 4 | 5 | 15 |

And here's what I got for all three required test inputs:

| Test input     | Expected total | Actual total |
|-----------------|----------------|--------------|
| 1 2 3 4 5       | 15             | 15           |
| 0 0 0 0 0       | 0              | 0            |
| -2 4 -1 0 3     | 4              | 4            |

All three matched what I predicted, so the logic is correct.

## Git

I initialized a Git repo in this folder and made two commits: one for the array/class programs, and one adding this README with the test results.