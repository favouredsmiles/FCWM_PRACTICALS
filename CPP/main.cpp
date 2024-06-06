#include <iostream>

using namespace std;

int rws;
int cls;
string oprnd;

int main() {
	system("color f6");
    cout << "Input the value for number of Rows: ";
    cin >> rws;
    cout << "Input the value for number of Columns: ";
    cin >> cls;

    int mtx1[rws][cls];
    int mtx2[rws][cls];
    int output[rws][cls];

    cout << endl;
    cout << "Input " << rws << " x " << cls << " 1st matrix:" << endl;
    for (int i = 1; i <= rws; i++) {
        for (int j = 1; j <= cls; j++) {
            cout << "Supply value [" << i << "][" << j << "]: ";
            cin >> mtx1[i][j];
        }
    }

    cout << endl;
    cout << "Input " << rws << " x " << cls << " 2nd matrix:" << endl;
    for (int i = 1; i <= rws; i++) {
        for (int j = 1; j <= cls; j++) {
            cout << "Supply value [" << i << "][" << j << "]: ";
            cin >> mtx2[i][j];
        }
    }

    cout << endl;
    cout << "Select Operator [-,/,+,*]: ";
    cin >> oprnd;

    cout << endl;
    cout << "First Matrix:" << endl;
    for (int i = 1; i <= rws; i++) {
        for (int j = 1; j <= cls; j++) {
            cout << mtx1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Second Matrix:" << endl;
    for (int i = 1; i <= rws; i++) {
        for (int j = 1; j <= cls; j++) {
            cout << mtx2[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 1; i <= rws; i++) {
        for (int j = 1; j <= cls; j++) {
            if (oprnd == "+") {
                output[i][j] = mtx1[i][j] + mtx2[i][j];
            } else if (oprnd == "-") {
                output[i][j] = mtx1[i][j] - mtx2[i][j];
            } else if (oprnd == "/") {
                output[i][j] = mtx1[i][j] / mtx2[i][j];
            } else if (oprnd == "*") {
                output[i][j] = mtx1[i][j] * mtx2[i][j];
            } else {
                cout << "Invalid Operator Selected!" << endl;
                return 0;
            }
        }
    }




    cout << endl;
    cout << "Operator Selected: " << oprnd << endl;
	cout << "Result Matrix is: " << endl;
    for (int i = 1; i <= rws; i++) {
        for (int j = 1; j <= cls; j++) {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }

    return 1;
}
