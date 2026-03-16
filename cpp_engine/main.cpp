#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {

    cout << "=========================\n";
    cout << "        MedIntel\n";
    cout << " AI Symptom Analyzer\n";
    cout << "=========================\n\n";

    cout << "Enter your symptoms (type 'done' to finish):\n";

    vector<string> userSymptoms;
    string input;

    // Collect user symptoms
    while (true) {
        cout << "> ";
        cin >> input;

        if (input == "done") {
            break;
        }

        userSymptoms.push_back(input);
    }

    cout << "\nAnalyzing symptoms...\n\n";

    // Open dataset file
    ifstream file("../dataset/diseases.txt");

    if (!file) {
        cout << "Error opening dataset file.\n";
        return 1;
    }

    string line;

    // Store disease and percentage
    vector<pair<string, double>> results;

    // Read dataset line by line
    while (getline(file, line)) {

        stringstream ss(line);

        string disease;
        getline(ss, disease, ':');

        vector<string> diseaseSymptoms;
        string symptom;

        // Read symptoms for that disease
        while (ss >> symptom) {
            diseaseSymptoms.push_back(symptom);
        }

        int matchCount = 0;

        // Compare user symptoms with disease symptoms
        for (string userSymptom : userSymptoms) {
            for (string diseaseSymptom : diseaseSymptoms) {
                if (userSymptom == diseaseSymptom) {
                    matchCount++;
                }
            }
        }

        if (matchCount > 0) {

            int totalSymptoms = diseaseSymptoms.size();
            double percentage = (double)matchCount / totalSymptoms * 100;

            results.push_back({disease, percentage});
        }
    }

    file.close();

    // If no diseases matched
    if (results.empty()) {
        cout << "No matching conditions found.\n";
        return 0;
    }

    // Sort results by highest percentage
    sort(results.begin(), results.end(),
        [](pair<string,double> a, pair<string,double> b) {
            return a.second > b.second;
        });

    cout << fixed << setprecision(2);

    cout << "\nTop Possible Conditions:\n\n";

    for (int i = 0; i < results.size(); i++) {
        cout << i + 1 << ". " << results[i].first
             << " (" << results[i].second << "% match)\n";
    }

    return 0;
}