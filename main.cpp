#include <iostream>

using namespace std;

//Base class
class Sensor{
public :
    virtual int getReading()=0; // pure virtual function

    void setReading(int r){
    reading = r;
    }

  protected:
      int reading;
};

//Derived class

class Temperature: public Sensor{
public:
    int getReading(){
    return(reading);
    }

};

class Humidity: public Sensor{
public:
    int getReading(){
    return(reading);
    }

};

int main()
{
    int tem,hum=0;
   Temperature Temp;
   Humidity    Hum;
    cout<<"Enter temperature reading\n";
    cin>>tem;
   cout<<"Enter temperature reading\n";
   cin>>hum;
   Temp.setReading(tem);
   Hum.setReading(hum);

   cout << "Temperature in celsius: " << Temp.getReading() << endl;
   cout << "Humidity in percentage : " << Hum.getReading() << endl;
return 0;
}
