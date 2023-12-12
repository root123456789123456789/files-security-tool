#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	system("clear");
    string file_name;
    cout << "Enter the file that u want to secure it : ";
    cin >> file_name;

    ifstream input_file(file_name);
    if (!input_file.is_open()) {
        cout << "Unable to open file." << endl;
        return 1;
    }

    ofstream output_file("walid.txt", ios::app);
    if (!output_file.is_open()) {
        cout << "Unable to open output file." << endl;
        return 1;
    }

    string line;
    while (getline(input_file, line)) {
        output_file << line << endl;
    }

    cout << "File contents are saved thanks for using my program" << endl;

    input_file.close();
    output_file.close();
    
    return 0;
}