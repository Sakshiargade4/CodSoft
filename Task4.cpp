#include <iostream>
#include <string>

using namespace std;

const int MAX_TASKS = 100;  // Maximum number of tasks that can be handled
string tasks[MAX_TASKS];     // Array to store tasks
bool completed[MAX_TASKS];   // Array to store completion status of tasks
int taskCount = 0;           // Counter to track the number of tasks added

// Function to add a task
void addTask() {
    if (taskCount >= MAX_TASKS) {
        cout << "Task list is full! Cannot add more tasks.\n";
        return;
    }

    string task;
    cout << "Enter a task: ";
    getline(cin, task);  
    tasks[taskCount] = task;  // Store task in array
    completed[taskCount] = false;  // Mark task as not completed
    taskCount++;  // Increase the task count
    cout << "Task added successfully!!\n";
}

// Function to view all tasks
void viewTasks() {
    if (taskCount == 0) {
        cout << "No tasks to show.\n";
        return;
    }
    cout << "Here are your tasks:\n";
    for (int i = 0; i < taskCount; i++) {
        cout << i + 1 << ". " << (completed[i] ? "[Completed] " : "[Pending] ") << tasks[i] << endl;
    }
}

// Function to mark a task as completed
void markCompleted() {
    viewTasks();
    if (taskCount == 0) return;

    int taskNumber;
    cout << "Enter task number to mark as completed: ";
    cin >> taskNumber;

    if (taskNumber > 0 && taskNumber <= taskCount) {
        completed[taskNumber - 1] = true;  // Mark the task as completed
        cout << "Task marked as completed!\n";
    } else {
        cout << "Invalid task number!\n";
    }
    cin.ignore();  // Clear input buffer after taking integer input
}

// Function to remove a task
void removeTask() {
    viewTasks();
    if (taskCount == 0) return;

    int taskNumber;
    cout << "Enter task number to remove: ";
    cin >> taskNumber;

    if (taskNumber > 0 && taskNumber <= taskCount) {
        // Shift tasks to remove the selected task
        for (int i = taskNumber - 1; i < taskCount - 1; i++) {
            tasks[i] = tasks[i + 1];
            completed[i] = completed[i + 1];
        }
        taskCount--;  // Decrease the task count after removal
        cout << "Task removed!\n";
    } else {
        cout << "Invalid task number!\n";
    }
    cin.ignore();  // Clear input buffer
}

int main() {
    int choice;
    do {
        cout<<"-----------------------------------";
        cout << "\nTO-DO LIST MANAGER\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // Clear input buffer before getting the next input

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                markCompleted();
                break;
            case 4:
                removeTask();
                break;
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);  // Continue looping until the user chooses to exit

    return 0;
}