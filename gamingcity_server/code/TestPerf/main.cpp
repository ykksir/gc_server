#include "TestPerfManager.h"

int main(int argc, char* argv[])
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	TestPerfManager theApp;
	theApp.startup();

	system("pause");

	return 0;
}