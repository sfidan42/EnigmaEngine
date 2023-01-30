#include "Application.hpp"

namespace Enigma
{
	Application::Application()
	{
		;
	}

	Application::~Application()
	{
		;
	}

	void	Application::Run()
	{
		while (true)
		{
			write(1, "Hello\n", 7);
			sleep(1);
		}	
	}
}