#include "App.h"
#include "MainWindow.h"

wxIMPLEMENT_APP(App);

App::App() 
{
	
}
App::~App()
{
	
}

bool App::OnInit()
{
	mainWindow = new MainWindow();
	mainWindow->Show();
	return true;
}