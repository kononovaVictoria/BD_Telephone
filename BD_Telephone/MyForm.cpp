#include "MyForm.h"
//#include "EditModel.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Forms::MyForm form;   //Forms - name of your project
    Application::Run(% form);
}