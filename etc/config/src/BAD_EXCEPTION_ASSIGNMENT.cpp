// checking for bad_exception assignment operator

#include "config.h"

#if 0   // guard invalid preprocessor symbol below
   // establish a dependency on RUNTIME_IN_STD.cpp
#  ifndef _RWSTD_NO_RUNTIME_IN_STD
#  endif   // _RWSTD_NO_RUNTIME_IN_STD
#endif   // 0

#define TEST_ASSIGNMENT
#define bad_alloc bad_exception
#define main      test_bad_exception_assignment
#include "BAD_ALLOC_ASSIGNMENT.cpp"
#undef main

int main (int argc, char *argv[])
{
    return test_bad_exception_assignment (argc, argv);
}
