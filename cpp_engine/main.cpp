#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    cout << "=========================\n";
    cout << "        MedIntel\n";
    cout << " AI Symptom Analyzer\n";
    cout << "=========================\n\n";

    cout << "Enter your symptoms (type 'done' to finish):\n";

    vector<string> symptoms;
    string input;

    while (true) {
        cout << "> ";
        cin >> input;

        if (input == "done") {
            break;
        }

        symptoms.push_back(input);
    }

    cout << "\nYou entered these symptoms:\n";

    for (string symptom : symptoms) {
        cout << "- " << symptom << endl;
    }

    cout << "\nAnalyzing symptoms...\n";

    cout << "Possible conditions:\n";
    cout << "- Common Cold\n";
    cout << "- Flu\n";

    return 0;
}