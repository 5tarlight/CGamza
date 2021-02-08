//
// Created by devel on 2021-02-08.
//

#ifndef CGAMZA_UTIL_H
#define CGAMZA_UTIL_H

#pragma once

#include <string>

namespace util {
  void printLogo();
  int getCharInput();
  int getCharInput(std::string question, bool isInline = false);
  void pause();
}

#endif //CGAMZA_UTIL_H
