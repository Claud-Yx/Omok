#include "MenuManager.h"

using namespace std;

int main() {

	drawOptions(getIndentSpace(drawTitle("hello")), 
		{ "start", "score", "exit" });

	return 0;
}