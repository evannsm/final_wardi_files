## Using Ctypes for Nonlinear Predictor
1. run "gcc -shared -o libwork.so -fPIC nonlinear_predictor_final.c" in order to compile the code and generate the shared library 
2. make sure you have the right address of the shared library in the code in line 58: 
    self.my_library = ctypes.CDLL('/home/username//ros2_ws/src/package_name/package_name/libwork.so')  # Update the library filename
    2a.  Just go on VSCode and right-click on the libwork.so file and click on copy path (NOT relative path)
    2b. ORRR: go to the directory where libwork.so is in your bash shell and enter "pwd" and copy the result
## Using Pre-trained Neural Network Dictionaries for NN Predictors
1. make sure the address of the pytorch dictionaries for each of the neural networks is accurate in lines #200/202, 220/222, 255/257, 500/502


