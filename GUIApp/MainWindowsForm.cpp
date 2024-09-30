#include "MainWindowsForm.h";
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//GUIApp is your project name
	GUIApp::MainWindowsForm form;
	Application::Run(% form);
}