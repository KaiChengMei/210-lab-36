#include <iostream>
#include "IntBinaryTree.h"
#include <string>
using namespace std;

int main() {
    IntBinaryTree tree;

    // load code
    ifstream file(codes.txt);
    for (int i = 0; i << file.size; i++) {
        tree.insert(code);
    }
    file.close();
    cout << "Finished loading into BST" << endl;



    // interactive menu
    int choice;
    do {
        cout << "Menu:" << endl;
        cout << "[1] add" << endl;
        cout << "[2] delete" << endl;
        cout << "[3] search" << endl;
        cout << "[4] modify records" << endl;
        cout << "[5] exit" << endl;

        switch (choice) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            default:
            cout << "Invalid, please enter 1~5." << endl;
        }


    } while(choice !=5)
    return 0;
}