#include "../../Enigma/src/Enigma.hpp"
#include "App.hpp"

App::App() { }

App::~App() { }

int	main(void)
{
	App	*app = new App();
	app->Run();
	delete app;
}