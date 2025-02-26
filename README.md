# Parallel Computing Project Implementation Procedure  

### Authors  
- **Aayush Kumar Fabwani (22BCE1763)**  
- **Shreya Sachdeva (22BCE1654)**  

---

## 1. Overview  
This project preprocesses melanoma cancer images using **grayscale conversion, Gaussian blur, sharpening, and histogram equalization**. The preprocessing is implemented both **sequentially and in parallel** to compare execution times. The preprocessed images are then used to train a **Convolutional Neural Network (CNN)** for benign/malignant classification.  

---

## 2. Prerequisites  
Ensure the following libraries are installed before running the project:  

- **Python Libraries**:  
  - `numpy`  
  - `matplotlib`  
  - `tensorflow`  
  - `keras`  
  - `scikit-learn`  

- **C++ Dependencies**:  
  - `g++` (for compiling OpenMP-based parallel processing code)  
  - **Std Lib** (included in this GitHub repository) – used for reading and writing images.  

To install the required Python libraries, run:  
```bash
pip install numpy matplotlib tensorflow keras scikit-learn


## 3. Image Processing  

### 3.1 Load Image Dataset  
- **Download our Dataset**: [Click Here for Dataset](#) *(Taken from the ISIC Dataset)*  
- **Store images in a folder** (e.g., `melanomaDataset/melanoma_cancer_dataset/`).  
- **Create an empty folder** called `outputDataset/` for storing the processed images.  

### 3.2 Implement Image Processing  
Each image undergoes the following transformations:  
✅ **Grayscale Conversion** – Converts RGB images to grayscale.  
✅ **Gaussian Blur** – Reduces noise using a 3×3 Gaussian kernel.  
✅ **Sharpening** – Enhances edges using a sharpening filter.  
✅ **Histogram Equalization** – Improves contrast by redistributing pixel intensities.  

### Run Image Processing Scripts  
- **Parallel Processing using OpenMP** (`net1.cpp`):  
  ```bash
  g++ -fopenmp net1.cpp -o parallel_processing
  ./parallel_processing

## 4. Training CNN for Classification  

Run the Jupyter Notebook (`processed10.ipynb`) for training the CNN model:  
```bash
jupyter notebook processed10.ipynb
