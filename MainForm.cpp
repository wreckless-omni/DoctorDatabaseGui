#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DatabaseFormProject::MainForm form;
	Application::Run(% form);
}

