#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

// void Check(int &a,int &a1, int &b1, int &c1, int &d1, int ran)
// {
// 	bool case1 = (ran == 1 && a1 != 0), case2 = (ran == 2 && b1 != 0), case3 = (ran == 3 && c1 != 0),case4 = (ran == 4 && d1 != 0);
// 	if(case1)
// 	{
// 		a = a1;
// 		a1 = 0;
// 	}
// 	else if(case2)
// 	{
// 		a = b1;
// 		b1 = 0;
// 	}
// 	else if (case3)
// 	{
// 		a = c1;
// 		c1 = 0;
// 	}
// 	else if(case4)
// 	{
// 		a = d1;
// 		d1 = 0;
// 	}
// }

// void shuffle(int &a, int &b, int &c, int &d)
// {
// 	int a1 = a,b1 = b, c1 = c , d1 = d;
// 	a = b = c =d = 0;

// 	while (a == 0)
// 	{
// 		int ran = rand()%4+1;
// 		Check(a, a1,b1,c1,d1,ran);
// 	}
// 	while (b == 0)
// 	{
// 		int ran = rand()%4+1;
// 		Check(b, a1,b1,c1,d1,ran);
// 	}
// 	while (c == 0)
// 	{
// 		int ran = rand()%4+1;
// 		Check(c, a1,b1,c1,d1,ran);
// 	}
// 	while (d == 0)
// 	{
// 		int ran = rand()%4+1;
// 		Check(d, a1,b1,c1,d1,ran);
// 	}
//}

#include <algorithm>
void shuffle(int &a, int &b, int &c, int &d)
{
	int x = {a,b,c,d};
	random_shuffle(x,x+4);
	a = x[0];
	b = x[1];
	c = x[2];
	d = x[3];
}