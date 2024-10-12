
Write a function that receives a dynamic two-dimensional array \( A \) with \( n \) rows and also the array `size`, which contains the lengths of the rows in \( A \). The element `size[i]` is equal to the length of the row \( i \) in \( A \).

The function should perform a cyclic shift of the rows in \( A \), so that row 0 moves to position 1, row 1 moves to position 2, and so on, with row \( n-1 \) moving to position 0.

Additionally, the function should update the elements in the `size` array to match the cyclic shift that was performed on \( A \).

**Example:**

Before the shift:
```
A:
0  5  12  6  9
1
2  0  3  1  29  101
3  13  14
```

After the shift:
```
A:
3  13  14
0  5  12  6  9
1
2  0  3  1  29  101
```

Before the shift: 
`size = {5, 1, 6, 3}`

After the shift:
`size = {3, 5, 1, 6}`

**Important:**
The function should modify only the pointers in the array \( A \), not the data inside the rows!

