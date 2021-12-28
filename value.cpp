#include <iostream>
#include <algorithm>
#include "value.h"

string drawLine(int num) {
	if (num <= 0)
		return "";

	string line{};

	for (int i = 0; i < num; ++i)
		line.append("=");

	return line;
}

size_t drawTitle(string title) {
	size_t line_size(TITLE_SIZE - title.length());

	string front_line{};
	string back_line{};

	back_line.append(" ");

	for (int i = 0; i < line_size / 2 - 1; ++i) {
		front_line.append("=");
		back_line.append("=");
	}

	front_line.append(" ");

	if (line_size & 1)
		back_line.append("=");

	cout << front_line << title << back_line << endl;

	return front_line.length();
}

string getIndentSpace(int indent)
{
	string space{};
	if (indent)
		for (int i = 0; i < indent; ++i)
			space.append(" ");
	return space;
}

int drawOptions(string indent_space, vector<string> options, int placed_option)
{
	vector<string>::iterator option_iter;

	for (option_iter = options.begin(); option_iter != options.end(); ++option_iter) {
		if (distance(options.begin(), option_iter) == placed_option) {
			cout << indent_space << "\b\b¢º " << *option_iter << endl;
		}
		else
			cout << indent_space << *option_iter << endl;
	}

	return 0;
}
