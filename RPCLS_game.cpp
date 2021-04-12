#include<iostream>
#include<stdlib.h>

int main(){

  srand(time(NULL));
  int computer = rand() % 5+1;
  int user = 0;

  std::cout << "Welcome to rock, pepper, scissor!\n";

  std::cout << "1. Rock\n";
  std::cout << "2. Paper\n";
  std::cout << "3. Scissor\n";
  std::cout << "4. Lizard\n";
  std::cout << "5. Spock\n";
  std::cout << "Please enter your choice...\n";
  std::cin >> user;
  std::cout << computer << "\n";

  if (user == computer){
    std::cout << "Dang it, it's a tie! Please continue\n";
  }
  else if ((user == 1 && computer == 3) || (user == 1 && computer == 4)){ // Rock crushes scissor and lizard!
    std::cout << "Congratulations, you just Won!\n";
  }
  else if ((user == 2 && computer == 1) || (user == 2 && computer == 5)){ // Paper covers rock and disproves spock
    std::cout << "Congratulations, you just Won!\n";
  }
  else if ((user == 3 && computer == 2) || (user == 3 && computer == 4)){ // Scissor cuts paper and decapitate lizard
    std::cout<< "Congratulations, you just Won!\n";
  }
  else if ((user == 4 && computer == 5) || (user == 4 && computer == 2)){ // Lizard poisons spck and eats paper
    std::cout<< "Congratulations, you just Won!\n";
  }
  else if ((user == 5 && computer == 3) || (user == 5 && computer == 1)){ // Spock vaporizes rock and smashes scissor
    std::cout<<"Congratulations, you just Won!\n";
  }
  else {
    std::cout<< "I'm sorry! You have lost!\n";
  }
}