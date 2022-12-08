#include <iostream>
#include <windows.h>
#include <string>
#include <math.h>

using namespace std;

void Task4_5() {
    system("cls");
    string a;
    for (int i = 0; i < 20; i++) { cout << endl; }
    double scale = 4;
    double k = 0;
    HWND hwnd = GetConsoleWindow();
    HDC hdc = GetDC(hwnd);
    HPEN pen = CreatePen(PS_SOLID, 2, RGB(255, 255, 255));
    SelectObject(hdc, pen);
    MoveToEx(hdc, 0, 85*scale, NULL);
    LineTo(hdc, 200*scale, 85*scale);
    MoveToEx(hdc, 100*scale, 0, NULL);
    LineTo(hdc, 100*scale, 170*scale);
    for (double x = -10; x < 10; x += 0.01) {
        MoveToEx(hdc, scale*(100 + 10*x), scale*(85 + 10*sin(x)), NULL);
        LineTo(hdc, scale*(100 + 10*x), scale*(85 + 10*sin(x)));
        DeleteObject(pen);
        HPEN pen = CreatePen(PS_SOLID, 2, RGB(
            ((int)k % 6 == 0 ? 127 : (int)k % 12 < 6 ? 255 : 0),
            ((int)(k + 4) % 6 == 0 ? 127 : (int)(k + 4) % 12 < 6 ? 255 : 0),
            ((int)(k + 8) % 6 == 0 ? 127 : (int)(k + 8) % 12 < 6 ? 255 : 0)
        ));
        SelectObject(hdc, pen);
        k += 0.01;
    }

    cin >> a;
}