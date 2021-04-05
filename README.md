dynamic code execution in c and c++


using dlfcn header file 


compile:
```
g++ -fPIC main.cpp -ldl
g++ -o libtemp.so -shared lib_temp.cpp

```
run:
```
./a.out

```
