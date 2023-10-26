#include "MyForm.h"


using namespace System;

using namespace System::Windows::Forms;

[STAThread]

int main()

{

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Controller* controller = new Controller();
    TareaProgramada3::MyForm form(controller);
    Application::Run(% form);

    return 0;
}