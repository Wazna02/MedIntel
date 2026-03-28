# MedIntel – AI + Computer Vision Medical Assistant

This project is being developed as part of my preparation for Google Summer of Code (GSoC) 2026.

It focuses on building a modular, real-world computer vision pipeline for medical image analysis using OpenCV, combined with lightweight AI techniques.

MedIntel is a **multimodal AI system** that combines:

* Symptom-based disease prediction (C++)
* Medical image processing (OpenCV)
* AI-based classification (Python)

to provide early-stage medical insights.

⚠️ This project is for **educational purposes only** and is **not a medical diagnostic tool**.

---

## Motivation

Medical image analysis is often complex and inaccessible to beginners. While OpenCV provides powerful tools, there is a lack of structured, end-to-end pipelines demonstrating real-world applications.

MedIntel aims to bridge this gap by providing a modular and beginner-friendly pipeline that connects image preprocessing, feature extraction, and AI-based analysis into a unified workflow.

This project is designed to be modular and adaptable, making it suitable for extension into different domains and open-source ecosystems.

---

## Features

### 🔹 C++ Symptom Analyzer

* Command-line symptom input
* Dataset-based disease prediction
* Match percentage scoring
* Ranked disease suggestions

### 🔹 OpenCV Image Processing

* Grayscale conversion
* Noise reduction (Gaussian Blur)
* Contrast enhancement
* Edge detection
* Image segmentation
* Contour detection

### 🔹 AI Classification

* Model: Logistic Regression / Support Vector Machine (SVM)
* Input: Extracted feature vectors from processed images
* Output: Binary classification (Normal / Abnormal)

---

## System Pipeline

```
Input (Symptoms / Medical Image)
            ↓
   Preprocessing (OpenCV)
   - Grayscale normalization
   - Noise reduction
   - Contrast enhancement
            ↓
   Feature Extraction
   - Edge detection
   - Contours
   - Segmentation
            ↓
   Feature Vector Generation
            ↓
   AI Classification (scikit-learn)
            ↓
 Final Output (Prediction + Ranking)
```

---

## Demo

### Input

![input](sample.jpg)

### Processed Output

![edges](edges.png)
![contours](contours.png)

### AI Result

```
AI Medical Analysis Result
Prediction: Normal
```

---

## Project Structure

```
MedIntel/
│
├── cpp_engine/
│   └── main.cpp                # C++ symptom analysis engine
│
├── src/
│   └── advanced_image_processor.py   # OpenCV processing module
│
├── ai_model/
│   └── predictor.py           # AI classification model
│
├── dataset/
│   └── diseases.txt
│
├── docs/
│
├── main.py                    # Python integration entry point
├── sample.jpg                 # Test image
├── edges.png                  # Output (generated)
├── contours.png               # Output (generated)
└── README.md
```

---

## How to Run

### 1. Install dependencies

```
pip install opencv-python matplotlib scikit-learn numpy
```

---

### 2. Run the system

```
python main.py
```

Enter image path:

```
sample.jpg
```

---

### 🔹 3. Run C++ engine (optional)

```
cd cpp_engine
g++ -std=c++11 main.cpp -o medintel
./medintel
```

Windows (PowerShell):

```
.\medintel
```

---

## How It Works

### C++ Module

* Matches symptoms with dataset
* Calculates percentage similarity
* Ranks diseases

### OpenCV Module

* Enhances and processes images
* Extracts key visual features

### AI Module

* Uses processed image data
* Predicts condition category

---

## Evaluation

The system is evaluated using:

- Classification accuracy
- Precision and recall
- Visual inspection of preprocessing results

---

## Future Improvements (GSoC Direction)

* Real medical datasets (skin disease, X-ray)
* Deep learning models (CNN)
* Integration with OpenCV C++ backend
* Web-based interface
* API for healthcare tools

---

## GSoC Goals

- Improve modularity of the pipeline
- Integrate real-world medical datasets
- Enhance feature extraction techniques
- Expand AI model performance
- Contribute improvements back to the OpenCV ecosystem

---

## Contribution

Contributions are welcome!
Feel free to open issues or submit pull requests.

---

## Author

Fathima Wazna
AIU Student | AI + Healthcare Enthusiast
