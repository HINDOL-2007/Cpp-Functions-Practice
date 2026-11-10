# Cpp-Functions-Practice

6 small programs in **C++** that practice writing functions: sum, factorial, digit sum, nCr, primes and Fibonacci. I wrote all of them myself .

## What these programs practice

- Writing a function with one clear job, and calling it from `main`
- Returning a value (`int`) and also a function that only prints (`void`)
- Reusing one function inside another (`factorial` inside `nCr`)
- Loops versus recursion (the recursive versions are kept as comments in `func_1.cpp` and `func_2.cpp`)
- The square-root idea for prime checking, carried over from my C practical

## The programs

| File | What it does | Example |
|---|---|---|
| `func_1.cpp` | Sum of the numbers from 1 to n | `n = 5` gives `15` |
| `func_2.cpp` | Factorial of a number | `5 ! = 120` |
| `func_3.cpp` | Sum of the digits of a number | `1234` gives `10` |
| `func_4.cpp` | nCr (combinations), using a `factorial` function | `5C2 = 10` |
| `func_5.cpp` | Prints all prime numbers up to n | `n = 20` gives `2  3  5  7  11  13  17  19` |
| `func_6.cpp` | Prints the first n terms of the Fibonacci series | `n = 7` gives `0  1  1  2  3  5  8` |

## Run any program

```bash
g++ func_1.cpp -o func_1
./func_1
```

On Windows, run `func_1.exe` instead of `./func_1`.

## Known limitations

- **Integer overflow.** `factorial` and `nCr` use `int`, so they give wrong answers for larger inputs (factorial from 13 upward, and `nCr` even sooner, because it calculates the full factorials first).
- **Negative input** is not handled in `func_2` and `func_3`.
- **`func_5` prints inside the function** instead of returning whether a number is prime, so the function can't be reused for other tasks. It also has a `check` variable that is never needed.
- **`func_6` repeats work.** It calls `fib(i)` for each term, and each call starts again from the beginning.
- In the commented recursive factorial, the `n < 0` branch prints a message but returns nothing.
- No input checking for non-numeric input.

## What I learned

- A good function does one thing and has a clear name.
- Edge cases such as `0`, negative numbers and the largest input decide whether a function is really correct.
- The same mistakes, overflow and edge inputs, keep appearing, so I now test those first.

---

Part of my learning journey: [github.com/HINDOL-2007](https://github.com/HINDOL-2007)
