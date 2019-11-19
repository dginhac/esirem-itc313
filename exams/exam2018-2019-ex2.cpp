#include<iostream> 
#include <math.h>
#include <string.h>
using namespace std; 


class Coffre {
private :
	int m_nb; // longueur
	int *m_code; // chaine

public:
	// Question 1
	Coffre() {
		m_nb = 4;
		m_code = new int[m_nb];
		for (int i=0;i<m_nb; i++) 
			*(m_code +i) = 0;	
	}
	// Question 2
	Coffre(int nb, int *code) {
		m_nb = nb;
		m_code = new int[m_nb];
		for (int i=0;i<m_nb; i++) 
			*(m_code +i) = *(code + i);
	}
	// Question 3
	Coffre(const Coffre& c) {
        m_nb = c.m_nb;
        m_code = new int[m_nb];
		for (int i=0;i<m_nb; i++) 
			*(m_code +i) = *(c.m_code + i);
        cout << "Copy constructor" << endl;
    }
    // Question 4
	~Coffre() {
		cout << "Destroy " << m_nb << endl;
		m_nb = 0;
		delete [] m_code;
		m_code = NULL;
	} 
	// Question 5
	void change(int *code) {
		int i = 0;
		for (i=0;i<m_nb; i++) 
			*(m_code +i) = *(code + i);
	}
	// Question 6
	void change(int nb, int *code) {
		delete [] m_code;
		m_nb = nb;
        m_code = new int(m_nb);
		int i = 0;
		for (i=0;i<m_nb; i++) 
			*(m_code +i) = *(code + i);
	}
	// Question 7
	void reset() {
		int code[4] = {0, 0, 0, 0};
		change(4,code);
	}
	// Question 8
	bool verif(int *code) {
		for (int i=0;i<m_nb; i++) {
			if (*(m_code +i) != *(code + i))
				return false;
		} 
		return true;
	}
	// Question 9
	bool operator == (int *code) {
		return verif(code);
	}
	void display() {
		cout << m_nb << " : " ;
    	int i;
    	for (i=0;i<m_nb; i++) {
    		cout << *(m_code +i) << " ";
    	}
    	cout << endl;
	}  
}; 



 
int main()
{
	// Question 1
	Coffre c1;
	c1.display();
	// Question 2
	int code[6] = {1,2,6,5,7,8};
	Coffre c2(6, code);
	c2.display();
	// Question 3
	Coffre c3 = c2;
	c3.display();
	// Question 5
	int code2[3] = {8, 5, 7};
	for (int i =0; i<6; i++) {
		if (i%2)
			*(code +i) = *(code +i) + 1;
		else 
			*(code +i) = *(code +i) - 1;
	}
	c2.change(code);
	c2.display();
	// Question 6
	c2.change(3, code2);
	c2.display();

	// Question 8
	cout<< "verif: " << c2.verif(code2) << endl;
	// Question 9
	if (c2 == code2) 
		cout<< "verif: ok"  << endl;
	else 
		cout << "verif: pas ok"  << endl;

	*code2 = 2;
	cout<< "verif: " << c2.verif(code2) << endl;

	if (c2 == code2) 
		cout<< "verif2: ok"  << endl;
	else 
		cout << "verif2: pas ok"  << endl;

	// Question 7
	c2.reset();
	c2.display();

 
    return 0;
}