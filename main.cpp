#include "fmPractice.h"
#include <iostream>

int main()
{
  try
  {
      runFmPractice();
  }
  catch (const std::exception& e)
  {
    std::cerr << "Caught exception:" << std::endl
              << e.what() << std::endl;
  }
  catch (...)
  {
    std::cerr << "Caught unknown exception" << std::endl;
  }

  return EXIT_SUCCESS;
}
