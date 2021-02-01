# CrackMe

Fun crackme challenge I wrote. Logic behind the code explained below. For more detail check the comments in `main.c`

Desired Output:
```
0b0000 -> 0
0b0001 -> 1
0b0010 -> 2
0b0010 -> 2
0b0011 -> 3
0b0100 -> 4
0b0101 -> 5
```

Secret Seed XOR Comparison:
```
0b0011 -> 3
```

Needed Input:
```
0b0011 -> 3
0b0010 -> 2
0b0001 -> 1
0b0001 -> 1
0b0000 -> 0
0b0111 -> 7
0b0110 -> 6
```

```
Answer: 6701123 => "Correct"
```