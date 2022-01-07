# DailyCoding_HashClub

DailyCoding_HashClub

                                                                
                                                                
                                                                
                                                                ![image](https://user-images.githubusercontent.com/89680379/148495783-87cc4cd3-70c6-4499-8e35-f3b253e98600.png)


#About I2IT Hash Club
The Hash Club is a special interest group initiated under ACM Student Chapter I²IT lead by a group of enthusiastic and motivated coders with an aim to bring fun in learning DSA.🙌🏻

Hash Club I2IT Website: https://varshitha1707.github.io/the-hash-club/
Coding Platform - https://leetcode.com/
Day-1
Problem Link: https://leetcode.com/problems/minimum-index-sum-of-two-lists/
Solution:
Using a unordered_map to store the first list. 
1)So, as the unordered_map contains (string, int) as the 
parameters we can store the name as well as the index in the 
unordered_map.
2) Then, iterate over the another list and check if any value( name )
that is present in list 2 and if it is there check the sum of the index
is minimum or not and display the name with minimum sum of index. 
Day-2
Problem Link: https://leetcode.com/problems/find-the-town-judge/
Solution:
1. The town judge trusts nobody.
2. Everybody (except for the town judge) trusts the town judge.
3. There is exactly one person(Town Judge) that satisfies properties 1 and 2.
So, as a nested vector is given with its each inner vector of size 2.
We can simply iterate over the outer vector and using indexing check the trust of everybody in the town.
And hence return the town judge if present else -1
Day-3
Problem Link: https://leetcode.com/problems/unique-email-addresses/
Solution:
1. Local name and Domain name is seperated by '@'
2. If there is a period '.' in local name it would be ignored.
3. If there is a plus '+' in the local name the further local name should not be considered.

So, Create a function for the above validation. loop over the characters in the string till
the '@' or '+' is reached and store it in temporary string.
Ignore the '.' using if condition and at the end return 
the appended temporary string with @ and the remaning Original string (email).
I have used an unordered_set so that no duplicate values are stored.
Day-4
Problem Link: https://leetcode.com/problems/maximum-subarray/
Simply initiale the First element of the vector(array) to currSum, maxSum.
And then just iterate over array and return the sum of the subarray which gives maximum sum
using max function.
Day-5
Problem Link: https://leetcode.com/problems/shuffle-string/
1. Create a new string and initialize to the given string.
2. In this new string(duplicate) just try to reinitialize according t0 ordered indices.
For this iterate over the size of the given indices vector and use the below to reinitialize
the string characters 
        Resultant_string[indices[i]] = Original_String[i]
