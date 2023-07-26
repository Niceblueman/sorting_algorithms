### 0x1B. C - Sorting algorithms & Big O
>  `*C*` - `*Algorithm*` - `*Data structure*`

> _Project to be done in teams of 2 people (your team: KIMO Ouazmir, sakina Nouri)_

1.  Sort an array of integers using the Selection sort algorithm. Find the smallest element and exchange it with the first position. Continue until the array is
    sorted.
2.  Sort an array of integers using the Shell sort algorithm. Perform interleaved insertion sorts until the whole array is sorted.
3.  Sort an array of integers using the Gnome sort algorithm. Move elements larger than the current element, one position to the right, until the element
    is in the correct position.
4.  Sort an array of integers using the Bogo sort algorithm. Perform a random shuffle of the array, and check if the array is sorted. Repeat until the array is
    sorted.
5.  Sort an array of integers using the Quicksort algorithm. Partition the array into two parts using the first element of the array, and sort
    the first part, then the second part. Continue until the whole array is sorted.
6.  Sort an array of integers using the Merge sort algorithm. Partition the array into two parts, and sort the two parts separately. Merge the two parts
    together back into the original array.
7.  Sort an array of integers using the Heap sort algorithm. Perform a max-heapification algorithm to ensure the heap remains sorted. Then,
    perform a binary heap sort, and finally, restore the heap property.
8.  Sort an array of integers using the Cocktail sort algorithm. Perform a cocktail sort algorithm.
9.  Sort an array of integers using the Topological sort algorithm. Use a self-balancing binary heap to sort the vertices of the given directed
    acyclic graph.
10. Sort an array of integers using the Shell sort algorithm. Use a gap sequence of 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35,
    37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 93, 95, 97, 99..
11. Sort an array of integers using the Bucket sort algorithm. Use a bucket sort algorithm to sort the array.
12. Sort an array of integers using the Comb sort algorithm. Use a combination sort algorithm, utilizing the idea of sub-sequential
    insertion sort, to sort the array.
13. Sort an array of integers using the Counting sort algorithm. Use a counting sort algorithm to sort the array.
14. Sort an array of integers using the Cycle sort algorithm. Use a cycle sort algorithm to sort the array.

## Background Context
This project is meant to be done by groups of two students. Each group of two should pair program for at least the mandatory part.
To make the code clear, the task is split into two parts. The first part is a sorting algorithm called Quicksort, which is a sorting
algorithm that partitions an array of elements into two parts. The second part is a sorting algorithm called Merge Sort, which is a
partitioning algorithm that sorts an array of elements into two parts.

## General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project, is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into * account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called sort.h
* Don’t forget to push your header file
* All your header files should be include guarded
* A list/array does not need to be sorted if its size is less than 2.

Sure, here are the function descriptions in Markdown format with examples:

### `print_array`

Prints an array of integers.

**Prototype:**
```c
void print_array(const int *array, size_t size);
```

**Parameters:**
- `array`: Pointer to the array of integers to print.
- `size`: Size of the array.

**Example:**
```c
int arr[] = {3, 9, 1, 7, 5};
size_t size = sizeof(arr) / sizeof(arr[0]);
print_array(arr, size);
// Output: 3, 9, 1, 7, 5
```

### `print_list`

Prints a doubly linked list of integers.

**Prototype:**
```c
void print_list(const listint_t *list);
```

**Parameters:**
- `list`: Pointer to the head of the doubly linked list.

**Example:**
```c
listint_t *head = NULL;
add_nodeint(&head, 3);
add_nodeint(&head, 9);
add_nodeint(&head, 1);
add_nodeint(&head, 7);
add_nodeint(&head, 5);
print_list(head);
// Output: 3, 9, 1, 7, 5
```

### `bubble_sort`

Sorts an array of integers in ascending order using the Bubble sort algorithm.

**Prototype:**
```c
void bubble_sort(int *array, size_t size);
```

**Parameters:**
- `array`: Pointer to the array of integers to be sorted.
- `size`: Size of the array.

**Example:**
```c
int arr[] = {64, 34, 25, 12, 22, 11, 90};
size_t size = sizeof(arr) / sizeof(arr[0]);
bubble_sort(arr, size);
// Output: 11, 12, 22, 25, 34, 64, 90
```

### `insertion_sort_list`

Sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm.

**Prototype:**
```c
void insertion_sort_list(listint_t **list);
```

**Parameters:**
- `list`: Double pointer to the head of the doubly linked list.

**Example:**
```c
listint_t *head = NULL;
add_nodeint(&head, 64);
add_nodeint(&head, 34);
add_nodeint(&head, 25);
add_nodeint(&head, 12);
add_nodeint(&head, 22);
add_nodeint(&head, 11);
add_nodeint(&head, 90);
insertion_sort_list(&head);
print_list(head);
// Output: 11, 12, 22, 25, 34, 64, 90
```

### `selection_sort`

Sorts an array of integers in ascending order using the Selection sort algorithm.

**Prototype:**
```c
void selection_sort(int *array, size_t size);
```

**Parameters:**
- `array`: Pointer to the array of integers to be sorted.
- `size`: Size of the array.

**Example:**
```c
int arr[] = {64, 34, 25, 12, 22, 11, 90};
size_t size = sizeof(arr) / sizeof(arr[0]);
selection_sort(arr, size);
// Output: 11, 12, 22, 25, 34, 64, 90
```

### `quick_sort`

Sorts an array of integers in ascending order using the Quick sort algorithm.

**Prototype:**
```c
void quick_sort(int *array, size_t size);
```

**Parameters:**
- `array`: Pointer to the array of integers to be sorted.
- `size`: Size of the array.

**Example:**
```c
int arr[] = {64, 34, 25, 12, 22, 11, 90};
size_t size = sizeof(arr) / sizeof(arr[0]);
quick_sort(arr, size);
// Output: 11, 12, 22, 25, 34, 64, 90
```

### `shell_sort`

Sorts an array of integers in ascending order using the Shell sort algorithm.

**Prototype:**
```c
void shell_sort(int *array, size_t size);
```

**Parameters:**
- `array`: Pointer to the array of integers to be sorted.
- `size`: Size of the array.

**Example:**
```c
int arr[] = {64, 34, 25, 12, 22, 11, 90};
size_t size = sizeof(arr) / sizeof(arr[0]);
shell_sort(arr, size);
// Output: 11, 12, 22, 25, 34, 64, 90
```

### `cocktail_sort_list`

Sorts a doubly linked list of integers in ascending order using the Cocktail shaker sort algorithm.

**Prototype:**
```c
void cocktail_sort_list(listint_t **list);
```

**Parameters:**
- `list`: Double pointer to the head of the doubly linked list.

**Example:**
```c
listint_t *head = NULL;
add_nodeint(&head, 64);
add_nodeint(&head, 34);
add_nodeint(&head, 25);
add_nodeint(&head, 12);
add_nodeint(&head, 22);
add_nodeint(&head, 11);
add_nodeint(&head, 90);
cocktail_sort_list(&head);
print

_list(head);
// Output: 11, 12, 22, 25, 34, 64, 90
```

### `counting_sort`

Sorts an array of integers in ascending order using the Counting sort algorithm.

**Prototype:**
```c
void counting_sort(int *array, size_t size);
```

**Parameters:**
- `array`: Pointer to the array of integers to be sorted.
- `size`: Size of the array.

**Example:**
```c
int arr[] = {4, 2, 2, 8, 3, 3, 1};
size_t size = sizeof(arr) / sizeof(arr[0]);
counting_sort(arr, size);
// Output: 1, 2, 2, 3, 3, 4, 8
```

### `merge_sort`

Sorts an array of integers in ascending order using the Merge sort algorithm.

**Prototype:**
```c
void merge_sort(int *array, size_t size);
```

**Parameters:**
- `array`: Pointer to the array of integers to be sorted.
- `size`: Size of the array.

**Example:**
```c
int arr[] = {64, 34, 25, 12, 22, 11, 90};
size_t size = sizeof(arr) / sizeof(arr[0]);
merge_sort(arr, size);
// Output: 11, 12, 22, 25, 34, 64, 90
```

### `heap_sort`

Sorts an array of integers in ascending order using the Heap sort algorithm.

**Prototype:**
```c
void heap_sort(int *array, size_t size);
```

**Parameters:**
- `array`: Pointer to the array of integers to be sorted.
- `size`: Size of the array.

**Example:**
```c
int arr[] = {64, 34, 25, 12, 22, 11, 90};
size_t size = sizeof(arr) / sizeof(arr[0]);
heap_sort(arr, size);
// Output: 11, 12, 22, 25, 34, 64, 90
```

### `radix_sort`

Sorts an array of integers in ascending order using the Radix sort algorithm.

**Prototype:**
```c
void radix_sort(int *array, size_t size);
```

**Parameters:**
- `array`: Pointer to the array of integers to be sorted.
- `size`: Size of the array.

**Example:**
```c
int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
size_t size = sizeof(arr) / sizeof(arr[0]);
radix_sort(arr, size);
// Output: 2, 24, 45, 66, 75, 90, 170, 802
```

### `bitonic_sort`

Sorts an array of integers in ascending order using the Bitonic sort algorithm.

**Prototype:**
```c
void bitonic_sort(int *array, size_t size);
```

**Parameters:**
- `array`: Pointer to the array of integers to be sorted.
- `size`: Size of the array.

**Example:**
```c
int arr[] = {64, 34, 25, 12, 22, 11, 90};
size_t size = sizeof(arr) / sizeof(arr[0]);
bitonic_sort(arr, size);
// Output: 11, 12, 22, 25, 34, 64, 90
```

### `quick_sort_hoare`

Sorts an array of integers in ascending order using the Quick sort algorithm with Hoare's partition scheme.

**Prototype:**
```c
void quick_sort_hoare(int *array, size_t size);
```

**Parameters:**
- `array`: Pointer to the array of integers to be sorted.
- `size`: Size of the array.

**Example:**
```c
int arr[] = {64, 34, 25, 12, 22, 11, 90};
size_t size = sizeof(arr) / sizeof(arr[0]);
quick_sort_hoare(arr, size);
// Output: 11, 12, 22, 25, 34, 64, 90
```
