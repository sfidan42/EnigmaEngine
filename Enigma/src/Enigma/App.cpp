#include "App.hpp"

namespace Enigma
{
	App::App() { }

	App::~App() { }

	void	App::Run()
	{
		ft_printf("Hello! Here I am starting the app.\n");
		sleep(3);
		ft_printf("Hello! Here I am stopping the app.\n");
		sleep(1);
	}
}