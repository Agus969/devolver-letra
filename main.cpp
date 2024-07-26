#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
string saluda(){
    return "Hola, yo soy yo\n";
}
int main() {
string mensaje = "";

for(int i=0 ; i<8 ; i++){
    mensaje += dame letra();
}


cout << mensaje;
}
