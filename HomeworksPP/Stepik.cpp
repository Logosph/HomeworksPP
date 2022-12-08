//#include <iostream>
//
//using namespace std;
//
//char* resize(const char* str, unsigned size, unsigned new_size)
//{
//    char* res = new char[new_size];
//    int k = 0;
//    while (k < size && k < new_size) {
//        res[k] = str[k];
//        k++;
//    }
//    return res;
//}
//
//char* getline()
//{
//    char c = '\0';
//    int k = 10;
//    int index = 0;
//    char* text = new char[k];
//    while (cin.get(c)) {
//        text[index] = c;
//        index++;
//        if (index + 1 == k) {
//            text = resize(text, k, k + 10);
//            k += 10;
//        }
//    }
//    return text;
//}
//
//void Stepik() {
//    cout << getline() << endl;
//}
