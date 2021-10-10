#include<iostream>
#include<conio.h>
#include<math.h>
#include<windows.h>
using namespace std;

/*
        Author: @PedroD96
        05/10/2021

*/


 
// Operações para a Calculadora
void soma(int a, int b){
    
    system("cls");
    cout << "\t\t\tSOMA\n\n";
    cout << "DIGITE O PRIMEIRO VALOR: ";
    cin >> a;
    cout << "\nDIGITE O SEGUNDO VALOR: ";
    cin >> b;
    Sleep(1500);
    cout << "\nPROCESSANDO.....\n";
    Sleep(1500);

    cout << "\n\nRESULTADO DA SOMA: " << a + b;
    cout << "\n";

    getch();
    system("cls");
}

void subtracao(int a, int b){
    
    system("cls");
    cout << "\t\t\tSUBTRACAO\n\n";
    cout << "DIGITE O PRIMEIRO VALOR: ";
    cin >> a;
    cout << "\nDIGITE O SEGUNDO VALOR: ";
    cin >> b;
    Sleep(1500);
    cout << "\nPROCESSANDO.....\n";
    Sleep(1500);

    cout << "\n\nRESULTADO DA SUBTRACAO: " << a - b;
    cout << "\n";

    getch();
    system("cls");

}

void multiplicacao(int a, int b){
    
    system("cls");
    cout << "\t\t\tMULTIPLICACAO\n\n";
    cout << "DIGITE O PRIMEIRO VALOR: ";
    cin >> a;
    cout << "\nDIGITE O SEGUNDO VALOR: ";
    cin >> b;
    Sleep(1500);
    cout << "\nPROCESSANDO.....\n";
    Sleep(1500);

    cout << "\n\nRESULTADO DA MULTIPLICACAO: " << a * b;
    cout << "\n";

    getch();
    system("cls");

}

void divisao(int a, int b){
    
    system("cls");
    cout << "\t\t\tDIVISAO\n\n";
    cout << "DIGITE O PRIMEIRO VALOR: ";
    cin >> a;
    cout << "\nDIGITE O SEGUNDO VALOR: ";
    cin >> b;
    Sleep(1500);
    cout << "\nPROCESSANDO.....\n";
    Sleep(1500);

    if(b == 0){
    cout << "\n\nNAO E POSSIVEL REALIZAR DIVISAO POR 0";
    cout << "\n";
    } else {
            cout << "\n\nRESULTADO DA DIVISAO: " << (float) a / b;
            cout << "\n";
            }
    getch();
    system("cls");

}

void media(){
    int lista[10], valores, soma = 0;
        
    system("cls");
    cout << "\t\t\tMEDIA DE 10 VALORES\n\n";
    for(int i = 0; i < 10; i++){
        cout << "ADICIONE O "<< i+1 << " VALOR NA LISTA: ";
        cin >> valores;
        lista[i] = valores;
    }

    for ( int i = 0; i < 10 ; i++){
        soma += lista[i];
    }
    Sleep(1500);
    cout << "\nPROCESSANDO.....\n";
    Sleep(1500);

    cout << "\n\nRESULTADO DA MEDIA: " << (float) soma/10;
    cout << "\n";
    getch();
    system("cls");

}

// Para imprimir a Lista dos Repetidos contando as vezes que repetiu
void imprimeListaContarDuplicada(int max, int lista[]){
    
    int temp = 0, repetidos = 1, aux=0;

    cout << "\n PROCESSANDO.......\n\n";
    Sleep(1500);

    cout << "\t\tOS VALORES NA LISTA DUPLICADOS E QUANTAS VEZES APARECERAM\n";


    for(int k=0; k <= max - 2; k++){ // for para nevagar pelos indices do vetor
        for(int i = 0; i <= max - 2; i++){ // for para navegar pelos valores do vetor
            if(lista[i] > lista[i+1]){
                aux=lista[i];
                lista[i]=lista[i+1];
                lista[i+1]=aux;
            }
        }
    }

    temp = lista[0]; //Primeiro não entra na varredura --------> Por isso tem que arrumar os valores da lista para o condigo funcionar

    for(int i = 1; i < max; i++){
        if(lista[i] == temp){
            repetidos++; // Enquanto tiverem valores iguais em sequencia, o codigo vai incrementar os valores
        } else{
            // Se o valor for diferente do anterior, verificar se teve repetições
            if(repetidos > 1){
                cout << "\nO valor "<< temp << " esta repetindo : " << repetidos << " vezes";
                repetidos = 1;
            }
            // E atualiza este valor de comparação
            temp = lista[i];
        }
    }

    // Fim do Loop, Mas ainda falta testar o último valor da lista, se ele esta repetindo ou não
    if(repetidos > 1){
        cout << "\nO valor " << temp << " esta repetindo: " << repetidos << " vezes";
    } 

    cout << "\n\n";
    
}

// Para imprmir a Lista Sem duplicatas
void imprimeListaSemDuplicadas(int max, int lista[]){
    
    int aux=0;

    cout << "\n PROCESSANDO.......\n\n";
    Sleep(1500);
    cout << "\t\tOS VALORES NA LISTA SEM DUPLICADOS\n";
    
    for(int i=0; i < max; i++){
        for(int j=i+1; j < max; j++){
            if(lista[i] == lista[j]){
                aux++;
            }
        }

    // Se o contador chegar até aqui igual a zero, então, ou não há mais de uma ocorrência dessa lista ou essa é a ultima ocorrência. Imprimie o numero
        if(aux == 0){
            cout << " | " << lista[i] << " | ";
        }   

        aux = 0;
    }
    cout << "\n\n";
    
    
}

// Para imprimir a Lista Original
void imprimeLista(int max, int lista[]){
    cout << "\t\tOS VALORES NA LISTA\n";
    for(int i=0; i < max; i++){
        cout << " | " << lista[i] << " | ";
        
        
    }
    cout << "\n\n";
    getch();

}

// Adicionar os valores dentro de uma Lista 
void exercicioA(int max, int lista[]){
    system("cls");
    cout << "\t\t\tINCLUINDO VALORES NA LISTA\n";
    for(int i=0; i < max; i++){
        cout << "ADICIONE O " << i+1 << " VALOR PARA A LISTA: ";
        cin >> lista[i];
    }
    cout << "\n\n";
    imprimeLista(max, lista);
    imprimeListaSemDuplicadas(max, lista);
    getch();
    system("cls");

}

// Adicionar os valores dentro de uma Lista
void exercicioB(int max, int lista[]){
    system("cls");
    cout << "\t\t\tINCLUINDO VALORES NA LISTA\n";
    for(int i=0; i < max; i++){
        cout << "ADICIONE O " << i+1 << " VALOR PARA A LISTA: ";
        cin >> lista[i];
    }
    cout << "\n\n";
    imprimeListaContarDuplicada(max, lista);
    getch();
    system("cls");
}

// Conversor de temperatura
void exercicioC(){
    float temp;
    system("cls");
    cout << "\t\t\tCONVERSOR DE TEMPERATURA\n\n";
    cout << "INFORME A TEMPERATURA EM GRAUS CELSIUS: ";
    cin >> temp;

    Sleep(1500);
    cout << "\nPROCESSANDO.....\n";
    Sleep(1500);

    // realizando calculos e exibindo na tela
    cout << "\n\n*******************************************\n\n";
    cout << "TEMPERATURA EM FAHRENHEIT: " << ((temp*1.8) + 32);
    cout << "\nTEMPERATURA EM KELVIN: " << (temp + 273.15);
    cout << "\n\n*******************************************\n\n";
    getch();
    system("cls");

}

// Elevando x por a potencia de duas formas
void exercicioD(){
    int x, a, b=1;
    system("cls");
    cout << "\t\t\tREALIZANDO CALCULO DE POTENCIA DE DUAS FORMAS \n";
    cout << "DIGITE O VALOR QUE DESEJA CALCULAR A POTENCIA: ";
    cin >> x;
    cout << "\nDIGITE O VALOR QUE DESEJA SER O EXPOENTE: ";
    cin >> a;

    Sleep(1500);
    cout << "\nPROCESSANDO.....\n";
    Sleep(1500);

        // realizando calculos e exibindo na tela
    cout << "\n\n*******************************************\n\n";
    cout << "UTILIZANDO O POW --- A POTENCIA DE X POR A:  " << pow(x, a);

  for(int i = 0; i < a ; i++){
      b *= x;
    }

    cout << "\nFOR --- A POTENCIA DE X POR A:  " << b ;
    cout << "\n\n*******************************************\n\n";


    getch();
    system("cls");
}

// Calculadora
void exercicioE(){
    int op, a ,b;
    

    system("cls");
    cout << "\t\tCALCULADORA \n";
    do{
        cout << "**********************************************\n";
        cout << "\n1- SOMA\n2- SUBTRACAO\n3- DIVISAO\n4- MULTIPLICACAO\n5- MEDIA\n6- SAIR DA CALCULADORA";
        cout << "\n\n**********************************************\n";
        cout << "Digite opcao desejada: ";
        cin >> op;
        switch(op)
        {
            case 1:
                soma(a,b);  
                break;

            case 2:
                subtracao(a,b);    
                break;

            case 3:
                divisao(a,b);
                break;

            case 4:
                multiplicacao(a,b);
                break;

            case 5:
                media();
                break;

            case 6:
                system("cls");
                cout << "\t     ADEUS\n\n";
                cout << "\tFizemos boas contas juntos......\n\n";
                cout << "\tAte a proxima......\n\n";
                getch();
                system("cls");
                break;

            default:
                system("cls");
                cout << "\t\t\tOPA.... ALGUMA COISA DEU ERRADO!!\n\n";
                cout << "OPCAO NAO EXISTENTE.....\n\nPENSE NOVAMENTE E ESCOLHA UM NUMERO DENTRO DAS OPCOES VALIDAS.....\n\nOBSERVE AS OPCOES NOVAMENTE COM CALMA\n\n\n\n";
                Sleep(2500);
                system("pause");
                system("cls");
                break;
        }

    }while(op != 6);
}

// Menu de execução do programa
void menu(int op, int max, int lista[]){   
    do{
        cout << "\t    MENU\n";
        cout << "********************************\n" ;
        cout << "Digite a opcao desejada:\n\n1- Para remover itens duplicados em uma lista \n2- Para identificar e contar duplicados em uma lista\n3- Para converter temperatuda de Graus Celsius para Farenheit e Kelvin\n4- Para calcular potencia de X\n5- Para utilizar a calculadora \n6- Para sair" ;
        cout << "\n\n********************************\n" ;
        cout << "Digite opcao desejada: ";
        cin >> op;
    switch (op)
    {
    case 1:
        exercicioA(max, lista);
        break;
    case 2:
        exercicioB(max, lista);
        break;
    case 3:
        exercicioC();
        break;
    case 4:
        exercicioD();
        break;
    case 5:
        exercicioE();
        break;
    case 6:
        system("cls");
        cout << "\t     ADEUS\n\n";
        cout << "\tAte a proxima......\n\n" ;
        getch();
        system("cls");
        break;
    default:
        system("cls");
        cout << "\t\t\tOPA.... ALGUMA COISA DEU ERRADO!!\n\n";

        cout << "OPCAO NAO EXISTENTE.....\n\nPENSE NOVAMENTE E ESCOLHA UM NUMERO DENTRO DAS OPCOES VALIDAS.....\n\nOBSERVE AS OPCOES NOVAMENTE COM CALMA\n\n\n\n";
        Sleep(2500);
        system("pause");
        system("cls");
        break;
    }
    }while(op != 6);
}


int main(){
    int op;
    const int max = 5; 
    int lista[max];

    menu(op, max, lista);

    return(0);
}