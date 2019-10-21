Public repository of Xcode C++ files.

### Running files from Terminal

Navigate to the folder where the cpp file that you'd like to run lives. Compile the code using the following command:

	$ g++ -isysroot`xcrun --show-sdk-path` main.cpp

Now you should see an executable file called `a.out` available. To run this file, use the following command:

	$ ./a.out

	
