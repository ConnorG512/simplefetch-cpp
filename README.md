## **Simplefetch-cpp**
#### _A fetch application written in C++, without any of the fluff._

A fetch application to pull user statistics such as the hostname, RAM usage and Kernel version (with more in the future).

### Downloading source:
Clone the github repo:
```
git clone git@github.com:ConnorG512/simplefetch-cpp.git
``` 

### Compiling:

Use cd to move into the cloned directory:
```
cd ./simplefetch-cpp
```

_Compile a release build:_

```
mkdir -p ./build && g++ -O2 ./src/*.cpp -o ./build/simplefetchcpp
```

#### Or

_Compile with debug symbols:_
```
mkdir -p ./build && g++ -g ./src/*.cpp -o ./build/simplefetchcpp
```

### Running:
```
./build/simplefetchcpp
```