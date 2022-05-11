#include <iostream>
// This code will create the board

//TODO: place wins into separate class
//TODO: use a list to update the board
using namespace std;
string one = "1";
string two = "2";
string three = "3";
string four = "4";
string five = "5";
string six = "6";
string seven = "7";
string eight = "8";
string nine = "9";
string list[9] = {one, two, three, four, five, six, seven, eight, nine};

string condition = "false";



class Wins {       // The class
  public:             // Access specifier
                      // Attribute (string variable)
    void checkForXWin(){  // verify if choices reap a win.
      //horizontal
      if (list[0] == "x" && list[1] == "x" && list[2] == "x"){
        condition = "3";}
      if (list[3] == "x" && list[4] == "x" && list[5] == "x"){
        condition = "3";}
      if (list[6] == "x" && list[7] == "x" && list[8] == "x"){
        condition = "3";}
      //vertical
      if (list[0] == "x" && list[3] == "x" && list[6] == "x"){
        condition = "3";}
      if (list[1] == "x" && list[4] == "x" && list[7] == "x"){
        condition = "3";}
      if (list[2] == "x" && list[5] == "x" && list[8] == "x"){
        condition = "3";}
      //diagonal
      if (list[0] == "x" && list[4] == "x" && list[8] == "x"){
        condition = "3";}
      if (list[2] == "x" && list[4] == "x" && list[6] == "x"){
        condition = "3";}
      }

    void checkForOWin(){  // verify if choices reap a win.
      //horizontal
      if (list[0] == "o" && list[1] == "o" && list[2] == "o"){
        condition = "2";}
      if (list[3] == "o" && list[4] == "o" && list[5] == "o"){
        condition = "2";}
      if (list[6] == "o" && list[7] == "o" && list[8] == "o"){
        condition = "2";}
      //vertical
      if (list[0] == "o" && list[3] == "o" && list[6] == "o"){
        condition = "2";}
      if (list[1] == "o" && list[4] == "o" && list[7] == "o"){
        condition = "2";}
      if (list[2] == "o" && list[5] == "o" && list[8] == "o"){
        condition = "2";}
      //diagonal
      if (list[0] == "o" && list[4] == "o" && list[8] == "o"){
        condition = "2";}
      if (list[2] == "o" && list[4] == "o" && list[6] == "o"){
        condition = "2";}
      }
};


int getUserInput(){
  // ask for and return the user number choice.
  int x;
  cin >> x;
  return x;
}


void updateXBoard(int i){
  // update the board acoording to the players choices.
  // for (int z = 0; z < 10; z++) {
  //   if (i == 1 || i ==)
  //   cout << list[z] << "\n";
  // }
  if (i == 1){
    list[0] = 'x';}
  if (i == 2){
    list[1] = 'x';}
  if (i == 3){
    list[2] = 'x';}
  if (i == 4){
    list[3] = 'x';}
  if (i == 5){
    list[4] = 'x';}
  if (i == 6){
    list[5] = 'x';}
  if (i == 7){
    list[6] = 'x';}
  if (i == 8){
    list[7] = 'x';}
  if (i == 9){
    list[8] = 'x';}
}
    
void updateOBoard(int i){
  // update the board acoording to the players choices.
  if (i == 1){
    list[0] = 'o';}
  if (i == 2){
    list[1] = 'o';}
  if (i == 3){
    list[2] = 'o';}
  if (i == 4){
    list[3] = 'o';}
  if (i == 5){
    list[4] = 'o';}
  if (i == 6){
    list[5] = 'o';}
  if (i == 7){
    list[6] = 'o';}
  if (i == 8){
    list[7] = 'o';}
  if (i == 9){
    list[8] = 'o';}
}

void board() {
  
  cout << list[0] << " ";
  cout << list[1] << " ";
  cout << list[2] << "\n";
  cout << list[3] << " ";
  cout << list[4] << " ";
  cout << list[5] << "\n";
  cout << list[6] << " ";
  cout << list[7] << " ";
  cout << list[8];
}

// int restartGame(){
//   string x;
//   cout << "Would you like to play again?(y/n) ";
//   cin >> x;
//   if (x == "y"){
//     main();
//   }
//   return 0;
// }

int main() {
  Wins checkWins;
  cout << "Welcome to tick-tack-toe! \n";
  cout << "Enter the number of the space you choose.(ex. 1, 2, 3...)\n";
  cout << "\n";
  board();
  cout << "\n";
  
  while (condition == "false"){
    
    cout << "x's turn: ";
    int xinput;
    xinput = getUserInput();
    updateXBoard(xinput);
    checkWins.checkForXWin();
    board();
    cout << "\n";
    if (condition == "3"){
      break;}
    cout << "o's turn: ";
    int oinput;
    oinput = getUserInput();
    updateOBoard(oinput);
    checkWins.checkForOWin();
    board();
    cout << "\n";
  }
  cout << "\n";
  if (condition == "3"){
        cout << "Congradulations X! You Won!!!";
      }
  if (condition == "2"){
        cout << "Congradulations O! You Won!!!";
      }
  // restartGame();
  return 0;
}
