#include<windows.h>

int main(void)
{
    
    MessageBoxW(
        NULL,
        L"My first message box! ",
        L"Hello world!",
        MB_YESNOCANCEL | MB_ICONEXCLAMATION
    );
    return EXIT_SUCCESS;
}