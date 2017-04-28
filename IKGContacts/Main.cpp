#include "mainwindow.h"

using namespace IKGContacts;

[STAThreadAttribute]
int main()//array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the main window and run it
	Application::Run(gcnew MainWindow());

	return 0;
}
