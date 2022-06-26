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
    New C++ knowledge gained:
      1. stringstream ss;
         string s = copy(intVector.begin(), intVector.end(), ostream_iterator<int>(ss, ""));
         Converts an vector<int> to a string
      2. iota(intVector.begin(), intVector.end(), 1);
         Generates an inteeger vector from 1 to intVector.size()
