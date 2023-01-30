#include "App.hpp"

namespace Enigma
{
	App::App() { }

	App::~App() { }

	void	App::Run()
	{
		write(1, "Hello! Here I am starting the app.\n", 36);
		sleep(3);
		write(1, "Hello! Here I am stopping the app.\n", 36);
		sleep(1);
	}
}