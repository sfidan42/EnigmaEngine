#ifndef APP_HPP
# define APP_HPP

#include <unistd.h>

namespace Enigma
{
	class App
	{
		public:
			App();
			virtual	~App();
			void	Run();
	};
}

#endif