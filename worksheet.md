
# Computer Science I 
## Lab 2.0 Worksheet

Name(s) and Login(s):
Shehzad, fk166494@gmail.com


1. Dennis Ritchie, the creator of the C programming language,
was born on September 9th, 1941.  If he were still alive,
how old would he be today?  Find out by running the `birthday`
program on the appropriate inputs and enter your solution here.
Today is 2023/10/22
Your birthday was 2016/09/09
Hello, dennis.  You are 7 years, 6 weeks, and 0 days old today



2. Bjarne Stroustrup, the creator of the C++ programming
language, the object-oriented extension of C, was born on
December 30th, 1950.  How old is he today?
Today is 2023/10/22
Your birthday was 2014/12/30
Hello, bjarne.  You are 8 years, 42 weeks, and 2 days old today



3. Software testing often involves testing code with known
"bad" input in an attempt to break it (sometimes this is
referred to as *fuzzing*).  Try breaking the `birthday_cli`
program by giving it "bad" input and observe the consequences.
Give at least two examples of potentially bad input and the
results you observe.




4. Complete all the size and range entries below.

* `char`
  size: 1 byte
  range: -128 to 127
* `short int`
  size:2 bytes
  range:-32768 to32768.
* `int`
  size:4 bytes
  range:-2147483648 to 2147483648
* `long int`
  size:4 bytes
  range:-2147483648 to 2147483648
* `float`
  size:4 bytes
  range: 7 digits of accuracy
* `double`
  size:8 bytes
  range: 15 digits of accuracy


5. Use your working currency conversion to determine
the exchange amounts for the following inputs:

  a) $250.25
The Exchange Tax=25.02
The great britian pound=88.96
The Japenese yen=14375

  b) $1,000.52
The Exchange Tax=0.10       
The great britian pound=0.36
The Japenese yen=57

  c) $968,410.12
The Exchange Tax=96.80
The great britian pound=344.12
The Japenese yen=55604


6. Suppose that you had used only `int` types
in your conversion program.  Would you be able
to use it to convert the US national debt
(which as of 2020 was \$26,009,754,625,487)?
Why or why not?
No, because int cant store such a large value.


7. Mixed types

a) Run the `area` program with 3 and 4 as inputs.  
What value do you get?  Is this result correct?
Please enter the base of a triangle: 3
Please enter the height of a triangle: 4
The area is 0.000000 square units.  
the result is incorrect.

b) Execute the program again with inputs 3 and 5.
Does the program give correct results?  Why not?
Please enter the base of a triangle: 3
Please enter the height of a triangle: 5
The area is 0.000000 square units.  
answer is incorrect.

c) Fix the program by editing the `area.c` source
code so that the program produces correct results.
By changing 1/2 to 0.5 this gives correct answer.