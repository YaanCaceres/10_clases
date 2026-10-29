#include <iostream>
#include <cmath>
using namespace std; 
class Calculadora {
	private :
		float primero, segundo;
		
		bool Comprobar() const {
			return segundo !=0;
		}
		
	public :
		Caculadora(): :primero(0), segundo(0){
		}
			
		void setNumeros(float a, float b){
			primero=a;
			segundo=b;
			
		}
		float getPrimero() const {
			return primero;
		}
		float getSegundo() const {
			return segundo;
		}
		
		double sumar() const {
			return primero + segundo;
		}
		double restar() const {
			return primero - segundo;
		}
		double multiplicar() const {
			return primero * segundo;
		}
		bool dividir(double resultado) const {
			if (Comprobar()){
				resultado=primero/segundo;
				return true
			}
			return false;
		}
		
	
		
};

int main (){
	Calculadora Cal; 
	float num1,num2; 
	cin>>num1>>num2; 
	
	cacl.setNumeros(num1,num2);
	cout<<"resultados: "<<endl;
	cout<<"suma: "<<calc.sumar()<<endl;
	cout<<"resta: "<<calc.restar()<<endl;
	cout<<"multiplicacion: "<<calc.multiplicar()<<endl;
	
	float ResultadoDivision=0; 
	if (calc.dividir(ResultadoDivision)){
		cout<<"Division"<<ResultadoDivision<<endl;
	}
	else{
		cout<<"error";
	}

}
