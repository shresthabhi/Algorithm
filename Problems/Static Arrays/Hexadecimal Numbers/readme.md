# Problem
You are given a range **[L,R]** . You are required to find the number of integers **X** in the range such that **GCD(X,F(X)) > 1** where **F(X)** is equal to the sum of digits of **X** in its hexadecimal (or base 16) representation.

For example, **F(27) = 1 + B = 1 + 11 = 12** (27 in hexadecimal is written as 1B). You are aksed  such **T** questions. 

## Input format

- The first line contains a positive integer **T** denoting the number of questions that you are asked.
- Each of the next **T** lines contain two integers **L** and **R** denoting the range of questions.

## Output Format

For each test case, you are required to print exactly T numbers as the output. 

## Constraints

**1 <= T <= 50**
**1 <= L, R <= 10^5**