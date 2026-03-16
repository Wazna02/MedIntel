# MedIntel

**AI Symptom Analyzer built with C++**

MedIntel is a lightweight command-line medical symptom analyzer that compares user-entered symptoms with a disease dataset and predicts possible conditions based on symptom matching.

The system calculates **match percentages** and ranks diseases to suggest the most likely conditions.

⚠️ This project is for **educational purposes only** and is **not a medical diagnostic tool**.

---

## Features

* Symptom input via command line
* Dataset-based disease knowledge
* Symptom matching algorithm
* Percentage-based diagnosis scoring
* Ranked list of possible conditions
* Simple and lightweight C++ implementation

---

## Project Structure

```
MedIntel
│
├── cpp_engine
│   └── main.cpp          # Core analysis engine
│
├── dataset
│   └── diseases.txt      # Disease–symptom dataset
│
├── docs                  # Documentation (future)
│
├── LICENSE
└── README.md
```

---

## How It Works

1. The user enters symptoms in the terminal.
2. The program loads disease data from the dataset.
3. It compares user symptoms with disease symptoms.
4. A **match percentage** is calculated.
5. Diseases are **ranked from most likely to least likely**.

Example logic:

```
Match % = (matched symptoms / total disease symptoms) × 100
```

---

## How to Run

Navigate to the project folder:

```
cd cpp_engine
```

Compile the program:

```
g++ -std=c++11 main.cpp -o medintel
```

Run the program:

```
./medintel
```

Windows (PowerShell):

```
.\medintel
```

---

## Example Usage

```
Enter your symptoms (type 'done' to finish):

> fatigue
> cough
> done
```

Output:

```
Analyzing symptoms...

Top Possible Conditions:

1. Flu (50.00% match)
2. COVID19 (40.00% match)
3. CommonCold (33.33% match)
```

---

## Dataset Example

```
Flu: fever cough fatigue chills
CommonCold: cough sneezing runny_nose
COVID19: fever cough fatigue loss_taste loss_smell
```

---

## Technologies Used

* **C++**
* Standard Library (STL)
* File Handling
* Vector & Algorithm Libraries

---

## Future Improvements

* Larger medical dataset
* Symptom suggestion system
* Interactive diagnosis questions
* GUI version of MedIntel
* Machine learning–based predictions

---

## Author

Developed as a learning project in **C++ and AI system design**.

---

