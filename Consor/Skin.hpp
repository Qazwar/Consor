#ifndef CONSOR_SKIN_H
#define CONSOR_SKIN_H

#include "Units.hpp"

namespace Consor
{
	class ISkin
	{
	public:
		virtual CColour LableForeground() const = 0;
		virtual CColour WindowBorder() const = 0;
	};

	class CDefaultSkin : public ISkin
	{
	public:
		CDefaultSkin()
		{
		}

		virtual CColour LableForeground() const
		{
			return CColour(1, 1, 1);
		}

		virtual CColour WindowBorder() const
		{
			return CColour(1, 1, 1);
		}
	};
}

#endif