#include <cstdlib>
#include <cmath>
#include <iostream>

using namespace std;


int bordesuperior(){
    for (int op=0; op<31; op++){
        cout << "-";
    }

}

void sudoku(){
    //declaro variables
    int sud[9][9] = {0}, cont = 0, ale;
    bool conta = true;
    ale = (rand() % 9) + 1;
    srand(ale);
    //creo los valores del sudoku
    for (int i=0 ; i<9 ; i++){
        for (int j=0 ; j<9 ; j++){
            sud[i][j] = rand()%8 + 1;
        }
    }
    //Dibujo de la interfaz
    bordesuperior();
    cout << endl;
    for (int y=1 ; y<=9 ; y++){
        cout << "|";
        for (int k=1 ; k<=9 ; k++){
            cout <<" "<<sud[y-1][k-1];
            if (k % 3 == 0){
                cout << " |";
            }else{
                cout << " ";
            }
        }cout << endl;
        if (y%3==0){
            for (int u=0; u<31; u++){
                cout <<  "-";
            }cout<<endl;
        }else{
            continue;
        }
    }
    cout << endl;
    //verifica las lineas
    for (int y=0 ; y<9 ; y++){
        int a=y;
        for (int k=0 ; k<9 ; k++){
            if (sud[y][a+k]==sud[y][k]){
                cont++;
                conta = false;
                break;
            }
        }
        if (conta == false){
            break;
        }
    }
    //Verifica las columnas
    for (int q=0 ; q<9 ; q++){
        for (int w=0 ; w<9 ; w++){
            if (sud[q+w][w]==sud[q][w]){
                cont++;
                conta = false;
                break;
            }
        }
        if (conta == false){
            break;
        }
    }
    //verifica los cuadrados de 3x3

    if (conta == false){
        cout << "No es sudoku";
    }else{
        cout << "Es sudoku";
    }
    //if ( cont != 0 ){
    //  cout << "No es sudoku";
    //}else{
    //  cout << "Es sudoku";
    //}
}

int main(){
    sudoku();
    return 0;
}
