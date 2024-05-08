#include <iostream>
#include <vector>
#include <string>
#include <limits>

void DisplayMenu() {
    std::cout << "Menu:\n";
    std::cout << "1. Create a new task\n";
    std::cout << "2. Show tasks\n";
    std::cout << "3. Mark a task as completed\n";
    std::cout << "4. Exit\n";
}

void AddTask(std::vector<std::string>& taskList) {
    std::string task;
    std::cout << "Add a task: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    std::getline(std::cin, task);
    taskList.push_back(task);
}

int main() {
    int choice;
    std::vector<std::string> tasks;
    int delete_task;

    while (true) {
        DisplayMenu();
        std::cout << "Select an option: ";

        // Check if input is an integer
        if (!(std::cin >> choice)) {
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a number.\n";
            continue; // Skip the rest of the loop iteration
        }

        switch (choice) {
            case 1:
                AddTask(tasks);

                std::cout << "Tasks in the list:\n";
                for (size_t i = 0; i < tasks.size(); i++){
                  std::cout << i + 1 << ". " << tasks[i] <<std::endl;
                 }
                break;
            case 2:
                std::cout << "Tasks in the list:\n";
                for (size_t i = 0; i < tasks.size(); ++i) {
                    std::cout << i + 1 << ". " << tasks[i] << std::endl;
                }
                if(tasks.size()==0){
                  std::cout << "There are no tasks in the list" << std::endl;
                }
                break;
            case 3:
                std::cout << "Enter the task number to mark as completed: ";
                if (!(std::cin >> delete_task)) {
                    std::cin.clear(); // Clear the error flag
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
                    std::cout << "Invalid input. Please enter a number.\n";
                    continue; // Skip the rest of the loop iteration
                }
                if (delete_task >= 1 && delete_task <= static_cast<int>(tasks.size())) {
                    std::cout << "Task '" << tasks[delete_task - 1] << "' has been marked as completed." << std::endl;
                    tasks.erase(tasks.begin() + delete_task - 1);
                } else {
                    std::cout << "Invalid task number.\n";
                }
                break;
            case 4:
                std::cout << "Exiting program.\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please select again.\n";
                break;
        }
    }

    return 0;
}
