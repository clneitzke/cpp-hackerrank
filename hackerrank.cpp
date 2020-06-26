/**
 * 
 * Playground for hackerrank testing C++
 * Cleber Neitzke
 * 
 **/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

//#include "include/crow_all.h"

using namespace std;


/** ------------------------------------------ **/
int variable_size_array()
{

   // 2 (x nr rows) 2 (x results) 
   // 3 1 5 4
   // 5 1 2 8 9 3
   // 0 1 ( question 1)
   // 1 3 ( question 2)

	int n, q;
	cin >> n >> q; // busca rows e querye

	// cria vetor bidimensional
	vector<vector<int>> a(n);

	for (int i = 0; i < n; i++) { // LOOP N
		// get the length k of the vector at a[i]
		int k;
		cin >> k; // primeiro parametro é o tamanho

		// preenche vetor com valor data
		a[i].resize(k);
		for (int j = 0; j < k; j++) { // LOOP K
			cin >> a[i][j];
		}
	}

	// faz a validação
	for (int q_num = 0; q_num < q; q_num++) { // LOOP Q
		int i, j;
		cin >> i >> j;
		cout << a[i][j] << endl;
	}

	return 0;
    
}

/** ------------------------------------------ **/
int arrays() {
    
    int nr;
    cin >> nr;

    int arr[nr];
    
    for (int i = 0; i < nr ; i++) {
        cin >> arr[i];
    }

    for (int i = nr-1; i >= 0 ; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}

/** ------------------------------------------ **/
void pointers_update(int *a,int *b) {

    int val1  = *a + *b;
    int val2  = *a - *b;
    if(val2<0) val2 *= -1;

    *a = val1;
    *b = val2;
}

/** ------------------------------------------ **/
int pointers() {
    
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    pointers_update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

/** ------------------------------------------ **/
int functions_max_of_four(int a, int b, int c, int d) {

    int max = a;

    if(a >= b && a >= c && a >= d ) max = a;
    if(b >= a && b >= c && b >= d ) max = b;
    if(c >= b && c >= a && c >= d ) max = c;
    if(d >= b && d >= c && d >= a ) max = d;

    return max;
}

/** ------------------------------------------ **/
int functions() {
    
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = functions_max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

/** ------------------------------------------ **/
int for_loop() {
    
    int n1 = 0;
    int n2 = 0;

    cin >> n1 >> n2;

    for(int i = n1; i <= n2; i++) {

        if( i == 1 ) {
            cout << "one" << endl;    
        } else if ( i == 2 ) {
            cout << "two" << endl;    
        } else if ( i == 3 ) {
            cout << "three" << endl;    
        } else if ( i == 4 ) {
            cout << "four" << endl;    
        } else if ( i == 5 ) {
            cout << "five" << endl;    
        } else if ( i == 6 ) {
            cout << "six" << endl;    
        } else if ( i == 7 ) {
            cout << "seven" << endl;    
        } else if ( i == 8 ) {
            cout << "eight" << endl;    
        } else if ( i == 9 ) {
            cout << "nine" << endl;    
        } else if ( i % 2 ) {
            cout << "odd" << endl;    
        } else {
            cout << "even" << endl;    
        }

    }    

    return 0;
}

/** ------------------------------------------ **/
int basic_data_types() {
  
    int val1 = 3; 
    long val2 = 12345678912345;
    char val3 = 'a';
    float val4 = 334.23;
    double val5 = 14049.30493;

    scanf("%d %ld %c %f %lf", &val1, &val2, &val3, &val4, &val5);
    
    printf("%d\n" , val1);
    printf("%ld\n", val2);
    printf("%c\n" , val3);
    printf("%f\n" , val4);
    printf("%lf\n", val5);

    return 0;

}

/** ------------------------------------------ **/
int conditional_statement() {
    
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if( n == 1 ) {
        cout << "one";
    } else if (  n == 2 ) {
        cout << "two";
    } else if (  n == 3 ) {
        cout << "three";
    } else if (  n == 4 ) {
        cout << "four";
    } else if (  n == 5 ) {
        cout << "five";
    } else if (  n == 6 ) {
        cout << "six";
    } else if (  n == 7 ) {
        cout << "seven";
    } else if (  n == 8 ) {
        cout << "eight";
    } else if (  n == 9 ) {
        cout << "nine";
    } else {
        cout << "Greater than 9";
    }
    
    return 0;
}
/** ------------------------------------------ **/
int input_output() {

    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    cin >> n1 >> n2 >> n3;
    cout << (n1 + n2 + n3);

    return 0;
}

/** ------------------------------------------ **/
int hello_world () {
    
    cout << "Hello, World!" ;

    return 0;
}

/** ------------------------------------------ **/
int main() {

    hello_world();

    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    return 0;
    
}


