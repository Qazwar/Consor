#ifndef CONTROLS_PASSWORDBOX_H
#define CONTROLS_PASSWORDBOX_H

#include "../Control.hpp"
#include "TextBox.hpp"
#include <string>

namespace Consor
{
	/// The same as a TextBox, but is censored.
	class PasswordBox : public TextBox
	{
	protected:
		char _PasswordChar;
	public:
		PasswordBox();
		/// `TextBox` uses `GetText()` to render the text.  This re-implements that function to censor the password.
		virtual std::string GetText();
		/// Get the entered string, uncensored.
		virtual std::string GetPassword();
		/// Set the char used to censor the password.
		virtual void SetPasswordChar(char Letter);
	};
}

#endif
