//
// Created by devel on 2021-02-08.
//

#include "util.h"
#include <iostream>
#include <conio.h>

void util::printLogo() {
  printColor("환영합니다.", FOREGROUND_GREEN, SET_BACKGROUND_COLOR);
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

void util::printColor(std::string text, int foreground, int background, bool isInline) {
  HANDLE coutHandle = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(coutHandle, foreground | background);
  std::cout << text;
  if (!isInline) std::cout << std::endl;
  SetConsoleTextAttribute(coutHandle, BACKGROUND_INTENSITY | BACKGROUND_INTENSITY);
}
