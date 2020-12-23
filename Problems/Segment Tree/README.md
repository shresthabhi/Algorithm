**Exercise 2.4.3.1***: Draw the Segment Tree corresponding to array A = {10, 2, 47, 3, 7, 9, 1, 98, 21}. Answer RMQ(1, 7) and RMQ(3, 8)
**Exercise 2.4.3.2***: In this section, we have seen how Segment Trees can be used to answer Range Minimum Queries (RMQs). Segment Trees can also be used to answer dynamic Range Sum Queries (RSQ(i, j)), i.e. a sum from A[i] + A[i + 1] + ...+ A[j]. Modify the given Segment Tree code above to deal with RSQ.
**Exercise 2.4.3.3**: Using a similar Segment Tree to Exercise 2.4.3.1 above, answer the queries RSQ(1, 7) and RSQ(3, 8). Is this a good approach to solve the problem if array A is never changed? (also see Section 3.5.2).
**Exercise 2.4.3.4***: The Segment Tree code shown above lacks the (point) update operation as discussed in the body text. Add the O(logn) update function to update the value of a certain index (point) in array A and simultaneously update the corresponding Segment Tree!
**Exercise 2.4.3.5***: The (point) update operation shown in the body text only changes the
value of a certain index in array A. What if we delete existing elements of array A or insert a
new elements into array A? Can you explain what will happen with the given Segment Tree
code and what you should do to address it?
**Exercise 2.4.3.6***: There is also one more important Segment Tree operation that has not yet been discussed, the range update operation. Suppose a certain subarray of A is updated to a certain common value. Can we update the Segment Tree efficiently? 
**Study and solve**
UVa 11402 - Ahoy Pirates—a problem that requires range updates.