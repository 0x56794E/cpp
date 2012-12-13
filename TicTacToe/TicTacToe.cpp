/**
 * Written by: Vy Thuy Nguyen
 * Date created: March, 2010
 * Last modified: March, 2010
 */

#include "stdafx.h"
#include "Form1.h"

using namespace TicTacToe;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
