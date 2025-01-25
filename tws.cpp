#include <iostream>
#include <limits>
using namespace std;

int main() {    
    double y;
    cout<<"Welcome to the Ounce Conversion Program!\n";

    while(true) {        

        
        if( y < 0) {
        cout<<"This number is negative oz cannot be in negative. \n";
        cout<<"Please try Again.\n";
    }
        else if(cin.fail()) {        
        cout<<"This is no a number. \n";
        cout<<"Please try Again.\n";
        cin.clear();
        cin.ignore(256,'\n');
    }
        else  {
            cout<<"Thank you! Converting ounces to pounds.\n";
            cout<<"\n";
            cout<<y<<" oz is equivalent to "<<static_cast<int>(y)/16<<" lbs and "<<static_cast<int>(y)%16<<" oz.\n";
            cout<<y<<" oz is equivalent to "<<(y)/16<<" lbs.\n";
            cout<<"Thank you for using the OCP!\n";
            break;
        } 
        
    }       
  
          
           

    return 0;

}
