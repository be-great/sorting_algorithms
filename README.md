# sorting_algorithms

- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm


## 📂 Files : 
|File|Description|
|---|---|
|0-bubble_sort, 0-O| comparison-based Sorting algorithm is the simplest sorting algorithm|
|||
|||
|3-quick_sort, 3-O| comparison-based Sorting algorithm for sorting large datasets|
|||
|||
|||
|||
|||
19, 48, 99, 71, 13, 52, 96, 73, 86, 7
---------------------------------------
7, 48, 99, 71, 13 |, 52, 96, 73, 86, 19 <-  (7, 19) sorted
7, 13, 99, 71, 48 |, 52, 96, 73, 86, 19 <-  (48, 13) sorted
7, 13, 19, 71, 48 |, 52, 96, 73, 86, 99 <-  (99, 19) sorted
7, 13, 19, 71, 48 |, 52, 73, 96, 86, 99 <-  (96, 73) sorted
7, 13, 19, 71, 48 |, 52, 73, 86, 96, 99 <-  (86, 96) sorted
7, 13, 19, 48, 71 |, 52, 73, 86, 96, 99 <-  (48, 71) sorted
7, 13, 19, 48, 52 |, 71, 73, 86, 96, 99 <-  (52, 71) sorted 
---------------------------------------


----------------------------------------
7, 48, 99, 71, 13, 52, 96, 73, 86, 19 <-  (7, 19) sorted
7, 13, 19, 71, 48, 52, 96, 73, 86, 99 <-  (48, 13, 19, 99) sorted
7, 13, 19, 71, 48, 52, 96, 73, 86, 99---------------------
7, 13, 19, 71, 48, 52, 73, 86, 96, 99 <-  (73, 86, 96) sorted
7, 13, 19, 71, 48, 52, 73, 86, 96, 99 --------------------
7, 13, 19, 48, 52, 71, 73, 86, 96, 99 <-  (48, 52, 71) sorted
----------------------------------------
---------------------------------------
7, 13, 99, 71, 48, 52, 96, 73, 86, 19  <-  (19, 7) /
7, 13, 19, 71, 48, 52, 96, 73, 86, 99  <-  (99, 19) 
7, 13, 19, 71, 48, 52, 96, 73, 86, 99  <-  (99, 19)
7, 13, 19, 71, 48, 52, 96, 73, 86, 99  <-  (99, 19) 
7, 13, 19, 71, 48, 52, 96, 73, 86, 99  <-  (99, 19)
7, 13, 19, 71, 48, 52, 96, 73, 86, 99  <-  (99, 19)
7, 13, 19, 71, 48, 52, 96, 73, 86, 99  <-  (99, 19)
7, 13, 19, 71, 48, 52, 96, 73, 86, 99  <-  (99, 19)
7, 13, 19, 71, 48, 52, 96, 73, 86, 99  <-  (99, 19)
7, 13, 19, 71, 48, 52, 96, 73, 86, 99  <-  (99, 19)
7, 13, 19, 71, 48, 52, 73, 96, 86, 99  <-  (96, 73)
7, 13, 19, 71, 48, 52, 73, 86, 96, 99  <-  (86, 96)
7, 13, 19, 71, 48, 52, 73, 86, 96, 99  <-  (86, 96)
7, 13, 19, 71, 48, 52, 73, 86, 96, 99  <-  (86, 96)
7, 13, 19, 48, 71, 52, 73, 86, 96, 99  <-  (48, 71)
----------------------------------------