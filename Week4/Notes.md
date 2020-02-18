*Notes Week 4*

__abstraction__ = information that the machine/person can take for granted when executing instructions

__a flow chart__

  - __human readable__ -> source code -> compiler -> binary code -> __machine readable__

**compiling**

- Compiling source code into machine code is broken into a series of smaller steps

  those being:
    1. preprocessing
    2. compiling
    3. assembling
    4. linking

**Common C Libraries**
  - *stdio.h*
  - ctype.h
  - math.h - this one does math
  - stdbool.h - boolean searches
  - string.h

Some types of data types and conversions:
  - integer %d (whole number)
  - character %c (abcdefg...)
  - floating-point %f (decimal)
  - string (sequence of characters - NOT arrays) %s

  **a conversion character is a placeholder for what information is going to go in/out**

*Blocks (Compound statements)*

  - a block is a group of statements that is treated by the compiler as if it were a single statement
  - blocks begin with a "{" symbol, end with a "}" and the statements to be executed are placed between
  - blocks can be used any place where a single statement is allowed
  - no semicolon is needed at the end of a block

  simple: int i=10;
  compound:
  {
    int i;
    i=10;
  }
----------------------------------------------------------------
  - blocks can be nested inside each other, and can also be empty.
  - they are very important to recognize and understand them as they show up in a C program
  - indent blocks to make shit easy to read.
