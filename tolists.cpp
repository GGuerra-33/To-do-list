#include <iostream>
#include <list>
#include <string>
#include <vector>


void DisplayMenu (){
  std::cout << "Menu:\n";
  std::cout << "1. Create a new task" << std::endl;
  std::cout << "2. Mark a task as completed" << std::endl;
  std::cout << "3. Show tasks" << std::endl;
  std::cout << "4. Exit" << std::endl;

}


void AddTask(std::vector<std::string>& taskList){
  std::string task;

  std::cout << "Add a task: ";
  std::getline(std::cin >> std::ws, task);

  taskList.push_back(task);
}


void DisplayTasks(){
  std::vector<std::string> taskList;
  std::string task;

  for(const auto& task : taskList){
    std::cout << task << std::endl;
  }

}

void DeleteTask(){
  
}

int main(){

  int choice;
  std::vector<std::string> tasks;
  int delete_task;

  do{
    DisplayMenu();

    std::cout << "Select an option: ";
    std::cin >> choice;
  
    //PerformAction(choice);

    switch (choice)
    {
    case 1:
      AddTask(tasks);

      std::cout << "Tasks in the list: \n";

      for (const auto& task : tasks){
        std::cout << task << std::endl;
      }

      break;

    case 2:
      std::cout << "What task do you want to complete?: ";
    
    default:
      std::cout << "Invalid option \n";
      break;
    }


    if (choice == 2){
      for(const auto& task : tasks){
        std::cout << task << std::endl;
      }
    
      std::cout << "What task do you want to complete:" << std::endl;

      std::cin >> delete_task;

      }
  } while (choice != 4);
  
  }