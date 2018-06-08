# -10494---Midterm-Practice-Moving-Books-

https://acm.cs.nthu.edu.tw/problem/10494/

Description

The problem is to parse a series of commands to move the books that lie on the table. Initially there are n books lying on their own table (numbered from 0 to n-1, means book 0 lies on table 0) with book bi adjacent to book bi+1 for all 0 <= i < n-1

 as shown in the diagram below: 

Book 0
	

Book 1
	

Book 2
	

Book 3
	

Book 4
	

Book 5
	

……
	

Book N-1

Table 0
	

Table 1
	

Table 2
	

Table 3
	

Table 4
	

Table 5
	

Table N-1

 

The valid commands and limited for moving books are:

 Any command in which A = B or in which A and B are in the same stack of books is an illegal command. All illegal commands should be ignored and should have no affect on the configuration of books.

l   move A onto B

Return any books that are stacked on the top of book A and book B to their own table. Then puts book A onto book B.

l   move A over B

Return any books that are stacked on the top of book A to their own table.

Then puts book A onto the top of book B.

l   pile A onto B

Return any books that are stacked on the top of book B to their own table.

Then puts book A and all books on the top of book A onto the top of book B.

l   pile A over B

Put book A and all books on the top of book A onto the top of book B.

l   exit

Finish moving the books

Demo of Moving Books

Input

 The input begins with an integer n on a line by itself representing the number of books in the book world. You may assume that 0 < n < 25.

 The number of books is followed by a sequence of book commands, one command per line. Your program should process all commands until the exit command is encountered.

 You may assume that all commands will be of the form specified above. There will be no syntactically incorrect commands.
Output

 The output should consist of the final state of the books. Each table numbered i (0 <= i < n, where n is the number equal to books initial position) should appear followed immediately by a colon.

 If there is at least a book on it, the colon must be followed by one space, followed by a list of books that appear stacked in that position with each book number separated from other book numbers by a space. Don't put any trailing spaces on a line.

 There should be one line of output for each book position (i.e., n lines of output where n is the integer on the first line of input).  

 You are asked to add a new line character at the end.
