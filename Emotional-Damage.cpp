#include <iostream>

int main() {

  std::cout << "\n" << "This application has stated successfully" << "\n";

  int guess;
  
  int tries = 0;

  int emotionaldamage = 0;

  while (guess != 8 && tries < 50) {

  std::cout << "I have a number 1-10.\n";
  std::cout << "Please guess it: ";
  std::cin >> guess;
 
  tries++;

  emotionaldamage++;
  
  } 
  
  
  if (guess == 8) {
    
    std::cout << "Congrats you won EMOTIONAL DAMAGE!\n";
    
    std::cout << "\n" << "Attempts: " << tries << "Emotional Damage: " << emotionaldamage; 
  
  }  else if (tries == 50 || tries > 50){

    std::cout << "\n" << "How did you manage to fail you could have pressed every single number at this point but you chose to press every single one except for number 8 you're either dumb or retarded.";

    std::cout << "\n" << "Attempts: " << tries << "Emotional Damage: " << emotionaldamage; 

  }
  
}
