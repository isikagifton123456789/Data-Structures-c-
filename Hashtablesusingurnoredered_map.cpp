#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    unordered_map<int, string> students;
    students[1] = "Gift";
    students[2] = "Kioko";
    students[3] = "Kanini";
    students[4] = "Aleco";

    int option;

    do {
        cout << "1. Display list of students\n";
        cout << "2. Search students using ID\n";
        cout << "3. Delete a student\n";
        cout << "4. Close The Program\n";
        cout << "Enter an option:\n";
        cin >> option;

        if(option == 1) {
            for(const auto& p : students) {
                cout << p.first << " " << p.second << endl;
            }

            cout << "\n2. Search students using ID\n";
            cout << "3. Delete a student\n";
            cout << "4. Close The Program\n";
            cout << "Enter an option:\n";
            cin >> option;
        }

        else if(option == 2) {
            int Regno;
            cout << "Enter the Registration number:\n";
            cin >> Regno;

            auto found = students.find(Regno);
            if(found != students.end()) {
                cout << "Found an ID: " << found->first
                     << " Name: " << found->second << endl;
            } else {
                cout << "ID not found.\n";
            }

            cout << "\n1. Display list of students\n";
            cout << "3. Delete a student\n";
            cout << "4. Close The Program\n";
            cout << "Enter an option:\n";
            cin >> option;
        }

        else if(option == 3) {
            int Regno;
            cout << "Enter the Registration number to delete:\n";
            cin >> Regno;

            students.erase(Regno);
            cout << "Student deleted successfully\n";

            cout << "\n1. Display list of students\n";
            cout << "2. Search students using ID\n";
            cout << "4. Close The Program\n";
            cout << "Enter an option:\n";
            cin >> option;
        }

    } while(option != 4);

    return 0;
}
