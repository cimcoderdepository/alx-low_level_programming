# 0x14. C - Bit manipulation

Bit manipulation refers to the act of manipulating individual bits of a binary number in a computer program. In the C programming language, this is typically done by using bitwise operators such as `&` (and), `|` (or), `^` (xor), `~` (not), `<<` (left shift), and `>>` (right shift).

For example, if `x` is a binary number, you can use the bitwise `&` operator to clear the least significant bit of `x` like this:

```
x &= ~(1 << 0);
```

This sets the least significant bit of `x` to 0 by using the bitwise `not` operator `~` to invert the bits of `1` and then shifting the result one bit to the left. The resulting value is then `and`ed with `x` to clear the least significant bit.

Bit manipulation is a powerful technique for performing efficient operations on binary data and is commonly used in low-level system programming, cryptography, and optimization.

# Quiz questions

## Question #0

```
0x01 | 0x00 = ?
```

 🏷️ 0x02

 🏷️ 0x00

 🏷️ 0x01

## Question #1

```
~ 0x12 = ?
```

 🏷️ 0xEE

 🏷️ 0x21

 🏷️ 0xED

 🏷️ 0xFD

## Question #2

```
What is 98 in base16?
```

 🏷️ 0x96

 🏷️ 0x62

 🏷️ 0x98

## Question #3

```
0x02 >> 1 = ?
```

 🏷️ 0x00

 🏷️ 0x02

 🏷️ 0x01

## Question #4

```
0x01 & 0x01 = ?
```

 🏷️ 0x02

 🏷️ 0x00

 🏷️ 0x01

## Question #5
```
0x01 | 0x01 = ?
```

 🏷️ 0x02

 🏷️ 0x00

 🏷️ 0x01


## Question #6
```
0x01 << 1 = ?
```

 🏷️ 0x10

 🏷️ 0x03

 🏷️ 0x02

 🏷️ 0x00

 🏷️ 0x01

## Question #7
```
What is 0b01101101 in base16?
```

 🏷️ 0xD6

 🏷️ 0x7D

 🏷️ 0x6E

 🏷️ 0x36

 🏷️ 0x6D


## Question #8

```
0x89 & 0x01 = ?
```

 🏷️ 0x88

 🏷️ 0x89

 🏷️ 0x00

 🏷️ 0x01


## Question #9
```
What is 0x89 in base10?
```

 🏷️ 137

 🏷️ 139

 🏷️ 89

 🏷️ 135


## Question #10
```
~ 0x98 = ?
```

 🏷️ 0x68

 🏷️ 0x66

 🏷️ 0x67


## Question #11
```
0x66 & 0x22 = ?
```

 🏷️ 0x66

 🏷️ 0x22

 🏷️ 0x44


## Question #12
```
0x01 & 0x00 = ?
```

 🏷️ 0x02

 🏷️ 0x00

 🏷️ 0x01


## Question #13
```
0x13 << 1 = ?
```

 🏷️ 0x4C

 🏷️ 0x98

 🏷️ 0x13

 🏷️ 0x26


## Question #14
```
What is 0x89 in base2?
```

 🏷️ 0b01101001

 🏷️ 0b10001000

 🏷️ 0b10101001

 🏷️ 0b10001001


## Question #15
```
What is 98 in base2?
```

 🏷️ 0b10011000

 🏷️ 0b01010010

 🏷️ 0b01100010


## Question #16
```
0x44 | 0x22 = ?
```

 🏷️ 0x66

 🏷️ 0x22

 🏷️ 0x44


## Question #17
```
What is 0b001010010 in base10?
```

 🏷️ 83

 🏷️ 84

 🏷️ 81

 🏷️ 82


## Question #18
```
0x88 & 0x01 = ?
```

 🏷️ 0x88

 🏷️ 0x89

 🏷️ 0x00

 🏷️ 0x01


##Question #19
```
0x89 >> 3 = ?
```

 🏷️ 0x08

 🏷️ 0x11

 🏷️ 0x22

 🏷️ 0x89

 🏷️ 0x44

Happy coding🎉
