# Rock-paper-scissors

The program is a simple Rock-Paper-Scissors game where the user can play against the computer. Here are the functionalities implemented in the program:

1. Random Move Generation (`rand()` and `srand()`):** Generates a random move for the computer using the `rand()` function seeded with the current time using `srand()`.

2. User Input Handling: Accepts user input for selecting their move (Rock, Paper, or Scissors) or exiting the game.

3. Game Logic and Comparison:
   - Compares the user's move with the computer's move to determine the winner or if it's a draw.
   - Implements the rules of Rock-Paper-Scissors:
     - Rock beats Scissors, but is beaten by Paper.
     - Paper beats Rock, but is beaten by Scissors.
     - Scissors beat Paper, but are beaten by Rock.

4. Output Display:
   - Prints the result of the game (win, lose, or draw) based on the user's move and the computer's move.

5. Exiting the Game: Allows the user to exit the game by entering the value 9.

6. Input Validation: Validates user input to ensure it is within the expected range (0, 1, 2, or 9).

These functionalities collectively provide a simple yet enjoyable Rock-Paper-Scissors game experience for the user.