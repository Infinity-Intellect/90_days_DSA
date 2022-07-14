# 90_days_DSA
This repository is to track my progress of learning DSA.

## Strategy

Adhere to this 90-day roadmap (https://whimsical.com/dsa-in-90-days-EmPkf5utoFGRMnRqJjM6YV) and ensure that all the problems in  Striver's SDE sheet (https://takeuforward.org/interviews/strivers-sde-sheet-top-coding-interview-problems/) are solved in parallel.

# Days 1 to 10 (Recursion)

## Day 1 (19/06/2022)

### Resources used in the learing phase
1. Recursion Playlist https://www.youtube.com/watch?v=AxNNVECce8c&list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9&index=7

### Problems Solved

1. Subsets - https://leetcode.com/problems/subsets/
2. Subset Sum - https://www.codingninjas.com/codestudio/problems/subset-sum_3843086?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website


## Day 2 (20/06/2022)

Explored the all subsets problem, with a slight variation i.e. the usage of a for loop in the recursive util method.
Reference: https://www.youtube.com/watch?v=kYY9DotIKlo&list=PLzffTJx5aHaSJ4XaG55cI3Z0VrNOyLWpH

### Problems Solved

1. Subsets - https://leetcode.com/problems/subsets/
2. Subsets 2 (unique subsets) - https://bit.ly/3qnaLjq
3. Combination sum 1 - https://leetcode.com/problems/combination-sum/
4. Combination sum 2 - https://leetcode.com/problems/combination-sum-ii/

## Day 3 (21/06/2022) 
(Cheat day)

1. Power of three - https://leetcode.com/problems/power-of-three
2. Power of four - https://leetcode.com/problems/power-of-four
3. Fibonacci - https://leetcode.com/problems/fibonacci-number

## Day 4 (23/06/2022)

1. Explored the Palindrome Partitioning problem, tried to devise a solution, but did not work. Will have to work work out the steps after having a look at the solution.
2. Watched the tutorial for k-th permutation - https://www.youtube.com/watch?v=wT7gcXLYoao&list=PLgUwDviBIf0p4ozDR_kJJkONnb1wdx2Ma&index=56

## Day 7 (26/06/2022)

1. Print all permutations of an array - https://leetcode.com/problems/permutations/
2. Palindrome Partitioning - https://leetcode.com/problems/palindrome-partitioning/
3. K-th Permutation (Brute Force) - https://leetcode.com/problems/permutation-sequence/
    ### New C++ knowledge gained:
      1. ```
         stringstream ss;
         copy(intVector.begin(), intVector.end(), ostream_iterator<int>(ss, ""));
         string s = ss.str();
         // Converts a vector<int> to a string
         ```
      2. ```
         iota(intVector.begin(), intVector.end(), 1);
         // Generates an integer vector from 1 to intVector.size()
         ```
4. K-th Permutation (Optimal) - https://leetcode.com/problems/permutation-sequence/
5. N-Queens - https://leetcode.com/problems/n-queens/
6. Sudoku Solver - https://leetcode.com/problems/sudoku-solver/

## Day 8 (02/07/2022)

1. M-Coloring - https://www.codingninjas.com/codestudio/problems/981273?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0
2. Rat in a Maze - https://www.codingninjas.com/codestudio/problems/758966?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

## Day 9 (03/07/2022)

1. Word break - https://bit.ly/3FxgW92

## Day 10 (04/07/2022)

1. Pow(x, n) - https://leetcode.com/problems/powx-n/
2. Different Ways to Add Parantheses - https://leetcode.com/problems/different-ways-to-add-parentheses/

# Days 11 to 30 (Basic DS i.e. Arrays, Linked List, Stacks and Queues)

## Day 11 (05/07/2022) [Array]

1. Decode String - https://leetcode.com/problems/decode-string/
2. Set matrix zeroes - https://leetcode.com/problems/set-matrix-zeroes/
3. Pascal's Triangle - https://leetcode.com/problems/pascals-triangle/
4. Stock Buy and Sell - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Day 12 (06/07/2022) [Array]

1. Maximum Subarray Sum (Kadane's Algorithm) - https://leetcode.com/problems/maximum-subarray/
2. Next Permutation - https://leetcode.com/problems/next-permutation/
3. Sort arrays of 0s, 1s and 2s (Solved using Naive and Dutch National Flag Algo approaches) - https://leetcode.com/problems/sort-colors/

## Day 13 (07/07/2022) [Array]

1. Rotate Image by 90 degree - https://leetcode.com/problems/rotate-image/
2. Merge Intervals - https://leetcode.com/problems/merge-intervals/
3. Merge sorted arrays - https://leetcode.com/problems/merge-sorted-array/
4. Find the duplicate number - https://leetcode.com/problems/find-the-duplicate-number/
5. Missing and repeating numbers - https://bit.ly/3Gs6wZu

## Day 14 (08/07/2022) [Array]

1. Count Inversions - https://bit.ly/339fFb7 (**Revisit the merge method**  [Line 27](https://github.com/Infinity-Intellect/90_days_DSA/blob/main/Day14/countInversion.cpp#L27))

## Day 15 (09/07/2022) [Array]

1. Search a 2D Matrix - https://leetcode.com/problems/search-a-2d-matrix/
2. Majority Element greater than n/2 - https://leetcode.com/problems/majority-element/
3. Two Sum - https://leetcode.com/problems/two-sum/

## Day 16 (10/07/2022) [Array]

1. Majority element greater than n/3 (extended Boyer Moore's voting algo) - https://leetcode.com/problems/majority-element-ii/
2. Unique Paths - https://leetcode.com/problems/unique-paths/

## Day 17 (11/07/2022) [Array]

1. Reverse Pairs - https://leetcode.com/problems/reverse-pairs/
2. Longest consecutive sequence - https://leetcode.com/problems/longest-consecutive-sequence/

## Day 18 (12/07/2022) [Array]

1. 4 sum - https://leetcode.com/problems/4sum/
   ### New C++ Knowledge Gained
   1. In case there is a need to have set of tuples,
   ```
   multiset<int> m;
   ```
   2. Convert multiset<int> to vector<int>
   ```
   multiset<int> m;
   vector<int> v(m.begin(), m.end());
   ```
2. Longest subarray sum of 0 - https://bit.ly/31UHoeM (prefix sum approach with map<int,int>)

## Day 19 (13/07/2022) [Array]

1. Count subarrays with given XOR - https://bit.ly/3fp24yN
2. Length of longest substring without repeating characters - https://leetcode.com/problems/longest-substring-without-repeating-characters/

## Day 20 (14/07/2022) [Linked List]

1. Reverse linked list (both iterative and recursive) - https://leetcode.com/problems/reverse-linked-list/
2. Middle of linked list - https://leetcode.com/problems/middle-of-the-linked-list/
3. Merge two sorted linked lists - https://leetcode.com/problems/merge-two-sorted-lists/
