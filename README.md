# MedIntel – AI + Computer Vision Medical Assistant

MedIntel is a **multimodal AI system** that combines:

* Symptom-based disease prediction (C++)
* Medical image processing (OpenCV)
* AI-based classification (Python)

to provide early-stage medical insights.

⚠️ This project is for **educational purposes only** and is **not a medical diagnostic tool**.

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

* Image-based prediction (Normal / Abnormal)
* Integrated with preprocessing pipeline
* Lightweight ML model (scikit-learn)

---

## System Pipeline

```
User Input (Symptoms / Image)
            ↓
   C++ Symptom Analyzer
            ↓
   OpenCV Image Processing
            ↓
   Feature Extraction
            ↓
      AI Prediction
            ↓
 Final Output (Ranked + Classified)
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

##How to Run

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

## Future Improvements (GSoC Direction)

* Real medical datasets (skin disease, X-ray)
* Deep learning models (CNN)
* Integration with OpenCV C++ backend
* Web-based interface
* API for healthcare tools

---

## Contribution

Contributions are welcome!
Feel free to open issues or submit pull requests.

---

## Author

Fathima Wazna
AIU Student | AI + Healthcare Enthusiast
