#include <iostream>
#include <list>
#include <string>


void DisplayMenu (){
  std::cout << "Menu:\n";
  std::cout << "1. Create a new task" << std::endl;
  std::cout << "2. Mark a task as completed" << std::endl;
  std::cout << "3. Show tasks" << std::endl;
  std::cout << "4. Exit" << std::endl;

}

void PerformAction(int choice){
  switch (choice)
  {
  case 1:
    std::cout << "You chose option number " << choice << std::endl;
  
  case 2:
    std:: cout << "You chose option number " << choice << std::endl;
  default:
    std::cout << "Invalid option" << std::endl;
  }
}




int main(){

  int choice;
  
  std::list<std::string> tasks;
  std::string task;

  do
  {
    DisplayMenu();

    std::cout << "Select an option: ";
    std::cin >> choice;
  
    PerformAction(choice);
  
  } while (choice != 4);
  

  if (choice == 1){
    std::cout << "Enter a task: ";
    std::cin >> task;
    
  }



  return 0;

}