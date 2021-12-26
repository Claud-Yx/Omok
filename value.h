#pragma once

#include <string>
#include <iostream>
#include <stdarg.h>

#define TITLE_SIZE 30

using namespace std;

string drawLine(int);

int drawTitle(string);
int drawOptions(string, ...);