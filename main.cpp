#include "main.h"


int main() {
  setlocale(0, "");
	int n = 0;
  cin >> n;
	Tree** elem = new Tree*[n];
	for(int i = 0; i < n; i++) {
		int a = 0;
    cin >> a;
		if (a) {
			elem[i] = new Tree(i + 1, elem[a - 1]);
    }
	else
    elem[i] = new Tree(i + 1, NULL);
  }
	for(int i = 0; i < n; i++) {
		elem[i]->printChildren();
	}

  if (n){
    cout << "\n\nDirect form: ";
    elem[0]->printValueOne();
    cout << "\n\n";

    cout << "\n\nReverse form: ";
    elem[0]->printValueTwo();
    cout << "\n\n";

    cout << "\n\nSymmetrical form: ";
    elem[0]->printValueThree();
    cout << "\n\n";

    for (int i = 0; i < n; i++) delete[] elem[i];
    delete[] elem;
  }

	system("pause");
	return 0;
}