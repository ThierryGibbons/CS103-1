//
//  CS103-1 :: Task 6
//
//  Created by Thierry Gibbons.
//

#include <iostream>

using namespace std;


// Structure to manage the data:
struct Expense {
  string date;
  float transportCost;
  float mealCost;
  float entertainmentCost;
  float otherCost;
};

//  Array: 'Expense' to store multiple days of expenses:
Expense expenses[100];
int expenseCount = 0;

//  Functions to get input from user and calculate daily and weekly expenses:
void recordExpense() {
  // Code to get input from the user and store it in the expenses array
}

void viewDailyExpenses() {
  // Code to calculate and display daily expenses
}

void viewWeeklyExpenses() {
  // Code to calculate and display weekly expenses
}

//  Menu Function to display the menu options and call the appropriate function based on the user input:
void menu() {
  cout << "1. Record Expense" << endl;
  cout << "2. View Daily Expenses" << endl;
  cout << "3. View Weekly Expenses" << endl;
  cout << "4. Exit" << endl;

  int choice;
  cin >> choice;

  switch(choice) {
    case 1:
      recordExpense();
      break;
    case 2:
      viewDailyExpenses();
      break;
    case 3:
      viewWeeklyExpenses();
      break;
    case 4:
      exit(0);
    default:
      cout << "Invalid option" << endl;
  }
}

int main() {
    while (true) {
        menu();
    }
    return 0;
}
