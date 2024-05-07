/*Rock Paper Scissors
Let's play! You have to return which player won! In case of a draw return Draw!.

Examples(Input1, Input2 --> Output):

"scissors", "paper" --> "Player 1 won!"
"scissors", "rock" --> "Player 2 won!"
"paper", "paper" --> "Draw!"*/

enum tool {ROCK, PAPER, SCISSORS};
enum outcome {P1_WON, P2_WON, DRAW};

enum outcome rps (enum tool p1, enum tool p2)
{
  if (p1 == p2)
    return DRAW;
  else if ((p1 == ROCK && p2 == SCISSORS) || (p1 == PAPER && p2 == ROCK) || (p1 == SCISSORS && p2 == PAPER))
    return P1_WON;
  else
    return P2_WON;
}