# Identify the Shapes – CS103-1

## Task 5

### Requirements

- Shapes: The game should feature a variety of shapes for children to identify, such as squares, triangles, and rectangles.
- User input: The game should accept user input in the form of keyboard input, allowing children to select the shape they believe is being displayed.
- Feedback: The game should provide feedback to the player, such as whether their answer was correct or not, and the player's current score.
- Difficulty levels: The game should have different difficulty levels, such as easy, medium, and hard.
- Scoring: The game should have a scoring system that keeps track of the player's progress and rewards correct answers.
- Number of rounds: The game should have a set number of rounds, or the player should be able to choose the number of rounds they wish to play.
- Error handling: The game should handle any errors that may occur during gameplay, such as invalid user input or errors in the code.
- Randomization: The game should randomly select shapes to be displayed, so that the player will have a small chance of getting the same shapes in the same order repeatedly.
- Replayability: The game should have replayability, so that players can play it multiple times.
- Code cleanliness: The game should be written in clean, easy-to-understand, and maintainable code, following best practices and standards of C++.

### Design

#### Difficulty Levels

- Easy:
  - The shape will be displayed on screen alongside the number of sides.
  - The player must identify the shape from a selection of string options.
- Medium:
  - The shape will be displayed on screen.
  - The player must identify the shape from a selection of string options.
- Hard:
  - The name of the shape will be displayed on the screen. Below some random shapes will be displayed alongside a letter to select the option.
  - The player must identify the shape from one of the shapes displayed below the name of the shape.

#### Scoring

- The game's score should be constantly displayed and adjusted accordingly with each guess.
- Every correct guess will add one point to the score.
- At the start of a new game, the score will be reset to 0.

#### Number of rounds

- The game will have 5 rounds for all levels of difficulty.

#### Error handling

- If the user enters an invalid input, the console will display that there has been a mistake and ask the user to enter a valid input.

#### Randomization

- The game will randomly select which shape to use for each round and the order of the potential answers.

#### Replayability

- After each set of rounds, the score will be displayed, and the user will be taken back to the start, given the difficulty selection options.

### Code

- Define functions for a square & triangle without any argument and without return type.
- Define another function called rectangle with arguments and without return type. Pass height and width as arguments to the function.
- Define one more function called calculate score with an argument and with the return value. For each right answer, increase the score by 10. Return the score to the calling place.
- Display Main Menu with Play, Final Score, and Exit.
- Play option should call any one of shapes randomly and display it. Provide options to the user as follows, (Hint: use random generator to choose the shape)
  a. Rectangle
  b. Triangle
  c. Square
  d. None of the above