# sorting_algorithms

- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

## Factors to Consider when choosing sorting algorithm:-

- **🏌️‍♂️ Ease of Implementation**: -

How easy it is to implement the algorithm.

- **🤹🏽‍♂️ Adaptability**:-

  -> Data size (small, medium, large)

  -> Data distribution (random order, already sorted, partially sorted)

  -> Data type (integer, string, etc.)

- **⌚ Time and 🗃️ Space Complexity**: -

Comparison sorts cannot perform better than O(n log n) on average, while non-comparison sorts are not limited to Ω(n log n).

- **🧑🏻‍🤝‍🧑🏾 Stability**:-

 Whether the algorithm maintains the relative order of equal elements. (It's for user expectation if we have a student have the same grade I want the order to be the same and not swap the student (first come first show))

- **☰ Degree of Parallelization**:-

 For efficient utilization of multiple processors or cores.

---------------

📁 Examples  |

---------------

| Implementation, Data Size Efficiency, Distribution Efficiency, Type, Time, Space, Stability, Parallelization |


|----------------------------------------------------------------------------------------------------------|


-> **Bubble Sort (Comparison-based):** 😊

 | Small | Random order | Integer | O(n^2) | O(1) | Stable | Not parallelizable |


-> **Insertion Sort (Comparison-based):** 😊 

| Small to medium | Random order | Integer | O(n^2) | O(1) | Stable | Limited parallelization potential |


-> **Selection Sort (Comparison-based):** 😕

 | Small | Random order | Integer | O(n^2) | O(1) | Unstable | Not parallelizable |


-> **Quick Sort (Comparison-based):** 😐

 | Moderate | Large | Various | O(n log n) | O(log n) | Generally unstable | Parallelizable |


-> **Shell Sort (Comparison-based):** 😐

 | Moderate | Medium | Various | Varies | O(1) | Generally unstable | Limited parallelization potential |


-> **Cocktail Shaker Sort (Comparison-based):** 😊 

| Small | Random order | Integer | O(n^2) | O(1) | Stable | Not parallelizable |


-> **Counting Sort (Non-comparison-based):** 😊 

| Small to medium | Various | Integer | O(n + k) | O(n + k) | Stable | Not parallelizable |


-> **Merge Sort (Comparison-based):** 😊

 | Moderate | Large | Various | O(n log n) | O(n) | Stable | Not parallelizable |


-> **Heap Sort (Comparison-based):** 😕 

| Moderate | Large | Various | O(n log n) | O(1) | Unstable | Not parallelizable |


-> **Radix Sort (Comparison-based):** 😊

 | Moderate | Large | Various | O(nk) | O(n + k) | Stable | Not parallelizable |


-> **Bitonic Sort (Comparison-based):** 😕 

| Complex | Large | Various | O(log^2 n) | O(n log n) | Generally unstable | Highly parallelizable |


-> **Quick Sort (Hoare Partition Scheme) (Comparison-based):** 😐

 | Moderate | Large | Various | O(n log n) | O(log n) | Generally unstable | Parallelizable |




## 📂 Files : 
|File|Description|
|---|---|
|0-bubble_sort, 0-O| comparison-based Sorting algorithm is the simples sorting algorithm for short lists and is stable|
|1-insertion_sort_list|comparison-based Sorting algorithm is the simple sorting algorithm for short lists and is stable|
|2-selection_sort||
|3-quick_sort, 3-O| comparison-based Sorting algorithm for sorting large datasets or linked lists not for short but it's not stable like mergesort|
|100-shell_sort, 4-O| comparison-based Sorting algorithm for sorting not big dataset or small dataset and it's not stable |
|101-cocktail_sort_list||
|102-counting_sort| non-comparison-based sorting algorithm suitable for sorting large datasets with a small range of integer keys and stable|
|103-merge_sort, 103-O| comparison-based Sorting algorithm for sorting large lists, linked lists, large datasets not for small ones and it's stable|
|104-heap_sort||
|105-radix_sort||
|106-bitonic_sort||
|107-quick_sort_hoare||
|1000-sort_deck||
