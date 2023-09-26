#include "first_app.h"

// std
#include <cstdlib>
#include <iostream>
#include <stdexcept>

// created with tutorial:
// https://www.youtube.com/watch?v=Y9U9IE0gVHA&list=PL8327DO66nu9qYVKLDmdLW_84-yE4auCR&index=1&t=0s

int main()
{
  lve::FirstApp app{};

  try
  {
    app.run();
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}