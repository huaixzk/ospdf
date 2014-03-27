#include <stdio.h>
#include <dlfcn.h>

int main(int argc, char **argv)
{
    char *error = NULL;
    void *handle = NULL;
    void (*fun1)();
    typedef char *(*fun2)(char *);

    // load so file
    
    handle = dlopen("/huaixiaoz/ospdf/code.so",RTLD_LAZY);
    error = dlerror();
    if(error != NULL)
    {
        printf("Fail to load so file.\n[%s]\n",error);
        return -1;
    }
    
    //get function address
    fun1 = (void (*))dlsym(handle,"fun1");
    error = dlerror();
    if (error != NULL)
    {
        printf("Fail to get functiom address.\n[%s]\n",error);
        return -1;
    }

    // implement the function
     fun1();

     // get function address
     fun2 test_fun2 = (fun2)dlsym(handle,"fun2");
     error = dlerror();
     if (error != NULL)
     {
        printf("Fail to get function address.\n[%s]]n",error);
        return -1;
     }

     // implement the function
     char test[10] = "test.so";
     char *test_return = test_fun2(test);
     printf("%s\n",test_return);

    // decrease amount of reference
    dlclose(handle);
    
    return 0;
}
