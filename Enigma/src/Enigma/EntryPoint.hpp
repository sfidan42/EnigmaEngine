#include "App.hpp"

extern Enigma::App *Enigma::CreateApp();

int main(void)
{
	auto app = Enigma::CreateApp();
	app->Run();
	delete app;
	return (0);
}
