#include <iostream>
#include <cmath>

using namespace std;

// create class for lines 
class lines{
    double x1,x2,y1,y2; // lines coordinates 
    public:
    lines(double x1,double x2,double y1,double y2){
        this->x1 = x1;
        this->x2 = x2;
        this->y1 = y1;
        this->y2 = y2;
    }
    
    // create function to calculate length of line 
    double calculateLengthOfLine(){ 
        return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    }
};

int main(){
    cout<<"welcome to line comparison computation program\n" ;
    double x1,y1,x2,y2; 
    cout<<"enter x1 , y1 and x2 , y2 coordinates "<<endl;
    cin>>x1>>y1>>x2>>y2;

    lines obj1(x1,x2,y1,y2); //create object of class lines
    cout<<"length of line is : "<<obj1.calculateLengthOfLine();

}