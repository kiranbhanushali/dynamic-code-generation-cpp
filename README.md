dynamic code execution in c and c++


using *dlfcn* header file 


## compile:
```
g++ -fPIC main.cpp -ldl
g++ -o libtemp.so -shared lib_temp.cpp

```
## run:
```
./a.out

```



## resources:

[https://man7.org/linux/man-pages/man3/dlopen.3.html](https://man7.org/linux/man-pages/man3/dlopen.3.html)
[https://tldp.org/HOWTO/Program-Library-HOWTO/dl-libraries.html#:~:text=The%20dlopen(3)%20function%20opens,t%20search%20for%20a%20library).](https://tldp.org/HOWTO/Program-Library-HOWTO/dl-libraries.html#:~:text=The%20dlopen(3)%20function%20opens,t%20search%20for%20a%20library).)
[https://gamedev.net/forums/topic/320771-dynamically-loading-libraries/3064159/](https://gamedev.net/forums/topic/320771-dynamically-loading-libraries/3064159/)
