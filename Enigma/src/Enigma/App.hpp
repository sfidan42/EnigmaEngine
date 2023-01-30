#ifndef APP_HPP
# define APP_HPP

#include "../../include/ft_printf/ft_printf.h"

namespace Enigma
{
	class App
	{
		public:
			App();
			virtual	~App();
			void	Run();
	};

	App	*CreateApp();
}

#endif