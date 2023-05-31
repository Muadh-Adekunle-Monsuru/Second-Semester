Beginners All-Purprose Symbolic Instruction Code

Identifiers are arbitrary names assigned to the BASIC language objects. such as constants, variables, functions and procedures. 
Identifier rules:
- May contain all letters of alphabets but upper and lowwer case
- Contains digits 0-9 
- Underscore character
- Cannot have the first letter as a digit
- It is not case sensitive
It is a single easy to use language designed for beginners, Developed by John Kemeny, Thomas Kurtz, in Darthmouth College. 

Versions of Basic:
- Visual 
- Quick
- Basic+
- Turbo
- GW

Keywords:
- If 
- Else
- LET: Used to assign a value to the variable 
- REM: it is a remark statement used to insert remarks in the programs, same as a comment.
- INPUT: used to assign or give value to variable while the program is running
- PRINT: tells the computer to display the output, of the executed program.
- END: Used to terminate the program
- RUn

Calculate and write out an amount to pay an employee, who received #50 per hour and #100 per hour if the hour is greater than #40 

```BASIC
PRINT "HOW MANY HOURS DO YOU WORK";
INPUT hours;
PRINT "You work " + hours + "per day";
```

```BASIC
INPUT F
IF F>40 GOTO 5
LET P = 50*F
GOTO 6
LET P = 100*F
PRINT P
END
```

```BASIC
Print "HOW MANY HOURS DO YOU WORK"
Input hours
If hours > 40 Then
    Print "You have worked above 40 hours"
Else
    Print "you have worked less than 40 hours"
End If
```



If you're a beginner looking to learn programming, BASIC is a great language to start with. It's a simple and easy-to-understand language that was designed for beginners. Here are some basic concepts and examples to get you started with programming in BASIC:

1. Variables:
   In BASIC, you can create variables to store values. You can assign a value to a variable using the "=" operator. For example:
   ```
   LET age = 25
   ```

2. Input and Output:
   You can use the PRINT statement to display output on the screen, and the INPUT statement to accept user input. For example:
   ```
   PRINT "Hello, what is your name?"
   INPUT name
   PRINT "Nice to meet you, " + name + "!"
   ```

3. Arithmetic Operations:
   BASIC supports basic arithmetic operations such as addition (+), subtraction (-), multiplication (*), and division (/). For example:
   ```
   LET x = 5
   LET y = 10
   LET result = x + y
   PRINT "The sum is: " + result
   ```

4. Conditional Statements:
   BASIC has IF-THEN and IF-THEN-ELSE statements for conditional branching. For example:
   ```
   INPUT age
   IF age >= 18 THEN
       PRINT "You are an adult."
   ELSE
       PRINT "You are a minor."
   END IF
   ```

5. Loops:
   BASIC provides FOR and WHILE loops for iteration. The FOR loop executes a block of code a specific number of times, and the WHILE loop executes a block of code while a condition is true. For example:
   ```
   FOR i = 1 TO 10
       PRINT i
   NEXT i
   ```

6. Arrays:
   BASIC allows you to work with arrays to store multiple values in a single variable. You can access array elements using an index. For example:
   ```
   DIM numbers(5)
   FOR i = 1 TO 5
       INPUT numbers(i)
   NEXT i
   FOR i = 1 TO 5
       PRINT numbers(i)
   NEXT i
   ```

These are just some of the basic concepts in BASIC programming. By practicing and experimenting with these concepts, you'll be able to build your programming skills and explore more advanced concepts in the future.

