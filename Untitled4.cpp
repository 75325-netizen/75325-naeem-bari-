#include <iostream>
using namespace std;
int main() {
    int choice;
    do{
        cout << "\n--- Main Menu ---" << endl;
        cout << "1. Option One" << endl;
        cout << "2. Option Two" << endl;
        cout << "3. Option Three" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You selected Option One." << endl;
                break;
            case 2:
                cout << "You selected Option Two." << endl;
                break;
            case 3:
                cout << "You selected Option Three." << endl;
                break;
            case 4:
                cout << "Exiting the program. Goodbye!" << endl;
                break; 
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

    } while (choice != 4); 
    return 0;
}