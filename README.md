# ml2cpp
Machine Learning Models Deployment using C++ Code Generation


This is an attempt to design a software-based deployment system for all kinds of models relying on the existing abstract layers of the sklearn2sql framework. 

The goal is to implement a simple deployment system based on the most hardware-friendly high level programming language (C++). This allows for example to deploy an XGBoost, scikit-learn  or a caret model  on small Edge controllers like STM32 or esp32 as well as a standard cloud virtual machine at the highest possible speed.

The C++ code contains everything needed to compute the predicted values of the model, no external library is needed, and can be compiled for any target hardware platform using any starndard C++ compiler on the market.

The automatically generated code is plain STL C++-17, designed to  maintain a strong semantic mapping with the model and allows auditing , debugging, benchmarking and reporting. 

To summarize, ml2cpp is for a CPU what sklearn2sql is for a database and supports the exact same set of machine learning models : scikit-learn, XGboost , LightGBM, Caret, Keras and PyTorch.
