#include <iostream>

using namespace std;

template <typename t>
bool isEqualTo(t x, t y){
  if(x==y){
    return true;
  }else{
    return false;
  }
} // The isEqualTo function that compare two elementss

class testing{
friend ostream &operator<<(ostream &, testing &);
private:
int A;
int B;
public:
	testing(int a, int b){
    A = a;
    B = b;
  }
bool operator==( const testing &right ) const
{ return A == right.A && B == right.B; }
};


int main(){
cout<<isEqualTo<char>('Jose','Jose');
testing t1(4,5);
  testing t2(5,4);
  cout<<isEqualTo<int>(3,4);
  
}