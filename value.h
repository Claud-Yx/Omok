#pragma once

#include <string>
#include <vector>

#define TITLE_SIZE 30

using namespace std;

string drawLine(int);

size_t drawTitle(string);
string getIndentSpace(int);

int drawOptions(string, vector<string>, int placed_option=0);