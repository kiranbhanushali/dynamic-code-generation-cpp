#include <iostream>
#include <fstream>
#include <dlfcn.h>
#include <stdlib.h>


using namespace std;

int main (  ) {


    void * handle;
    void (*func) (const char * );

    handle = dlopen("./libtemp.so",RTLD_LAZY);
     if (!handle) {
        /* fail to load the library */
        fprintf(stderr, "Error:ii %s\n", dlerror());
        return EXIT_FAILURE;
    }


    *(void **) (&func) = dlsym(handle,"name");
    if( !func ) {
         fprintf(stderr, "Error: u %s\n", dlerror());
        dlclose(handle);
        return EXIT_FAILURE;
    }
    const char * c = "kiran";
    func(c);
    dlclose(handle);



    return 0;
}
