
# 🎮 Guess the Number Game (C Language)

Welcome to the **Guess the Number Game** built in C!  
This is a fun console-based game where the computer randomly picks a number between **1 and 100**, and your task is to guess it in the fewest attempts possible.

---

## 🧑‍💻 How to Play

1. Run the program.
2. The computer generates a random number (1–100).
3. You will be prompted to guess.
4. After each guess, you'll get a hint:
   - 🔼 "Choose a higher number"
   - 🔽 "Choose a lower number"
5. When you guess correctly, the program congratulates you and shows how many attempts you took.

---

## 🛠 Features

- Random number generation using `srand()` and `time()`.
- Infinite guessing loop until the correct number is guessed.
- Count and display number of attempts.
- User-friendly hints and messages.

---

## 📦 How to Compile and Run

### Using GCC:

```bash
gcc guess_game.c -o guess_game
./guess_game
```
## sample output 

🙋‍♂️             
|==========================|
|  WELCOME TO GUESS GAME   |
|==========================|

Enter your guess (1-100): 45
Please choose a higher number 🔼

Enter your guess (1-100): 75
Please choose a lower number 🔽

Enter your guess (1-100): 63
🎉 Congratulations!!😄

✅ The correct number was: 63
📊 You guessed the number in 3 attempts 👍
🙏 Thank you for playing the game ☺

👨‍💻 Author

Shabeer Ali
Feel free to fork, improve, and ⭐ star the repo!
