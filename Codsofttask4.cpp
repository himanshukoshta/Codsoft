#include<iostream>
#include<vector>
#include<string>

using namespace std;

struct Task{
	string description;
	bool completed;
	
	Task(string desc) : description(desc),completed(false) {}
};
 
 void addtask(vector<Task> & task){
 	cout << "Enter the description of the new task : ";
 	string desc;
 	getline(cin,desc);
 	task.push_back(Task(desc));
 	cout << "Task added successfully. \n";
 	
 } 
 
 void viewtask(const vector<Task> & task){
 	if(task.empty()){
	 cout << "No task in the list.\n";
	 return; 
     }
     
     cout<< "To-Do List : \n";
     for(size_t i =0;i<task.size();++i){
     	cout << i + 1 << ". " << task[i].description
     	<< " ["<< (task[i].completed ? "Completed" : "Pending") << "]\n";
	 }
 }
 
 void marktaskascompleted(vector<Task> & task){
 	if(task.empty()){
 		cout << "No tasks are marked as completed.\n";
 		return;
	 }
	 
	 cout << "Enter the task number to be completed: ";
	 size_t tasknumber;
	 cin >> tasknumber;
	 
	 if(tasknumber < 1 || tasknumber > task.size()){
	 	cout << "Invalid task number.\n";
	 	return;
	 }
	 
	 task[tasknumber -1].completed = true;
	 cout << "Task marked as completed.\n";
 }
 
 void removetask(vector<Task> & task){
 	if(task.empty()){
 		cout << "No tasks to be remove.\n";
 		return;
	 }
	 
	 cout << "Enter the task number to be remove: ";
	 size_t tasknumber;
	 cin >> tasknumber;
	 
	 if(tasknumber < 1 || tasknumber > task.size()){
	 	cout << "Invalid task number.\n";
	 }
	 
	 task.erase(task.begin() + tasknumber - 1);
	 cout << "Task removed sucessfully.\n";
 }
 
 int main()
  {
 	vector<Task> task;
 	int choice;
 	do{
	 
	 cout << "\nTo-Do List Manager\n";
	 cout << "1. Add Task\n";
	 cout << "2. View tasks\n";
	 cout << "3. Mark Task as completed\n";
	 cout << "4. Remove task\n";
	 cout << "5. Exit\n";
	 cout << "Enter your choice: ";
	 cin >> choice;
	 cin.ignore();
	 
	 
	 switch(choice){
	 	case 1 :
	 		addtask(task);
	 		break;
	 	case 2 :
	 		viewtask(task);
	 		break;
	 	case 3 :
	 		marktaskascompleted(task);
	 		break;
	 	case 4 :
	 		removetask(task);
	 		break;
	 	case 5 :
	 		cout << "Exiting the program.\n";
	 		break;
	 	default :
	 		cout << "Invalid input. Please try again.\n";
	 }
	 }while(choice !=5);
	 
	 return 0;
  } 
