#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <limits>

void DisplayMenu (){
  std::cout << "Menu:\n";
  std::cout << "1. Create a new task" << std::endl;
  std::cout << "2. Show tasks" << std::endl;
  std::cout << "3. Mark a task as completed" << std::endl;
  std::cout << "4. Exit" << std::endl;

}


void AddTask(std::vector<std::string>& taskList){
  std::string task;

  std::cout << "Add a task: ";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
  std::getline(std::cin >> std::ws, task);
  taskList.push_back(task);
}

int main(){

  int choice;
  std::vector<std::string> tasks;
  int delete_task;

  do{
    DisplayMenu();

    std::cout << "Select an option: ";
    std::cin >> choice;
  
    if(!(std::cin >> choice)){
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
      std::cout << "Please enter a number: \n";
      continue;
    }

    switch (choice)
    {
    case 1:
      AddTask(tasks);

      std::cout << "Tasks in the list: \n";

      for (size_t i = 0; i < tasks.size(); i++){
        std::cout << i + 1 << ". " << tasks[i] <<std::endl;
      }

      break;

    case 2:
      std::cout << "Taks in the list:\n ";

      for (size_t i = 0; i < tasks.size(); i++){
        std::cout << i + 1 << ". " << tasks[i] <<std::endl;
      }

      break;
    
    case 3:
    std::cout << "Enter a task to complete: ";
    if (!(std::cin >> delete_task)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Please enter a number: \n";
        continue;
    }

    if (delete_task >= 1 && delete_task <= static_cast<int>(tasks.size())) {
        std::cout << tasks[delete_task - 1] << " has been marked as completed" << std::endl;
        tasks.erase(tasks.begin() + delete_task - 1);
    } else {
        std::cout << "Incorrect task\n";
    }
    break;


      break;

    case 4:
      std::cout << "Exiting program";

      break;

    default:
      std::cout << "Invalid option \n";
      break;
    }

  } while (choice != 4);
  
  }