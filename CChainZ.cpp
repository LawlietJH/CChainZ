/// Código en C++.
/// By: LawlietJH
/// Versión: v1.1.2
/// CChainZ.cpp

/* Convertidor de Base N a Base M

    Ejemplo:

        Número en Base [12]: BABA

        Base 12 a Base [20]: 2B9A
*/

#include <iostream>
#include <windows.h>    /// Para los métodos 'OcultarCursor', 'gotoxy', 'WinSize' y 'Z'.
#include <cstdlib>
#include <clocale>
#include <sstream>
#include <conio.h>
#include <math.h>

using namespace std;

void OcultarCursor()
{
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 2;
    cci.bVisible = FALSE;
    SetConsoleCursorInfo(hCon,&cci);
}

void gotoxy(int x, int y)
{
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hCon,dwPos);
}

bool WinSize(int Ancho, int Alto)
{
	_COORD Coordenada;
	Coordenada.X = Ancho;
	Coordenada.Y = Alto;

	_SMALL_RECT Rect;
	Rect.Top = 0;
	Rect.Left = 0;
	Rect.Right = Ancho - 1;
	Rect.Bottom = Alto - 1;

	/// Obtener el handle de la consola
	HANDLE hConsola = GetStdHandle(STD_OUTPUT_HANDLE);

	/// Ajustar el buffer al nuevo tamaño
	SetConsoleScreenBufferSize(hConsola, Coordenada);

	/// Cambiar tamaño de consola a lo especificado en el buffer
	SetConsoleWindowInfo(hConsola, TRUE, &Rect);
	return TRUE;
}

void Pause(bool Quiet = true){if(Quiet == true){system("Pause > Nul");} else{system("Pause");}}
void Clear(){system("Cls");}
void Z(int X){SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),X);}

void Carga(int Cantidad = 3)
{
    int Load;

    for (Load=0; Load<Cantidad; Load++)
    {
        gotoxy(33,11);
        Z(15); cout<<"Cargando "; Z(3);
        Sleep(150); cout<< ". ";
        Sleep(200); cout<< ". ";
        Sleep(250); cout<< ".";
        gotoxy(42,11); Sleep(400); cout<< "     ";
    }
}

void S(string Simbolo, int Num1, int Num2)
{
    Z(Num2); cout<<"["; Z(Num1); cout<<Simbolo; Z(Num2); cout<<"]";
}

///=============================================================================================


bool Comprobar(string CadE, int Base1)
{
    string Aux;
    string Salida;

    int Tam = CadE.length();
    int Num = 0;
    int Suma = 0;
    int x = 0, y = Tam;
    bool xD = true;

    for(x=0; x<Tam; x++)
    {
        Aux = CadE[x];

        if(Base1 == 1)
        {
            if(Aux != "0")
            {return false;}
        }
        else if(Base1 == 2)
        {
            if(Aux != "0" && Aux != "1")
            { return false; }
        }
        else if(Base1 == 3)
        {
            if(Aux != "0" && Aux != "1" && Aux != "2")
            { return false; }
        }
        else if(Base1 == 4)
        {
            if(Aux != "0" && Aux != "1" && Aux != "2" && Aux != "3")
            { return false; }
        }
        else if(Base1 == 5)
        {
            if(Aux != "0" && Aux != "1" && Aux != "2" && Aux != "3" && Aux != "4")
            { return false; }
        }
        else if(Base1 == 6)
        {
            if(Aux != "0" && Aux != "1" && Aux != "2" && Aux != "3" && Aux != "4"
            && Aux != "5")
            { return false; }
        }
        else if(Base1 == 7)
        {
            if(Aux != "0" && Aux != "1" && Aux != "2" && Aux != "3" && Aux != "4"
            && Aux != "5" && Aux != "6")
            { return false; }
        }
        else if(Base1 == 8)
        {
            if(Aux != "0" && Aux != "1" && Aux != "2" && Aux != "3" && Aux != "4"
            && Aux != "5" && Aux != "6" && Aux != "7")
            { return false; }
        }
        else if(Base1 == 9)
        {
            if(Aux != "0" && Aux != "1" && Aux != "2" && Aux != "3" && Aux != "4"
            && Aux != "5" && Aux != "6" && Aux != "7" && Aux != "8")
            { return false; }
        }
        else if(Base1 == 10)
        {
            if(Aux != "0" && Aux != "1" && Aux != "2" && Aux != "3" && Aux != "4"
            && Aux != "5" && Aux != "6" && Aux != "7" && Aux != "8" && Aux != "9")
            { return false; }
        }
        else if(Base1 == 11)
        {
            if(Aux != "0" && Aux != "1" && Aux != "2" && Aux != "3" && Aux != "4"
            && Aux != "5" && Aux != "6" && Aux != "7" && Aux != "8" && Aux != "9"
            && Aux != "A")
            { return false; }
        }
        else if(Base1 == 12)
        {
            if(Aux != "0" && Aux != "1" && Aux != "2" && Aux != "3" && Aux != "4"
            && Aux != "5" && Aux != "6" && Aux != "7" && Aux != "8" && Aux != "9"
            && Aux != "A" && Aux != "B")
            { return false; }
        }
        else if(Base1 == 13)
        {
            if(Aux != "0" && Aux != "1" && Aux != "2" && Aux != "3" && Aux != "4"
            && Aux != "5" && Aux != "6" && Aux != "7" && Aux != "8" && Aux != "9"
            && Aux != "A" && Aux != "B" && Aux != "C")
            { return false; }
        }
        else if(Base1 == 14)
        {
            if(Aux != "0" && Aux != "1" && Aux != "2" && Aux != "3" && Aux != "4"
            && Aux != "5" && Aux != "6" && Aux != "7" && Aux != "8" && Aux != "9"
            && Aux != "A" && Aux != "B" && Aux != "C" && Aux != "D")
            { return false; }
        }
        else if(Base1 == 15)
        {
            if(Aux != "0" && Aux != "1" && Aux != "2" && Aux != "3" && Aux != "4"
            && Aux != "5" && Aux != "6" && Aux != "7" && Aux != "8" && Aux != "9"
            && Aux != "A" && Aux != "B" && Aux != "C" && Aux != "D" && Aux != "E")
            { return false; }
        }
        else if(Base1 == 16)
        {
            if(Aux != "0" && Aux != "1" && Aux != "2" && Aux != "3" && Aux != "4"
            && Aux != "5" && Aux != "6" && Aux != "7" && Aux != "8" && Aux != "9"
            && Aux != "A" && Aux != "B" && Aux != "C" && Aux != "D" && Aux != "E"
            && Aux != "F")
            { return false; }
        }
        else if(Base1 == 17)
        {
            if(Aux != "0" && Aux != "1" && Aux != "2" && Aux != "3" && Aux != "4"
            && Aux != "5" && Aux != "6" && Aux != "7" && Aux != "8" && Aux != "9"
            && Aux != "A" && Aux != "B" && Aux != "C" && Aux != "D" && Aux != "E"
            && Aux != "F" && Aux != "G")
            { return false; }
        }
        else if(Base1 == 18)
        {
            if(Aux != "0" && Aux != "1" && Aux != "2" && Aux != "3" && Aux != "4"
            && Aux != "5" && Aux != "6" && Aux != "7" && Aux != "8" && Aux != "9"
            && Aux != "A" && Aux != "B" && Aux != "C" && Aux != "D" && Aux != "E"
            && Aux != "F" && Aux != "G" && Aux != "H")
            { return false; }
        }
        else if(Base1 == 19)
        {
            if(Aux != "0" && Aux != "1" && Aux != "2" && Aux != "3" && Aux != "4"
            && Aux != "5" && Aux != "6" && Aux != "7" && Aux != "8" && Aux != "9"
            && Aux != "A" && Aux != "B" && Aux != "C" && Aux != "D" && Aux != "E"
            && Aux != "F" && Aux != "G" && Aux != "H" && Aux != "I")
            { return false; }
        }
        else if(Base1 == 20)
        {
            if(Aux != "0" && Aux != "1" && Aux != "2" && Aux != "3" && Aux != "4"
            && Aux != "5" && Aux != "6" && Aux != "7" && Aux != "8" && Aux != "9"
            && Aux != "A" && Aux != "B" && Aux != "C" && Aux != "D" && Aux != "E"
            && Aux != "F" && Aux != "G" && Aux != "H" && Aux != "I" && Aux != "J")
            { return false; }
        }
    }

    return true;
}

string DecA(string CadE, int Base1, int Base2, string CadS)
{
    string Res;
    string Salida;
    unsigned long long int Rest = 0;
    unsigned long long int Numero = 0;
    int x = 0;

    if(Base1 == 10 && (Base2 >= 1 && Base2 <= 9))
    {
        istringstream(CadE) >> Numero;

        if(Base2 == 1) { for(x=0; x<Numero; x++) { Salida = Salida + "0"; } return Salida; }

        do
        {
            Rest = Numero % Base2;
            Res = static_cast<ostringstream*>(&(ostringstream() << Rest))->str();
            CadS = Res + CadS;
            Numero = Numero / Base2;

        }while(Numero != 0);

        return CadS;
    }
    else if(Base1 == 10 && (Base2 >= 10 && Base2 <= 20))
    {
        istringstream(CadE) >> Numero;

        do
        {
            Rest = Numero % Base2;

            if(Rest == 10){Res = "A";}
            else if(Rest == 11){Res = "B";}
            else if(Rest == 12){Res = "C";}
            else if(Rest == 13){Res = "D";}
            else if(Rest == 14){Res = "E";}
            else if(Rest == 15){Res = "F";}
            else if(Rest == 16){Res = "G";}
            else if(Rest == 17){Res = "H";}
            else if(Rest == 18){Res = "I";}
            else if(Rest == 19){Res = "J";}
            else
            {
                Res = static_cast<ostringstream*>(&(ostringstream() << Rest))->str();
            }
            CadS = Res + CadS;
            Numero = Numero / Base2;

        }while(Numero != 0);

        return CadS;
    }
    else if(Base1 == 10 && Base2 == 10) {return CadE;}
    else {return "No Soportado!";}
}

string ADec(string CadE, int Base1, int Base2, string CadS)
{
    string Aux;
    string Salida;
    int Tam = CadE.length();
    int Num = 0;
    unsigned long long int Suma = 0;
    int x = 0, y = Tam;

    if(Base1 == 1)
    {
        Salida = static_cast<ostringstream*>(&(ostringstream() << Tam))->str();
        return Salida;
    }

    for(x=0; x<Tam; x++)
    {
        y--;
        Aux = CadE[y];

        if(Aux == "A"){Aux = "10";}
        else if(Aux == "B"){Aux = "11";}
        else if(Aux == "C"){Aux = "12";}
        else if(Aux == "D"){Aux = "13";}
        else if(Aux == "E"){Aux = "14";}
        else if(Aux == "F"){Aux = "15";}
        else if(Aux == "G"){Aux = "16";}
        else if(Aux == "H"){Aux = "17";}
        else if(Aux == "I"){Aux = "18";}
        else if(Aux == "J"){Aux = "19";}

        istringstream(Aux) >> Num;
        Suma += Num * pow(Base1,x);
    }

    Salida = static_cast<ostringstream*>(&(ostringstream() << Suma))->str();

    return Salida;
}


int main()
{
    setlocale(LC_ALL, "spanish"); system("Title Conversor && Color 0A");
    WinSize(80, 24);
    OcultarCursor();
    Carga();

    string CadE = "0";
    string CadS = "0";
    string CAux = "";
    int Base1 = 0;
    int Base2 = 0;
    int Auxy1 = 0;
    int Auxy2 = 0;
    int Opc;
    bool Eny = true;
    bool xD = true;

do{
    Clear();

    cout<<"\n\n\n      "; S("*",3,10); Z(15); cout<<" Base: "; Z(2); cout<<Base1; Z(10);
    cout<<"\t --> "; S("*",3,10);  Z(15); cout<<" Número Original: "; Z(2); cout<<CadE;
    cout<<"\n      "; S("*",3,10); Z(15); cout<<" Base: "; Z(10); cout<<Base2;
    cout<<"\t --> "; S("*",3,10); Z(15); cout<<" Con Conversión:  "; Z(10); cout<<CadS;

    cout<<"\n\n\n\t "; S("1",3,10); Z(15); cout<<" Elige Las Bases.";
    cout<<"\n\t "; S("2",3,10); Z(15); cout<<" Convertir.";
    cout<<"\n\t "; S("0",3,10); Z(15); cout<<" Salir...";
    cout<<"\n\n\t "; S("+",15,10); Z(15); cout<<" Elige Una Opción: "; Z(10); Opc=getch()-'0';

    switch(Opc)
      {
        case 1:
            {
                cout<<"\n\n\n\n\t\t "; S("+",15,10); Z(15); cout<<" Base "; Z(10); cout<<"N"; Z(15); cout<<": "; Z(3); cin>>Auxy1; Z(15);

                if(Auxy1 > 20){cout<<"\n\n\t\t "; S("!",12,4); Z(15); cout<<" La Base "; Z(10); cout<<"N"; Z(15); cout<<" es Demasiado Grande."; Pause(); continue;}
                else if(Auxy1 < 1){cout<<"\n\n\t\t "; S("!",12,4); Z(15); cout<<" La Base "; Z(10); cout<<"N"; Z(15); cout<<" es Demasiado Pequeña."; Pause(); continue;}

                Z(10);
                cout<<"\n\t\t "; S("+",15,10); Z(15); cout<<" Base "; Z(10); cout<<"M"; Z(15); cout<<": "; Z(3); cin>>Auxy2; Z(15);

                if(Auxy2 > 20){cout<<"\n\n\t\t "; S("!",12,4); Z(15); cout<<" La Base "; Z(10); cout<<"M"; Z(15); cout<<" es Demasiado Grande."; Pause(); continue;}
                else if(Auxy2 < 1){cout<<"\n\n\t\t "; S("!",12,4); Z(15); cout<<" La Base "; Z(10); cout<<"M"; Z(15); cout<<" es Demasiado Pequeña."; Pause(); continue;}
                else {Base1 = Auxy1; Base2 = Auxy2;}

                Z(10);
                CadE = "0"; CadS = "0";

            } break;
        case 2:

            {
                if(Base1 == 0){cout<<"\n\n\t\t "; S("+",15,10); Z(15); cout<<" Elige Las Bases Primero."; Pause(); continue;}

                Clear();

                Z(15); cout<<"\n\n\t Número en Base "; Z(10); cout<<"["; Z(3); cout<<Base1; Z(10); cout<<"]"; Z(15); cout<<": "; Z(3); cin>>CadE;

                if(!Comprobar(CadE, Base1))
                {
                    cout<<"\n\n\t\t "; S("+",15,10); Z(15); cout<<" Error Con Los Datos En La Cadena";
                    CadE = "0";
                    Pause();
                    continue;
                }

                if(Base1 == 10)
                {
                    CadS = "";
                    CadS = DecA(CadE, Base1, Base2, CadS);
                }
                else if(Base2 == 10)
                {
                    CadS = "";
                    CadS = ADec(CadE, Base1, Base2, CadS);
                }
                else
                {
                    CAux = ADec(CadE, Base1, 10, CadS);
                    CadS = "";
                    CadS = DecA(CAux, 10, Base2, CadS);
                }

                Z(15); cout<<"\n\n\t Base "; Z(3); cout<<Base1; Z(15); cout<<" a Base "; Z(10); cout<<"[";
                Z(3); cout<<Base2; Z(10); cout<<"]"; Z(15); cout<<": "; Z(3); cout<<CadS<<endl;

                Pause();

            } break;
        case 0: xD = false; break;
        default: Z(3); cout<<"   Opción Invalida Como Clarita. :'V (De Heidi)"; Pause();
      }
}while(xD != false);

    cout<<endl<<endl<<endl;

    return 0;
}


