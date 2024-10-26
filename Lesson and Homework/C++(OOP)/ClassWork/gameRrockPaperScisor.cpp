#include <iostream>
using namespace std;

void displayRockPaperScissor(int choice, string text);
void checkResult(int playerChoice, int computerChoice);
template <typename T> void input(T &choice, string text);
void messageInvalid();

int main() {
  int playerChoice;
  int computerChoice;
  string playGame;

  do {
    input(playGame, "Are you ready to play Game? [yes/no]:");
    if (playGame == "yes") {
      srand(time(0));
      do {
        computerChoice = rand() % 3 + 1;
        input(playerChoice, "1. rock\n2. paper\n3. scissor\nYour Choice: ");
        if (playerChoice != 1 && playerChoice != 2 && playerChoice != 3) {
          messageInvalid();
        }

      } while (playerChoice != 1 && playerChoice != 2 && playerChoice != 3);

      displayRockPaperScissor(playerChoice, "Your Choice");
      displayRockPaperScissor(computerChoice, "Computer Choice");
      checkResult(playerChoice, computerChoice);
    } else if (playGame == "no" || playGame == "No") {
      cout << "Bye Bye!!" << endl;
      exit(0);
    } else {
      messageInvalid();
    }
  } while (playGame != "no" && playGame != "No");
  return 0;
}
void displayRockPaperScissor(int choice, string text) {
  string rock, paper, scissor;
  switch (choice) {
  case 1:
    rock = R"(
        _______
    ___'   ____)
          (_____)
          (_____)
          (____)
    ---.__(___)
    )";
    cout << text << ": rock" << endl;
    cout << rock << endl;
    break;
  case 2:
    paper = R"(
        _______
    ---'   ____)____
              ______)
              _______)
             _______)
    ---.__________)
    )";
    cout << text << ": paper" << endl;
    cout << paper << endl;
    break;
  case 3:
    scissor = R"(
        _______
    ---'   ____)____
              ______)
           __________)
          (____)
    ---.__(___)
    )";
    cout << text << ": scissor" << endl;
    cout << scissor << endl;
    break;

  default:
    break;
  }
}
void checkResult(int playerChoice, int computerChoice) {
  if (playerChoice == computerChoice) {
    cout << "Tie" << endl;
  } else if (playerChoice != computerChoice) {
    if (playerChoice == 1 && computerChoice == 2) {
      cout << "You Lost" << endl;
    }
    if (playerChoice == 1 && computerChoice == 3) {
      cout << "You Win" << endl;
    }
    if (playerChoice == 2 && computerChoice == 1) {
      cout << "You Win" << endl;
    }
    if (playerChoice == 2 && computerChoice == 3) {
      cout << "You Lost" << endl;
    }
    if (playerChoice == 3 && computerChoice == 1) {
      cout << "You Lost" << endl;
    }
    if (playerChoice == 3 && computerChoice == 2) {
      cout << "You Win" << endl;
    }
  }
}
template <typename T> 
void input(T &choice, string text) {
  cout << text;
  cin >> choice;
}
void messageInvalid() { cout << "Invalid Input...." << endl; }