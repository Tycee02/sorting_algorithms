# 0x1B. C - Sorting algorithms & Big O

## Description

This repository contains C programs implementing various sorting algorithms and explores the concept of Big O notation. Sorting algorithms are fundamental in computer science, and understanding their efficiency is crucial for writing optimized code.

## Sorting Algorithms Implemented

1. **Bubble Sort**: Simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.

2. **Insertion Sort**: Builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.

3. **Selection Sort**: Divides the input list into two parts: a sorted sublist and an unsorted sublist. The algorithm repeatedly selects the smallest (or largest) element from the unsorted sublist and swaps it with the first element of the unsorted sublist.

4. **Quick Sort**: An efficient, in-place, divide-and-conquer sorting algorithm. Most implementations partition the array into two halves and then recursively sort the sub-arrays.

## Usage

Each sorting algorithm has its own C file (e.g., `0-bubble_sort.c`, `1-insertion_sort_list.c`). To compile and run a specific sorting algorithm, use the following commands:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 <C_FILE> -o <OUTPUT_BINARY>
./<OUTPUT_BINARY>
