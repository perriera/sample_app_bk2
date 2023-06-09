/**
 * @file sample_app_app.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-05-21
 *
 * @copyright Copyright (c) 2023, your name (you@domain.com)
 * @ref your url
 *
 */

#include <iostream>
#include <sample_app/game/clazz.hpp>

using namespace sample::app;

int main(int, const char**)
{
  try {
    game::Instance game(1, 2);
    game.moves();
    return 0;
  }
  catch (const game::Exception& ex) {
    std::cout << ex << std::endl;
  }
  catch (const std::exception& ex) {
    std::cout << ex.what() << std::endl;
  }
  return -1;
}
