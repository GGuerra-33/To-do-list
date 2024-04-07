#include <iostream>
#include <string>

int main(){
    std::string tasks = {};
    int options[3] = {1, 2, 3};
    std::string new_task = {};

    std::cout << "What do you want to do?" << std::endl;
    
    for (int i=0; i>3; ++i){
        std::cout << options[i] << std::endl;
    }

    int selected_option;
    std::cin >> selected_option;

    std::string new_task = {};

    if (selected_option == 1){
        std::cout << "Create a new task:" << std::endl;
        std::getline(std::cin, new_task) /* users writes a task */;
        tasks.append(new_task);   // Task is appended to the list "tasks"
        std::cout << tasks << std::endl;

    }

    /* If loop for option 2
    user is asked which task wants to mark as completed
    then taks is deleted from the list "tasks"*/

    /*If loop for option 3
    user is asked if he wants to leave the program
    if yes, terminate process
    if not, bring back to initial menu*/

    /*If loop for option 4
    user visualizes all of this tasks
    then the user is asked if he wants to terminate the program or to return to the menu
    if he wants to terminate, then, program.exit()
    if not, return to initial menu*/

    //Consider changing option 4 for option 2/3
    //Create a decent debugging environment

    return 0;

}