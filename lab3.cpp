#include<iostream>
#include <ctime>
#include<cstdlib>
using std::cout;
using std::cin;
using std::endl;

void arreglar_arreglo(int[] ,int);

int main(int argc, char* argv[]){
	int opcion;
	cout << "1- ejercicio 1"
	     << "\n2- ejercicio 2"<<endl;
	cin >> opcion;
	
	if(opcion == 1){
		srand(time(NULL));
       		int numero_random;
       		int tabla_score[9];
        	int numero_adivinar;
        	char volver_jugar='s';
		
        	while(volver_jugar=='s'){
			bool seguir=false;
                	int intentos=0;
                	numero_random =rand() % 1000 - 500;
			cout<< numero_random<<endl;
                	while(!seguir){
                        	intentos++;
                        	cout <<"Adivina el Numero: ";
                        	cin >> numero_adivinar;
                        	if(numero_adivinar == numero_random)
                                	seguir= true;
                        	if(numero_adivinar>numero_random)
                                	cout<<"El numero es muy grande, ingresa otro"<<endl;
                        	if(numero_adivinar<numero_random)
                                	cout<<"El numero es muy bajo, ingresa otro"<<endl;
                	}
                   
        		cout<< "Felicidades has ganado!"<<endl;
        		cout<< "Lo hiciste en "<<intentos << " Intentos"<<endl;
			for(int i = 0; i<9;i++)
				tabla_score[i]=0;
			
			arreglar_arreglo(tabla_score,intentos);
			
			cout<< "Deseas volver a jugar?";
			cin>> volver_jugar;
		}
	}else{
		if(opcion == 2){
	
		}else{
			cout<< "OPCION NO VALIDA"<<endl;	
		}
	}

	return 0;
}

void arreglar_arreglo(int arreglo[],int nuevo_score){
	int nodo1=arreglo[9],nodo2=arreglo[8],nodo3=arreglo[7],nodo4=arreglo[6],nodo5=arreglo[5],nodo6=arreglo[4],nodo7=arreglo[3],
		nodo8=arreglo[2],nodo9=arreglo[1];
	if(nuevo_score > arreglo[9]){
		arreglo[8]== nodo1;
		arreglo[7]== nodo2;
		arreglo[6]== nodo3;
		arreglo[5]== nodo4;
                arreglo[4]== nodo5;
                arreglo[3]== nodo6;
		arreglo[2]== nodo7;
                arreglo[1]== nodo8;
                arreglo[0]== nodo9;
		arreglo[9]== nuevo_score;

	}
	if(nuevo_score > arreglo[8] && nuevo_score < arreglo[9]){
                arreglo[7]== nodo2;
                arreglo[6]== nodo3;
                arreglo[5]== nodo4;
                arreglo[4]== nodo5;
                arreglo[3]== nodo6;
                arreglo[2]== nodo7;
                arreglo[1]== nodo8;
                arreglo[0]== nodo9;
                arreglo[8]== nuevo_score;

        }
	if(nuevo_score > arreglo[7] && nuevo_score < arreglo[8]){
                arreglo[6]== nodo3;
                arreglo[5]== nodo4;
                arreglo[4]== nodo5;
                arreglo[3]== nodo6;
                arreglo[2]== nodo7;
                arreglo[1]== nodo8;
                arreglo[0]== nodo9;
                arreglo[7]== nuevo_score;

        }
	 if(nuevo_score > arreglo[6] && nuevo_score < arreglo[7]){
                arreglo[5]== nodo4;
                arreglo[4]== nodo5;
                arreglo[3]== nodo6;
                arreglo[2]== nodo7;
                arreglo[1]== nodo8;
                arreglo[0]== nodo9;
                arreglo[6]== nuevo_score;

        }
	 if(nuevo_score > arreglo[5] && nuevo_score < arreglo[6]){
                arreglo[4]== nodo5;
                arreglo[3]== nodo6;
                arreglo[2]== nodo7;
                arreglo[1]== nodo8;
                arreglo[0]== nodo9;
                arreglo[5]== nuevo_score;

        }
	if(nuevo_score > arreglo[4] && nuevo_score < arreglo[5]){
                arreglo[3]== nodo6;
                arreglo[2]== nodo7;
                arreglo[1]== nodo8;
                arreglo[0]== nodo9;
                arreglo[4]== nuevo_score;

        }
	if(nuevo_score > arreglo[3] && nuevo_score < arreglo[4]){
                arreglo[2]== nodo7;
                arreglo[1]== nodo8;
		arreglo[0]== nodo9;
                arreglo[3]== nuevo_score;

        }
	if(nuevo_score > arreglo[2] && nuevo_score < arreglo[3]){
                arreglo[1]== nodo8;
                arreglo[0]== nodo9;
                arreglo[2]== nuevo_score;

        }
	if(nuevo_score > arreglo[1] && nuevo_score < arreglo[2]){
                arreglo[0]== nodo9;
                arreglo[1]== nuevo_score;

        }
	if(nuevo_score > arreglo[0] && nuevo_score < arreglo[1]){
                arreglo[0]== nuevo_score;

        }
}








