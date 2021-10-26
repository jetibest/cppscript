#include "object.h"

void foo()
{
    std::cout << "thread ran foo()" << std::endl;
}


void some_function()
{
	std::cout << "object -> some_function()" << std::endl;
    
    std::thread first(foo);
    std::thread second(foo);
    
    first.join();
    second.join();
}
