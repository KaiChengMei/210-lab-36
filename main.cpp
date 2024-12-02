#include <iostream>
#include "IntBinaryTree.h"
#include <string>
using namespace std;

int main() {
    IntBinaryTree tree;

    // load code
    ifstream file(codes.txt);
    string code;
    if (!file) {
        cout << "Error open file: " << endl;
        return 0;
    }
    while (getline(file, code)) {
        tree.insert(code);
    }
    file.close();
    cout << "Finished loading into BST" << endl;

    // interactive menu
    int choice;
    string a;
    do {
        cout << "Menu:" << endl;
        cout << "[1] add" << endl;
        cout << "[2] delete" << endl;
        cout << "[3] search" << endl;
        cout << "[4] modify records" << endl;
        cout << "[5] exit" << endl;

        switch (choice) {
            case 1:
                cout << "Enter code to add: ";
                cin >> a;
                tree.insertNode(a);
                cout << "added code." << endl;
                break;
            case 2:
                cout << "Enter code to delete: ";
                cin >> a;
                tree.remove(a);
                cout << "deleted code." << endl;
                break;
            case 3:
                cout << "Enter code to search: ";
                cin >> a;
                if (tree.searchNode(a)) {
                    cout << "founded code.";
                }
                else {
                    cout << "didn't founded code.";
                }
                break
            case 4:
                cout << "Display codes in order." << endl;
                tree.displaInOrder();
                break;
            case 5:
                cout << "Exiting....." << endl;
                break;
            default:
            cout << "Invalid, please enter 1~5." << endl;
        }


    } while(choice !=5)
    
    return 0;
}