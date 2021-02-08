//
// Created by devel on 2021-02-08.
//

#include "util.h"
#include <iostream>
#include <conio.h>

void util::printLogo() {
  std::cout << "감자에 오신 것을 환영합니다." << std::endl;
  pause();
}

int util::getCharInput() {
  return getch();
}

int util::getCharInput(std::string question, bool isInline) {
  std::cout << question;
  if (!isInline) std::cout << std::endl;
  return getCharInput();
}

void util::pause() {
  getCharInput("계속하려면 아무 키나 누르세요.");
}
