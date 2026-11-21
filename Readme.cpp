
Plan
Inputs 
winningDigits- A 5-element integer array filled automatically with random numbers from 0 through 9.

Player: A 5-element integer array filled with five digits, 0 through 9 entered by the user.

Variables & Constants

SIZE = 5 and MAX_DIGIT = 10 

winningDigits[SIZE] and player[SIZE] 

matches = 0 

i 

Calculations & Comparisons:

Use a for loop to prompt for and read the user's five digits into player[i].

Use a for loop to compare corresponding indices (winningDigits[i] == player[i]). Each time the digits at the same index match, increment matches by 1.

Checks
Only identical numbers are compared, ensuring matching digits in different positions are ignored.

Expected Output
Display all five numbers in “winningDigits” , all five numbers in player, and the final total stored in matches, each with clear labels.



READ.ME



Test Case
Winning Digits (winningDigits)
Player Digits (player)
Expected Result
Actual Output
Match?
 
1. 
[5, 6, 9, 6, 1]
[4, 2, 9, 7, 3]
1 match
1 match
Yes
2. 
[8, 1, 8, 2, 3]
[7, 4, 9, 1, 3]
1 Match 
1 match
Yes
3. 
[4, 1, 6, 4, 1]
[0, 0, 0, 0, 0]
0 matches
0 Matches
Yes
4. 
[1, 1, 2, 2, 3]
[1, 2, 2, 3, 3]
3 matches 
3 Matches
Yes
5. 
[5, 8, 5, 8, 5]
[5, 0, 0, 0, 5]
2 matches 
2 Matches
Yes
6. 
[3, 6, 9, 7, 8]
[3, 1, 2, 4, 5]
1 Match
1 Match
Yes



How does the random expression keep every digit between 0 and 9?
The expression rand() % 10 divides the non negative number and takes the remainder and any number that's divided by 10 can only leave a remainder 0-9
Why does a matching digit in another position not count?
The comparison loop uses a single index variable i to check if the winning digits match the player digits 
Trace the count through the example arrays.
Matches start at 0 
I = 0: 7 does not = 4 
I = 1: 4 does not = 2
I = 2: 9 = 9 
I = 3: 1 does not equal 7 
I = 4: 3= 3 
i=5 end 2 matches 
Why do array loops stop before SIZE, and what did your fixed tests establish?
Because the loops stop while i < size and it prevents the code from reading or writing out of bounds memory after 5 
