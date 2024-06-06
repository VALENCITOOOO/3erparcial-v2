#include <iostream>
using namespace std;
int main()
{
    int terminos;
	cout<<"cuantos terminos desea: ";
	cin>>terminos;

    int i;
	for (int i = 0; i < terminos; ++i) {
        cout << i * 5 << " ";
    }

    cout << endl;
    return 0;
}