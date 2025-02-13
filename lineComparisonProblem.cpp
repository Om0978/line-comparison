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
    bool operator == (lines & o2){
        return calculateLengthOfLine() == o2.calculateLengthOfLine();
    }
};

int main(){
    cout<<"welcome to line comparison computation program\n" ;
    double x1,y1,x2,y2; 
    cout<<"enter coordinates for first line (x1,y1,x2,y2)"<<endl;
    cin>>x1>>y1>>x2>>y2;
    lines line1(x1,x2,y1,y2); //create line1
    cout<<"length of line1 is : "<<line1.calculateLengthOfLine()<<endl;

    cout<<"enter coordinates for second line (x1,y1,x2,y2)"<<endl;
    cin>>x1>>y1>>x2>>y2;
    lines line2(x1,x2,y1,y2);
    cout<<"length of line2 is : "<<line2.calculateLengthOfLine()<<endl;

    if(line1==line2){
        cout<<"the length of two lines are equal\n";
    }
    else{
        cout<<"the length of two lines are not equal\n";
    }
    

}