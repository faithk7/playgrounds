#include <iostream>
// #include "cppmicroservices/BundleContext.h"
// #include "3p/CppMicroServices/framework/include/cppmicroservices/Any.h"
// #include "3p/CppMicroServices/framework/include/cppmicroservices/Bundle.h"
#include <cppmicroservices/GetBundleContext.h>

void Dummy()
{
  auto context = cppmicroservices::GetBundleContext();
}

// int main() {
//     std::cout << "Hello World" << std::endl;
//     // double salary = wage = 9999; // wage is not declared
//     // int i = { 3.14 }; // implicit conversion happened here
// }