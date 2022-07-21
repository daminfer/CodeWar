/*

If we were to set up a Tic-Tac-Toe game, we would want to know whether the board's current state is solved, wouldn't we? Our goal is to create a function that will check that for us!

Assume that the board comes in the form of a 3x3 array, where the value is 0 if a spot is empty, 1 if it is an "X", or 2 if it is an "O", like so:

[[0, 0, 1],
 [0, 1, 2],
 [2, 1, 0]]
We want our function to return:

-1 if the board is not yet finished AND no one has won yet (there are empty spots),
1 if "X" won,
2 if "O" won,
0 if it's a cat's game (i.e. a draw).
You may assume that the board passed in is valid in the context of a game of Tic-Tac-Toe.

*/

function isSolved(board) {
    var t;
    
    for (var i = 0; i < 3; i++) {
      t = board[i][0]; 
      if (t === board[i][1] && t === board[i][2] && t !== 0) return t; 
      
      t = board[0][i]; 
      if (t === board[1][i] && t === board[2][i] && t !== 0) return t; 
    }
    
    t = board[0][0]; 
    if (t === board[1][1] && t === board[2][2] && t !== 0) return t; 
    
    t = board[0][2]; 
    if (t === board[1][1] && t === board[2][0] && t !== 0) return t; 
    
    var empty = false;
    
    for (var i = 0; i < 3; i++) {
      for (var j = 0; j < 3; j++) {
        if (board[i][j] === 0) empty = true;
      }
    }
    
    return !empty ? 0 : -1;
  }


function isSolved_corr(board) {
    board = board.join('-').replace(/,/g,'');
    if(/222|2...2...2|2....2....2|2..2..2/.test(board)) return 2;
    if(/111|1...1...1|1....1....1|1..1..1/.test(board)) return 1;
    if(/0/.test(board)) return -1;
    return 0;
}