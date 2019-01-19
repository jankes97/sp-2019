## CODEWARS

### Return Negative
In this simple assignment you are given a number and have to make it negative. But maybe the number is already negative?

Example:

```
makeNegative(1); // return -1
makeNegative(-5); // return -5
makeNegative(0); // return 0
```

Notes:

    The number can be negative already, in which case no change is required.
    Zero (0) is not checked for any specific sign. Negative zeros make no mathematical sense.

### Even or Odd
Create a function (or write a script in Shell) that takes an integer as an argument and returns "Even" for even numbers or "Odd" for odd numbers.

### The Feast of Many Beasts
All of the animals are having a feast! Each animal is bringing one dish. There is just one rule: the dish must start and end with the same letters as the animal's name. For example, the great blue heron is bringing garlic naan and the chickadee is bringing chocolate cake.

Write a function feast that takes the animal's name and dish as arguments and returns true or false to indicate whether the beast is allowed to bring the dish to the feast.

Assume that beast and dish are always lowercase strings, and that each has at least two letters. beast and dish may contain hyphens and spaces, but these will not appear at the beginning or end of the string. They will not contain numerals.

### Opposite number
Very simple, given a number, find its opposite.

Examples:

```
1: -1
14: -14
-34: 34
```

But can you do it in 1 line of code and without any conditionals?

### Digital cypher
Introduction

Digital Cypher assigns to each letter of the alphabet unique number. For example:

```
 a  b  c  d  e  f  g  h  i  j  k  l  m
 1  2  3  4  5  6  7  8  9 10 11 12 13
 n  o  p  q  r  s  t  u  v  w  x  y  z
14 15 16 17 18 19 20 21 22 23 24 25 26
```

Instead of letters in encrypted word we write the corresponding number, eg. The word scout:

```
 s  c  o  u  t
19  3 15 21 20
```

Then we add to each obtained digit consecutive digits from the key. For example. In case of key equal to 1939 :

```
   s  c  o  u  t
  19  3 15 21 20
 + 1  9  3  9  1
 ---------------
  20 12 18 30 21

   m  a  s  t  e  r  p  i  e  c  e
  13  1 19 20  5 18 16  9  5  3  5
+  1  9  3  9  1  9  3  9  1  9  3
  --------------------------------
  14 10 22 29  6 27 19 18  6  12 8
```

Task

Write a function that accepts str string and key number and returns an array of integers representing encoded str.
Input / Output

The str input string consists of lowercase characters only.
The key input number is a positive integer.
Example

Encode("scout",1939);  ==>  [ 20, 12, 18, 30, 21]
Encode("masterpiece",1939);  ==>  [ 14, 10, 22, 29, 6, 27, 19, 18, 6, 12, 8]

### Digital cypher vol 2
Introduction

Digital Cypher assigns to each letter of the alphabet unique number. For example:

```
 a  b  c  d  e  f  g  h  i  j  k  l  m
 1  2  3  4  5  6  7  8  9 10 11 12 13
 n  o  p  q  r  s  t  u  v  w  x  y  z
14 15 16 17 18 19 20 21 22 23 24 25 26
```

Instead of letters in encrypted word we write the corresponding number, eg. The word scout:

```
 s  c  o  u  t
19  3 15 21 20
```

Then we add to each obtained digit consecutive digits from the key. For example. In case of key equal to 1939 :

```
   s  c  o  u  t
  19  3 15 21 20
 + 1  9  3  9  1
 ---------------
  20 12 18 30 21

   m  a  s  t  e  r  p  i  e  c  e
  13  1 19 20  5 18 16  9  5  3  5
+  1  9  3  9  1  9  3  9  1  9  3
  --------------------------------
  14 10 22 29  6 27 19 18  6  12 8
```

Task

Write a function that accepts an array of integers code and a key number. As the result, it should return string containg a decoded message from the code.
Input / Output

The code is a array of positive integers.
The key input is a positive integer.
Example

```
decode([ 20, 12, 18, 30, 21],1939);  ==> "scout"
decode([ 14, 10, 22, 29, 6, 27, 19, 18, 6, 12, 8],1939);  ==>  "masterpiece"
```

### Function 1 - hello world
Description:

Make a simple function called greet that returns the most-famous "hello world!".
Style Points

Sure, this is about as easy as it gets. But how clever can you be to create the most creative hello world you can think of? What is a "hello world" solution you would want to show your friends?

### L1: Set Alarm
Write a function named setAlarm which receives two parameters. The first parameter, employed, is true whenever you are employed and the second parameter, vacation is true whenever you are on vacation.

The function should return true if you are employed and not on vacation (because these are the circumstances under which you need to set an alarm). It should return false otherwise. Examples:

```
setAlarm(true, true) -> false
setAlarm(false, true) -> false
setAlarm(true, false) -> true 
```

### Multiply
The code does not execute properly. Try to figure out why.
