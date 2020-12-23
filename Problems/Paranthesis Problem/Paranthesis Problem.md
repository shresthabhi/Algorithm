### <a href =  "https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=614">673 - Parentheses Balance </a>

You are given a string consisting of parentheses()and[]. A string of this type is said to be _correct_ :

<ol>
<li> if it is the empty string
<li> if A and B are correct,AB is correct,
<li> if A is correct, (A) and [A] is correct.
</ol>

Write a program that takes a sequence of strings of this type and check their correctness. Your program can assume that the maximum string length is 128.

#### <span style="color:red"> **Input**</span>
The file contains a positive integernand a sequence ofnstrings of parentheses ‘()’ and ‘[]’, one string
a line.

#### <span style="color:red"> **Output**</span>
A sequence of ‘Yes’ or ‘No’ on the output file.

#### <span style="color:red"> **Sample Input**</span>
3<br>
([])<br/>
(([()])))<br/>
([()[]()])<br/>

#### <span style="color:red"> **Sample Input**</span>
Yes<br>
No<br>
Yes<br>

