#include "SandBox.hpp"

SandBox::SandBox() { }

SandBox::~SandBox() { }

Enigma::App	*Enigma::CreateApp()
{
	return (new SandBox());
}
