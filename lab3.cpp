#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;
using std::cin;


int main(int argc, char const *argv[]){
	//a ==1 b==2 c == 3 d== 4
	char pieza [16][4] = {{'0','0','0','0'},{'0','0','0','1'},{'0','0','1','0'},{'0','0','1','1'},{'0','1','0','0'},{'0','1','0','1'},{'0','1','1','1'},      
	  {'0','1','1','0'},{'1','0','0','0'},{'1','0','0','1'},{'1','0','1','0'},{'1','0','1','1'},{'1','1','0','0'},{'1','1','0','1'},{'1','1','1','0'},{'1','1','1','1'}};
	char selecionar [4];
	char tablero[4][4] ;

	int filas = (sizeof(pieza)/sizeof(pieza[0]));
    int columnas = (sizeof(pieza[0])/sizeof(pieza[0][0]));
    cout << filas <<endl;
    cout << columnas<<endl;
		for (int i = 0; i < filas; ++i){
			for (int j = 0; j < columnas; ++j){
				cout<< pieza[i][j]<<",";
			}
		cout << endl;
	}
	cout <<"seleccione una pieza \n";
	cin >> selecionar;
	int t =1;
	for (int i = 0; i < 16; ++i){

		t= 1;
		int f=0;
		int c=0;
		for(int j=0 ; j <4;j++){
			if (selecionar[j] ==  pieza[i][j]){
				t= t +1;
				if(t==4){
					f=i;
					c=j;
					pieza[i][0]= '9';
					pieza[i][1]= '9';
					pieza[i][2]= '9';
					pieza[i][3]= '9';

				}
			}
		}

		for (int i =0 ; i <4 ;i++){
			for (int j = 0; j < 4; ++j){
				
				tablero[i][j]=' ';

			}

		}
	
	}

	

    







	return 0;
}




