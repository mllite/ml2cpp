# ml2cpp
Machine Learning Models Deployment using C++ Code Generation


This is an attempt to design a software-based deployment system for all kinds of models relying on the existing abstract layers of the sklearn2sql framework. 

The goal is to implement a simple deployment system based on the most hardware-friendly high level programming language (C++). This allows for example to deploy an XGBoost, scikit-learn  or a caret model  on small Edge controllers like STM32 or esp32 as well as a standard cloud virtual machine at the highest possible speed.

The C++ code contains everything needed to compute the predicted values of the model, no external library is needed, and can be compiled for any target hardware platform using any starndard C++ compiler on the market.

The automatically generated code is plain STL C++-17, designed to  maintain a strong semantic mapping with the model and allows auditing , debugging, benchmarking and reporting. 

The generated code does/will not rely on any kind of external library (not use BLAS or tensorflow or ...) and will not need compiler specific flags. It is generated such that any C++ code can integrate it without specific change (the model code is a namespace).

To summarize, ml2cpp is for a CPU what sklearn2sql is for a database and supports the exact same set of machine learning models : scikit-learn, XGboost , LightGBM, Caret, Keras and PyTorch.

## Useful links

1.  Pete Warden : CogX 2018 - Machine Learning on Tiny, Cheap Devices | CogX
  https://www.youtube.com/watch?v=jQ7YOQ0NxTE
2. Pete Warden : Why the Future of Machine Learning is Tiny
  https://petewarden.com/2018/06/11/why-the-future-of-machine-learning-is-tiny/
3. Matthew Stewart : Tiny Machine Learning: The Next AI Revolution. The bigger model is not always the better model
  https://towardsdatascience.com/tiny-machine-learning-the-next-ai-revolution-495c26463868
