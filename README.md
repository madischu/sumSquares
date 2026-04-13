# sumSquares

## Program Description
This program implements a recursive function `sumSquares(int num)` that computes the sum of the squares of integers from 0 up to num. 

Mathematically:

sumSquares(n)=0<sup>2 + 1<sup>2 + 2<sup>2 + ⋯ + n<sup>2

The program tests the function using required inputs: `0`, `5`, and `9`.

## Inputs 
A nonnegative integer `num`.

## Outputs
The sum of squares from `0` to `num`.

Example Results
```
sumSquares(0) = 0
sumSquares(5) = 55
sumSquares(9) = 285
```

## Compile and Run Instructions
**Using g++**

*g++ main.cpp SumSquares.cpp -o sumSquares*

*./sumSquares*

## Detailed Psuedocode
```
Start Program

DEFINE function sumSquares(num)
    // Base case
    IF num == 0 THEN
        RETURN 0
    ENDIF

    // Recursive case
    RETURN (num * num) + sumSquares(num - 1)
END FUNCTION


MAIN PROGRAM

DECLARE array testValues = [0, 5, 9]

FOR each value in testValues DO
    CALL sumSquares(value) → result
    DISPLAY "sumSquares(" + value + ") = " + result
END FOR

End Program
```

## UML Class Diagram
<img width="446" height="171" alt="image" src="https://github.com/user-attachments/assets/fc48aee2-cb7f-4dab-aeb8-78acc6858947" />

## Use Case Diagram
<img width="642" height="830" alt="image" src="https://github.com/user-attachments/assets/e377647e-6b77-4eb0-a091-c473dc03f4d7" />

## Program Execution Evidence 
<img width="242" height="58" alt="image" src="https://github.com/user-attachments/assets/050cb4bd-9d6a-4afd-b0c2-9e1278aefb54" />
