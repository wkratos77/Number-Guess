# number_guess 🎯

A simple number guessing game written in C.  
The program picks a random number between **1** and **100**, and the player tries to guess it.  
After each guess, the program tells the player if their guess was **too high**, **too low**, or **correct**.

---

## ✨ Features
- Random number generation using `rand()` and `time()`
- Input validation to handle non-numeric guesses
- Tracks the number of attempts
- Simple, fun, and beginner-friendly C project

---

## 🛠 Build & Run
```bash```
gcc -Wall -Wextra -Werror number_guess.c -o number_guess
./number_guess
## 📂 Example Output
=== Number Guessing Game ===
Guess a number between 1 and 100:

> 50

Too low! Try again.

> 75

Too high! Try again.

> 63

🎉 Correct! You found it in 3 attempts.
---

## 📜 License
MIT — free to use for learning and fun.
