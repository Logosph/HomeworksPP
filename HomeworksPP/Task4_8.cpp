#include <iostream>


using namespace std;

void Task4_8() {

    int n = 3, m = 4, r = 2;

    int** a;
    a = (int**)calloc(n, sizeof(*a));
    for (int i = 0; i < n; i++) {
        a[i] = (int*)calloc(m, sizeof(int));
    }

    double** b;
    b = (double**)calloc(m, sizeof(*b));
    for (int i = 0; i < m; i++) {
        b[i] = (double*)calloc(r, sizeof(double));
    }

    double** c;
    c = (double**)calloc(n, sizeof(*c));
    for (int i = 0; i < n; i++) {
        c[i] = (double*)calloc(r, sizeof(double));
    }

    cout << "Enter first table by lines: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!(cin >> a[i][j])) {
                cout << "Wrong input" << endl;
                return;
            }
        }
    }

    cout << "Enter second table by lines: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < r; j++) {
            if (!(cin >> b[i][j])) {
                cout << "Wrong input" << endl;
                return;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < r; j++) {
            double summ = 0;
            for (int k = 0; k < m; k++) {
                summ += a[i][k] * b[k][j];
            }
            c[i][j] = summ;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < r; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    double max_cost = max(c[0][0], max(c[1][0], c[2][0]));
    double min_cost = min(c[0][0], min(c[1][0], c[2][0]));
    double max_comission = max(c[0][1], max(c[1][1], c[2][1]));
    double min_comission = min(c[0][1], min(c[1][1], c[2][1]));
    double summ_cost = c[0][0] + c[1][0] + c[2][0];
    double summ_comission = c[0][1] + c[1][1] + c[2][1];
    double summ = summ_comission + summ_cost;

    cout << "1) max: " << max_cost << "; min: " << min_cost << endl;
    cout << "2) max: " << max_comission << "; min: " << min_comission << endl;
    cout << "3) amount cost: " << summ_cost << endl;
    cout << "4) amount comission: " << summ_comission << endl;
    cout << "5) amount: " << summ << endl;

    free(a);
    free(b);
    free(c);
    return;
}