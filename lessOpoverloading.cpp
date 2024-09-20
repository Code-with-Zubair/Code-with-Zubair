#include <iostream>
using namespace std;
class Distance {
	int feet;
	int inches;
	public:
		Distance()
		{
			feet=0;
			inches=0;
		}
		Distance(int f,int i)
		{
			feet=f;
			inches=i;
		}
		bool operator <(Distance d)
		{
			if (feet<d.feet) {
				return true;
			}
			if ((feet==d.feet) && (inches<d.inches) )
			{
		     	return true;
		    }
			else {
				return false;
			}
		}
		void display()
		{
			cout<<feet<<" feets "<<inches<<" inches"<<endl;
		}

		bool operator ==(Distance d){
			return (feet==d.feet) && (inches==d.inches) ;
		} 
};
int main() {
	Distance D1(4,8);
	Distance D2(4,8);
	if (D1<D2)
	{
		cout<<"Length 1 is shorter "<<endl;
		D1.display();
	} 
	 else if(D1==D2) {
		cout<<"Distane 1 and 2 are same";
	 }
	 else {
		cout<<"length 2 is shorter" <<endl;
		D2.display(); 
}
return 0;
}
