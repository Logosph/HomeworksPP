#include <Windows.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

void draw_star(HWND hwnd, HDC hdc, HPEN pen, double x, double y) {
    POINT* arr = new POINT[11];
    int n = 5;
    double R = 8, r = 16;
    double alpha = -12 * M_PI / 24;
    double x0 = x, y0 = y;
    double a = alpha, da = M_PI / n, l;
    for (int k = 0; k < 2 * n + 1; k++)
    {
        l = k % 2 == 0 ? r : R;
        arr[k].x = x0 + l * cos(a);
        arr[k].y = y0 + l * sin(a);
        a += da;
    }
    Polygon(hdc, arr, 11);
}

void Task4_4() {
    system("cls");
    bool flag = true;
    string end;
    for (int i = 0; i < 25; i++) { cout << endl; }

    HWND hwnd = GetConsoleWindow();
    HDC hdc = GetDC(hwnd);
    HPEN pen = CreatePen(PS_SOLID, 2, RGB(255, 255, 255));
    SelectObject(hdc, pen);

    for (int i = 0; i < 13; i++) {
        for (double j = 0; j < 40; j += 0.1) {
            MoveToEx(hdc, 0, 0 + j + 40*i, NULL);
            LineTo(hdc, 1000, 0 + j + 40*i);
        }
        DeleteObject(pen);
        HPEN pen = CreatePen(PS_SOLID, 2, RGB(flag ? 177 : 255, flag ? 35 : 255, flag ? 50: 255));
        flag = !flag;
        SelectObject(hdc, pen);
    }

    DeleteObject(pen);
    pen = CreatePen(PS_SOLID, 2, RGB(0, 38, 100));
    SelectObject(hdc, pen);

    for (int i = 0; i < 7; i++) {
        for (double j = 0; j < 40; j += 0.1) {
            MoveToEx(hdc, 0, 0 + j + 40 * i, NULL);
            LineTo(hdc, 400, 0 + j + 40 * i);
        }
    }

    for (int x = 25; x <= 400; x += 50) {
        for (double y = 40 * 7 / 12.0f; y <= 40 * 7; y += 40 * 7 / 6.0f) {
            draw_star(hwnd, hdc, pen, x, y);
        }
    }

    cin >> end;
    return;
}