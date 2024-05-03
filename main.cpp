/* Creation date: 4-2-2024
   Teacher: Dr. Tyson McMillan 
   School: Tarrant County College
   Purpose: A basic calculator that calculates the velocity, acceleration, motion,
   weight, momentum, and newton's second law given the right inputs and options.
   Skills learned/gained from the assignment: I learned how to utilize the while
   loop more efficiently.
*/
#include <iostream>
#include <math.h>

using namespace std;

void calculateVelocity();
void calculateAcceleration();
void calculateMotion();
void calculateWeight();
void calculateMomentum();
void calculateNewtonSecondLaw();

int main(){
  while(true){
    char option;
    cout <<"What do you want to calculate. \nEnter 'V' to calculate velocity, 'A' to calculate acceleration, 'M' to calculate motion, 'W' to calculate weight, 'P' to calculate momentum, or 'E' to end the whole program "<< endl;
    restart: 
      cin >> option;

    if(option == 'V'){
      calculateVelocity();
    }
    else if(option == 'A'){
      calculateAcceleration();
    }
    else if(option == 'M'){
      calculateMotion();
    }
    else if(option == 'W'){
      calculateWeight();
    }
    else if(option == 'P'){
      calculateMomentum();
    }
    else if(option == 'N'){
      calculateNewtonSecondLaw();
    }
    else if(option == 'E'){
      exit (0);
    }
    else{
      cout << "Please Enter a valid input: "<< endl;
      goto restart;
    }

  }

  return 0; 
}

void calculateVelocity(){
  double ds = 0.0, dt = 0.0, v = 0.0;
  string  dsUnits = "", dtUnits = "";

  cout << "Enter the value for change in distance: "<< endl;
  cin >> ds;
  cout << "Enter the unit for distance: "<< endl;
  cin >> dsUnits;


  cout << "Enter the value for change in time: "<< endl;
  cin >> dt;
  cout << "Enter the unit time: "<< endl;
  cin >> dtUnits;

  v = ds/dt;

  cout<< "The is velocity is: "<< v << "=" << dsUnits << "/" << dtUnits << endl;	
}

void calculateAcceleration(){
  double dv = 0.0, dt = 0.0, a = 0.0;
  string  dvUnits = "", dtUnits = "";

  cout << "Enter the value for change in velocity: "<< endl;
  cin >> dv;
  cout << "Enter the unit for velocity: "<< endl;
  cin >> dvUnits;


  cout << "Enter the value for change in time: "<< endl;
  cin >> dt;
  cout << "Enter the unit time: "<< endl;
  cin >> dtUnits;

  a = dv/dt;

  cout<< "The is acceleration is: "<< a << "=" << dvUnits << "/" << dtUnits << endl;	
}

void calculateMotion(){
  while(true){
    char option;
    cout <<"Enter 'a' to solve v, 's' solve for s, 'd' to solve for v^2, or 'v' to solve for v_bar "<< endl;
    restart: 
      cin >> option;

    if(option == 'a'){
      double v = 0.0, v0 = 0.0, a = 0.0, t = 0.0;

      cout << "Enter initial velocity: "<< endl;
      cin >> v0;
      cout << "Enter the acceleration: "<< endl;
      cin >> a;
      cout << "Enter initial time: "<< endl;
      cin >> t;

      v = v0 + (a*t);

      cout << "The velocity: "<< v << endl;

      }
    else if(option == 's'){
      double s0 = 0.0, v0 = 0.0, a = 0.0, t = 0.0, s = 0.0;

      cout << "Enter initial velocity: "<< endl;
      cin >> v0;
      cout << "Enter the acceleration: "<< endl;
      cin >> a;
      cout << "Enter initial time: "<< endl;
      cin >> t;
      cout << "Enter initial initial distance: "<< endl;
      cin >> s0;

      s = s0 + (v0*t) + (0.5*a*pow(t,2));

      cout << "The final distance is: "<< s << endl;
    }
    else if(option == 'd'){
      double v = 0.0, v0 = 0.0, s = 0.0, s0 = 0.0, a = 0.0;

      cout << "Enter initial velocity: "<< endl;
      cin >> v0;
      cout << "Enter the acceleration: "<< endl;
      cin >> a;
      cout << "Enter initial distance: "<< endl;
      cin >> s0;
      cout << "Enter final distance: "<< endl;
      cin >> s;


      v = pow(v0, 2) + (2 * a * (s-s0));

      cout << "The v^2: "<< v << endl;
    }
    else if(option == 'v'){
      double v = 0.0, v0 = 0.0, v_bar = 0.0;

      cout << "Enter initial velocity: "<< endl;
      cin >> v0;
      cout << "Enter the final velocity: "<< endl;
      cin >> v;

      v_bar = 0.5 * (v+v0);

      cout << "The v_bar: "<< v_bar << endl;

    }
    else{
      cout << "Please Enter a valid input: "<< endl;
      goto restart;
    }

  }
}

void calculateNewtonSecondLaw(){
  double N = 0.0, m = 0.0, a = 0.0;
  string mUnits = " ", aUnits = " ";

  cout << "Enter the mass: "<< endl;
  cin >> m;
  cout << "Enter the unit mass: "<< endl;
  cin >> mUnits;
  cout << "Enter the acceleration: "<< endl;
  cin >> a;
  cout << "Enter the unit for acceleration: "<< endl;
  cin >> aUnits;

  N = m*a;

  cout<< "The calculated force is: "<< N << mUnits << " " << aUnits << endl;
}

void calculateWeight(){
  double W = 0.0, m = 0.0, g = 0.0;
  string mUnits = " ", gUnits = " ";

  cout << "Enter the mass: "<< endl;
  cin >> m;
  cout << "Enter the unit mass: "<< endl;
  cin >> mUnits;
  cout << "Enter the gravity: "<< endl;
  cin >> g;
  cout << "Enter the unit for gravity: "<< endl;
  cin >> gUnits;

  W = m*g;

  cout<< "The calculated weight is: "<< W << mUnits << " " << gUnits << endl;
}

void calculateMomentum(){
  double p = 0.0, m = 0.0, v = 0.0;
  string mUnits = " ", vUnits = " ";

  cout << "Enter the mass: "<< endl;
  cin >> m;
  cout << "Enter the unit mass: "<< endl;
  cin >> mUnits;
  cout << "Enter the velocity: "<< endl;
  cin >> v;
  cout << "Enter the unit for velocity: "<< endl;
  cin >> vUnits;

  p = m*v;


  cout<< "The calculated momentum is: "<< p << mUnits << " " << vUnits << endl;
}   	


