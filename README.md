Introduction
This program is a multiplayer number guessing game written in C++. It allows users to enter the number of players and gives each player five attempts to guess a randomly generated number. The program evaluates the performance of each player and displays the final results, including the top three winners.
Input Handling
The game begins by asking the user to enter the number of players. The program uses this input to create arrays that store each player's attempts and their success status. This setup ensures that the game manages multiple players efficiently.
Game Logic
Each player plays individually. The program generates a new random number for every player. The player gets five attempts to guess the correct number. After each guess, the program provides a hint. The hint tells the player whether the guess is too high or too low. If the player makes the correct guess, the program records the attempt number and marks the player as a winner. If the player fails all five attempts, the program displays the correct number.
Attempt Tracking
The program stores the number of attempts taken by each winning player. This data helps in ranking the players later. It also keeps a boolean value for every player to track whether they guessed the number correctly.
Result Calculation
After all players finish their turns, the program displays the total player count, the number of winners, and the number of losers. This gives a clear summary of how the game went.
Winner Ranking
The program identifies the top three winners based on the fewest attempts taken. It checks attempts from one to five and selects up to three players who guessed the number in the least attempts. This part of the program highlights the best players in an organized way.
Conclusion
The code successfully handles multiplayer input, random number generation, attempt tracking, and ranking. The structure is simple and effective for beginners. The final output presents clear results, which makes the game easy to understand and play.

