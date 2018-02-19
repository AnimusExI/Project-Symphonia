#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
//------------------------------------------------------------------------------------------------------------------------//
bool elegir=true, repetir=true, cambiar_dif=true, calcurep=true, sigue=true, minicalcurep=true, logica=true, codrep=true;
string juego="", hacer="", dif_ad="", calcu="", calcurespuesta="", cres="",logresp="", loghacer="";
string verde="[*]", amarillo="[/]", rojo="[-]", color1, color2, color3, color4, codhacer="", cuenta="";
int numad=-1, resp=-1, intentos=1, n, m, r, xres=60, yres=45, oro=0, eleccion=-1, codigo1, codigo2, codigo3, codigo4;
int clave1, clave2, clave3, clave4, intentoscodigo=0;
double a, b, c, disc, eps=-1e-10, x1, x2, xmin=-1, xmax=1, ymin=-1, ymax=1, x, y, pi=acos(0)*2, operador1, operador2;
double resultado;
char ch='$';
//-----------------------------------------------------------------------------------------------------------------------//

double dis (double a, double b, double c) {
    return sqrt(b*b-4*a*c);
}
double sol1 (double a, double b, double disc) {
    return (-b+disc)/(2*a);
}
double sol2 (double a, double b, double disc) {
    return (-b-disc)/(2*a);
}
double f (double x) { //Funcion a dibujar
    return sin(x);
}
void dibuja(double xmin, double xmax, double ymin, double ymax, int xres, int yres , char c) {
    double incx=(xmax-xmin)/(xres -1);
    double incy=(ymax-ymin)/(yres -1);
        for(int iy=0;iy<yres;++iy) {
         for(int ix=0;ix<xres;++ix) {
            double x=xmin+ix*incx;
            double y=ymax-iy*incy;
            if ((f(x)+incy>y) and (y>f(x))) cout << ch;
            else cout << ' ';
                }
        cout << endl;
            }
}

int ver(int codigo, int clave) {
    if (codigo==clave) return 1;
    else if (codigo!=clave and (clave==codigo1 or clave==codigo2 or clave==codigo3 or clave==codigo4)) return 2;
    else if (codigo!=clave) return 3;
}

int main()
{
srand(time(0)); //Necesario para iniciar el programa
while (elegir==true) {
cout << endl << endl << endl;

cout << "          #######                                                                                              " << endl;
cout << "        /       ###                                          #                                 #               " << endl;
cout << "       /         ##                                          ##                               ###              " << endl;
cout << "       ##        #                                           ##                                #               " << endl;
cout << "        ###                                                  ##                                                " << endl;
cout << "       ## ###       ##   ####    ### /### /###       /###    ##  /##      /###   ###  /###    ###       /###   " << endl;
cout << "        ### ###      ##    ###  / ##/ ###/ /##      / ###    ## / ###    / ###  / ###/ ####    ###     / ###  /" << endl;
cout << "          ### ###    ##     ###/   ##  ###/ ###    /   ###   ##/   ###  /   ###/   ##   ###     ##    /   ###/ " << endl;
cout << "            ### /##  ##      ##    ##   ##   ##   ##    ##   ##     ## ##    ##    ##    ##     ##   ##    ##  " << endl;
cout << "              #/ /## ##      ##    ##   ##   ##   ##    ##   ##     ## ##    ##    ##    ##     ##   ##    ##  " << endl;
cout << "               #/ ## ##      ##    ##   ##   ##   ##    ##   ##     ## ##    ##    ##    ##     ##   ##    ##  " << endl;
cout << "                # /  ##      ##    ##   ##   ##   ##    ##   ##     ## ##    ##    ##    ##     ##   ##    ##  " << endl;
cout << "      /##        /   ##      ##    ##   ##   ##   ##    ##   ##     ## ##    ##    ##    ##     ##   ##    /#  " << endl;
cout << "     /  ########/     #########    ###  ###  ###  #######    ##     ##  ######     ###   ###    ### / ####/ ## " << endl;
cout << "    /     #####         #### ###    ###  ###  ### ######      ##    ##   ####       ###   ###    ##/   ###   ##" << endl;
cout << "                             ###                 ##                                                            " << endl;
cout << "                      #####   ###                ##                                                            " << endl;
cout << "                     /#######  /#                 ##                                                           " << endl;
cout << "                   /      ###/                    ##                                                           " << endl;

    cout << endl << endl << "A que minijuego quieres jugar:   [Adivinar]   [Matemagia]   [Logica]   [Calculadora]" << endl << endl;
    while (juego!="Adivinar" and juego!="Matemagia" and juego!="Calculadora" and juego!="Logica") cin >> juego;
        if (juego=="Adivinar") {
            while (cambiar_dif==true) {
cout << endl << endl << endl;


cout << "                                ##            ##                                                                   " << endl;
cout << "                             /####             ##    #               #                                             " << endl;
cout << "                            /  ###             ##   ###             ###                                            " << endl;
cout << "                               /##             ##    #  ##           #                                             " << endl;
cout << "                              /  ##            ##       ##                                                         " << endl;
cout << "                              /  ##        ### ##  ###   ##    ### ###   ###  /###     /###                        " << endl;
cout << "                             /    ##      ######### ###   ##    ### ###   ###/ #### / / ###  /                     " << endl;
cout << "                             /    ##     ##   ####   ##   ##     ### ##    ##   ###/ /   ###/                      " << endl;
cout << "                            /      ##    ##    ##    ##   ##      ## ##    ##    ## ##    ##                       " << endl;
cout << "                            /########    ##    ##    ##   ##      ## ##    ##    ## ##    ##                       " << endl;
cout << "                           /        ##   ##    ##    ##   ##      ## ##    ##    ## ##    ##                       " << endl;
cout << "                           #        ##   ##    ##    ##   ##      ## ##    ##    ## ##    ##                       " << endl;
cout << "                          /####      ##  ##    /#    ##   ##      /  ##    ##    ## ##    /#                       " << endl;
cout << "                         /   ####    ## / ####/      ### / ######/   ### / ###   ### ####/ ##                      " << endl;
cout << "                        /     ##      #/   ###        ##/   #####     ##/   ###   ### ###   ##                     " << endl;
cout << "                        #                                                                                          " << endl;
cout << "                         ##                                                                                        " << endl;


            cout << endl << endl << endl << "Elige dificultad: [Facil 0-100]   [Normal 0-500]  [Dificil 0-1000]" << endl << endl;
                while (dif_ad!="Facil" and dif_ad!="Normal" and dif_ad!="Dificil") {
                    cin >> dif_ad;
                } // while dif_ad != facil and normal and dificil
                if (dif_ad=="Facil") numad=rand()%100;
                else if (dif_ad=="Normal") numad=rand()%500;
                else if (dif_ad=="Dificil") numad=rand()%1000;
                while (repetir==true) {
                    cout << "Adivina el numero oculto:" << endl << endl;
                    cin >> resp;
                    while (resp!=numad) {
                        if (resp<numad)  cout << "Error!! Demasiado pequenio!!" << endl;
                        else if (resp>numad) cout << "Error!! Demasiado grande!!" << endl;
                        cout << endl << "Numero: ";
                        cin >> resp;
                        intentos++;
                    }// while resp != numad
                    if (resp==numad) cout << "Correcto!! Has necesitado " << intentos << " intentos." << endl << endl;
                    cout << "Que quieres hacer?? [Repetir] [Dificultad] [Minijuego] [Abandonar]" << endl << endl;
                    while (hacer!="Repetir" and hacer!="Dificultad" and hacer!="Minijuego" and hacer!="Abandonar") {
                        cin >> hacer;
                    }//while hacer != Repetir and cambiar dificultad and cambiar minijuego and abandonar
                    repetir=false;
                    cambiar_dif=false;
                    elegir=false;
                        if (hacer=="Repetir") repetir=true;
                        else if (hacer=="Dificultad") cambiar_dif=true;
                        else if (hacer=="Minijuego") elegir=true;
                    hacer="";  //Devolver variables a valores originales
                    dif_ad="";
                    resp=-1;
                    intentos=1;
                    juego="";
                    }//while repetir == true
                    repetir=true; //Lo cambiamos aquí para que no repita si o si
                }// while cambiar_dif == true
                cambiar_dif=true;
        } //if juego == Adivinar
        if (juego=="Matemagia") {
         while (repetir==true) {
cout << endl << endl << endl;

cout << "           #####   ##    ##                                                                                   " << endl;
cout << "         ######  /#### #####                                                                #                 " << endl;
cout << "        /#   /  /  ##### #####              #                                              ###                " << endl;
cout << "       /    /  /   # ##  # ##              ##                                               #                 " << endl;
cout << "           /  /    #     #                 ##                                                                 " << endl;
cout << "          ## ##    #     #      /###     ######## /##  ### /### /###     /###     /###    ###       /###      " << endl;
cout << "          ## ##    #     #     / ###  / ######## / ###  ##/ ###/ /##  / / ###  / /  ###  / ###     / ###  /   " << endl;
cout << "          ## ##    #     #    /   ###/     ##   /   ###  ##  ###/ ###/ /   ###/ /    ###/   ##    /   ###/    " << endl;
cout << "          ## ##    #     #   ##    ##      ##  ##    ### ##   ##   ## ##    ## ##     ##    ##   ##    ##     " << endl;
cout << "          ## ##    #     ##  ##    ##      ##  ########  ##   ##   ## ##    ## ##     ##    ##   ##    ##     " << endl;
cout << "          #  ##    #     ##  ##    ##      ##  #######   ##   ##   ## ##    ## ##     ##    ##   ##    ##     " << endl;
cout << "             /     #      ## ##    ##      ##  ##        ##   ##   ## ##    ## ##     ##    ##   ##    ##     " << endl;
cout << "         /##/      #      ## ##    /#      ##  ####    / ##   ##   ## ##    /# ##     ##    ##   ##    /#     " << endl;
cout << "        /  #####           ## ####/ ##     ##   ######/  ###  ###  ### ####/ ## ########    ### / ####/ ##    " << endl;
cout << "       /     ##                ###   ##     ##   #####    ###  ###  ### ###   ##  ### ###    ##/   ###   ##   " << endl;
cout << "       #                                                                               ###                    " << endl;
cout << "        ##                                                                       ####   ###                   " << endl;
cout << "                                                                               /######  /#                    " << endl;
cout << "                                                                              /     ###/                      " << endl;


            cout << endl << endl << endl << "Por favor, elija un numero ``n`` preferiblemente de una cifra" << endl;
            cin >> n;
            m=n;
            cout << "[Ha elegido el numero " << n << "]" << endl;
            cout << "Multiplique su numero por 10: ";
            cin >> r;
            n=10*n;
            if (r!=n) cout << "Error!! Da: " << n << "." << endl;
            cout << "Bien hecho, ahora sumele 6: ";
            cin >> r;
            n=n+6;
            if (r!=n) cout << "Error!! Da: " << n << "." << endl;
            cout << "Suma 3: ";
            cin >> r;
            n=n+3;
            if (r!=n) cout << "Error!! Da: " << n << "." << endl;
            cout << "Ahora restele el numero que penso originalmetne: ";
            cin >> r;
            n=n-m;
            if (r!=n) cout << "Error!! Da: " << n << "." << endl;
            cout << "Si le ha quedado un numero de 2 cifras: ";
            cout << "Tache una y digame la otra." << endl;
            int x=7;
            cout << endl << "A esa cifra restale 9 y tendras la otra!!" << endl;
            int z=x-9;
            //Termina juego
            elegir=false; //Devolver variables a valor original
            repetir=false;
            juego="";
            cout << endl << "Que quieres hacer?? [Repetir]  [Cambiar]  [Abandonar]" << endl << endl;
            while (hacer!="Repetir" and hacer!="Cambiar" and hacer!="Abandonar") {
                cin >> hacer;
             }//while hacer != repetir, cambiar y abandonar
            if (hacer=="Repetir") repetir=true;
            else if (hacer=="Cambiar") elegir=true;
            }//while repetir == true
            repetir=true; //Devolver otras variables a valor original
            hacer="";
        }//if juego == Matemagia
        if (juego=="Logica") { //WIP

    cout << endl << endl << endl;

cout << "                             ##### /                                                                           " << endl;
cout << "                          ######  /                              #                                             " << endl;
cout << "                         /#   /  /                              ###                                            " << endl;
cout << "                        /    /  /                                #                                             " << endl;
cout << "                            /  /                                                                               " << endl;
cout << "                           ## ##              /###     /###    ###       /###      /###                        " << endl;
cout << "                           ## ##             / ###  / /  ###  / ###     / ###  /  / ###  /                     " << endl;
cout << "                           ## ##            /   ###/ /    ###/   ##    /   ###/  /   ###/                      " << endl;
cout << "                           ## ##           ##    ## ##     ##    ##   ##        ##    ##                       " << endl;
cout << "                           ## ##           ##    ## ##     ##    ##   ##        ##    ##                       " << endl;
cout << "                           #  ##           ##    ## ##     ##    ##   ##        ##    ##                       " << endl;
cout << "                              /            ##    ## ##     ##    ##   ##        ##    ##                       " << endl;
cout << "                          /##/           / ##    ## ##     ##    ##   ###     / ##    /#                       " << endl;
cout << "                         /  ############/   ######   ########    ### / ######/   ####/ ##                      " << endl;
cout << "                        /     #########      ####      ### ###    ##/   #####     ###   ##                     " << endl;
cout << "                        #                                   ###                                                " << endl;
cout << "                         ##                           ####   ###                                               " << endl;
cout << "                                                    /######  /#                                                " << endl;
cout << "                                                   /     ###/                                                  " << endl;


            while (logica==true) {//Añadir + cosas
        loghacer="";
        logresp="";
        cout << endl << "A que reto te quieres enfrentar??   [Cofres]   [Codigo]" << endl << endl;
        while (logresp!="Cofres" and logresp!="Codigo") {
            cin >> logresp;
        }//while logresp != cofres and todo
        if (logresp=="Cofres") {
cout << endl << endl << endl;


cout << "                        # ###                 /##                                                              " << endl;
cout << "                      /  /###  /            #/ ###                                                             " << endl;
cout << "                     /  /  ###/            ##   ###                                                            " << endl;
cout << "                    /  ##   ##             ##                                                                  " << endl;
cout << "                   /  ###                  ##                                                                  " << endl;
cout << "                  ##   ##          /###    ###### ###  /###     /##       /###                                 " << endl;
cout << "                  ##   ##         / ###    #####   ###/ ####   / ###     / #### /                              " << endl;
cout << "                  ##   ##        /   ###   ##       ##   ###  /   ###   ##  ###/                               " << endl;
cout << "                  ##   ##       ##    ##   ##       ##       ##    ### ####                                    " << endl;
cout << "                  ##   ##       ##    ##   ##       ##       ########    ###                                   " << endl;
cout << "                   ##  ##       ##    ##   ##       ##       #######       ###                                 " << endl;
cout << "                    ## #      / ##    ##   ##       ##       ##              ###                               " << endl;
cout << "                     ###     /  ##    ##   ##       ##       ####    /  /###  ##                               " << endl;
cout << "                      ######/    ######    ##       ###       ######/  / #### /                                " << endl;
cout << "                        ###       ####      ##       ###       #####      ###/                                 " << endl;

cout << endl << endl;

        cout << "[Reto 1]" << endl << endl;
        oro=1;

        cout << "[Cofre 1] -> El oro NO esta en el cofre 2 | [Cofre 2] -> El oro esta en los cofres 1 o 3 | [Cofre 3] -> El oro NO esta AQUI" << endl;
        cout << endl << "El oro esta en el cofre: ";
        while (eleccion!=1 and eleccion!=2 and eleccion!=3) {
            cin >> eleccion;
        }//whiile eleccion != 1 and 2 and 3
        if (eleccion==oro) cout << "Correcto!!" << endl << endl;
        else if (eleccion!=oro) cout << "Error!! El oro estaba en el cofre " << oro << endl << endl;
        oro=0;
        eleccion=-1;

        cout << "[Reto 2]" << endl << endl;
        oro=3;
        cout << "[Cofre 1] -> El oro esta en 2 | [Cofre 2] -> El oro esta en 1 o 3 | [Cofre 3] -> El cofre 1 miente, y ademas no posee el oro" << endl;
        cout << endl << "Si UNO MIENTE, el oro esta en el cofre: ";
        while (eleccion!=1 and eleccion!=2 and eleccion!=3) {
            cin >> eleccion;
        }//whiile eleccion != 1 and 2 and 3
            if (eleccion==oro) cout << "Correcto!!" << endl << endl;
            else if (eleccion!=oro) cout << "Error!! El oro estaba en el cofre " << oro << endl << endl;

        oro=0;
        eleccion=-1;
        cout << "[Reto 3]" << endl << endl;
        oro=1;

        cout << "[Cofre 1] -> El oro NO esta aqui | [Cofre 2] -> El oro NO esta aqui | [Cofre 3] -> El oro esta en el cofre 2" << endl;
        cout << endl << "Si SOLO uno dice la verdad, el oro esta en el cofre: ";
        while (eleccion!=1 and eleccion!=2 and eleccion!=3) {
            cin >> eleccion;
        }//whiile eleccion != 1 and 2 and 3
            if (eleccion==oro) cout << "Correcto!!" << endl << endl;
            else if (eleccion!=oro) cout << "Error!! El oro estaba en el cofre " << oro << endl << endl;
        oro=0;
        eleccion=-1;

        cout << "[Reto 4]" << endl << endl;
        oro=2;

        cout << "[Cofre 1] -> El oro NO esta en el cofre 2 | [Cofre 2] -> El oro esta en el cofre 1 | [Cofre 3] -> El cofre 2 MIENTE" << endl;
        cout << endl << "Si DOS de los cofres mienten, el oro esta en el cofre: ";
        while (eleccion!=1 and eleccion!=2 and eleccion!=3) {
            cin >> eleccion;
        }//whiile eleccion != 1 and 2 and 3
            if (eleccion==oro) cout << "Correcto!!" << endl << endl;
            else if (eleccion!=oro) cout << "Error!! El oro estaba en el cofre " << oro << endl << endl;
        oro=0;
        eleccion=-1;

        cout << "[Reto 5]" << endl << endl;
        oro=2;
        cout << "[Cofre 1] -> El oro esta AQUI | [Cofre 2] -> El oro NO esta AQUI | [Cofre 3] -> El oro NO esta en el cofre 1" << endl;
        cout << endl << "Si SOLO UNO de los cofres dice la verdad, el oro esta en el cofre: ";
        while (eleccion!=1 and eleccion!=2 and eleccion!=3) {
            cin >> eleccion;
        }//whiile eleccion != 1 and 2 and 3
            if (eleccion==oro) cout << "Correcto!!" << endl << endl;
            else if (eleccion!=oro) cout << "Error!! El oro estaba en el cofre " << oro << endl << endl;
        oro=0;
        eleccion=-1;
        }//if logresp == cofres

        if (logresp=="Codigo") {
          while (codrep==true) {

cout << endl << endl << endl;

cout << "                                   # ###                  ##                                                     " << endl;
cout << "                                 /  /###  /                ##    #                                               " << endl;
cout << "                                /  /  ###/                 ##   ###                                              " << endl;
cout << "                               /  ##   ##                  ##    #                                               " << endl;
cout << "                              /  ###                       ##                                                    " << endl;
cout << "                             ##   ##          /###     ### ##  ###       /###      /###                          " << endl;
cout << "                             ##   ##         / ###  / ########  ###     /  ###  / / ###  /                       " << endl;
cout << "                             ##   ##        /   ###/ ##   ####   ##    /    ###/ /   ###/                        " << endl;
cout << "                             ##   ##       ##    ##  ##    ##    ##   ##     ## ##    ##                         " << endl;
cout << "                             ##   ##       ##    ##  ##    ##    ##   ##     ## ##    ##                         " << endl;
cout << "                              ##  ##       ##    ##  ##    ##    ##   ##     ## ##    ##                         " << endl;
cout << "                               ## #      / ##    ##  ##    ##    ##   ##     ## ##    ##                         " << endl;
cout << "                                ###     /  ##    ##  ##    /#    ##   ##     ## ##    ##                         " << endl;
cout << "                                 ######/    ######    ####/      ### / ########  ######                          " << endl;
cout << "                                   ###       ####      ###        ##/    ### ###  ####                           " << endl;
cout << "                                                                              ###                                " << endl;
cout << "                                                                        ####   ###                               " << endl;
cout << "                                                                      /######  /#                                " << endl;
cout << "                                                                     /     ###/                                  " << endl;

cout << endl << endl << endl;

            codhacer="";
            codrep=true;

            codigo1=rand()%10;
            codigo2=rand()%10;
            codigo3=rand()%10;
            codigo4=rand()%10;

            while (clave1!=codigo1 or clave2!=codigo2 or clave3!=codigo3 or clave4!=codigo4) {
                cout << "Cifra 1: ";
                cin >> clave1;
                cout << "Cifra 2: ";
                cin >> clave2;
                cout << "Cifra 3: ";
                cin >> clave3;
                cout << "Cifra 4: ";
                cin >> clave4;

                    if (ver(codigo1, clave1)==1) color1=verde;
                    if (ver(codigo1, clave1)==2) color1=amarillo;
                    if (ver(codigo1, clave1)==3) color1=rojo;

                            if (ver(codigo2, clave2)==1) color2=verde;
                            if (ver(codigo2, clave2)==2) color2=amarillo;
                            if (ver(codigo2, clave2)==3) color2=rojo;

                                if (ver(codigo3, clave3)==1) color3=verde;
                                if (ver(codigo3, clave3)==2) color3=amarillo;
                                if (ver(codigo3, clave3)==3) color3=rojo;

                    if (ver(codigo4, clave4)==1) color4=verde;
                    if (ver(codigo4, clave4)==2) color4=amarillo;
                    if (ver(codigo4, clave4)==3) color4=rojo;

            cout << endl;
            cout << clave1 << " -> " << color1 << " | ";
            cout << clave2 << " -> " << color2 << " | ";
            cout << clave3 << " -> " << color3 << " | ";
            cout << clave4 << " -> " << color4 << endl << endl;

            intentoscodigo++;
            }//while codigo1 != clave1 and codigo2...

        cout << "Correcto! El codigo era: " << codigo1 << codigo2 << codigo3 << codigo4 << "." << endl;
        cout << "Has necesitado: " << intentoscodigo << " intentos." << endl << endl;

        cout << "Quieres repetir?? [Si/No]" << endl;
        while (codhacer!="Si" and codhacer!="No") {
            cin >> codhacer;
        }//while codhacer != si and no
            clave1=-1;
            clave2=-1;
            clave3=-1;
            clave4=-1;
            color1="";
            color2="";
            color3="";
            color4="";
            intentoscodigo=0;
            if (codhacer=="Si") codrep=true;
            else if (codhacer=="No") codrep=false;
          }//while codrep == true
          codhacer="";
          codrep=true;
        }//if logresp == codigo

        clave1=-1;
        clave2=-1;
        clave3=-1;
        clave4=-1;
        color1="";
        color2="";
        color3="";
        color4="";
        intentoscodigo=0;
        oro=0;
        eleccion=-1;
        logresp="";
        cout << "Cambiar:   [Logica]   [Minijuego]   [Abandonar]" << endl << endl;
        while (loghacer!="Logica" and loghacer!="Minijuego" and loghacer!="Abandonar") {
            cin >> loghacer;
        }//while loghacer != logica and abandonar
            logica=false;
            if (loghacer=="Logica") logica=true;
            else if (loghacer=="Minijuego") logica=false;
            else if (loghacer=="Abandonar") elegir=false;
    }//while logica == true
        logresp="";
        loghacer="";
        logica=true;
        juego="";
        }//if juego == logica
        if (juego=="Calculadora") { //WIP
         while (calcurep==true) {
         cout << endl << endl << endl;


cout << "       # ###            ###                          ###                   ##                                   " << endl;
cout << "      /  /###  /          ###                          ###                   ##                                 " << endl;
cout << "     /  /  ###/            ##                           ##                   ##                                 " << endl;
cout << "    /  ##   ##             ##                           ##                   ##                                 " << endl;
cout << "   /  ###                  ##                           ##                   ##                                 " << endl;
cout << "  ##   ##          /###    ##      /###   ##   ####     ##      /###     ### ##    /###   ###  /###     /###    " << endl;
cout << "  ##   ##         / ###  / ##     / ###  / ##    ###  / ##     / ###  / ######### / ###  / ###/ #### / / ###  / " << endl;
cout << "  ##   ##        /   ###/  ##    /   ###/  ##     ###/  ##    /   ###/ ##   #### /   ###/   ##   ###/ /   ###/  " << endl;
cout << "  ##   ##       ##    ##   ##   ##         ##      ##   ##   ##    ##  ##    ## ##    ##    ##       ##    ##   " << endl;
cout << "  ##   ##       ##    ##   ##   ##         ##      ##   ##   ##    ##  ##    ## ##    ##    ##       ##    ##   " << endl;
cout << "   ##  ##       ##    ##   ##   ##         ##      ##   ##   ##    ##  ##    ## ##    ##    ##       ##    ##   " << endl;
cout << "    ## #      / ##    ##   ##   ##         ##      ##   ##   ##    ##  ##    ## ##    ##    ##       ##    ##   " << endl;
cout << "     ###     /  ##    /#   ##   ###     /  ##      /#   ##   ##    /#  ##    /# ##    ##    ##       ##    /#   " << endl;
cout << "      ######/    ####/ ##  ### / ######/    ######/ ##  ### / ####/ ##  ####/    ######     ###       ####/ ##  " << endl;
cout << "        ###       ###   ##  ##/   #####      #####   ##  ##/   ###   ##  ###      ####       ###       ###   ## " << endl;


            cout << endl << endl<< endl << "Tipo de operacion a realizar:   [Operacion]   [Ecuacion]   [Grafica]" << endl << endl;
            while (calcu!="Operacion" and calcu!="Ecuacion" and calcu!="Grafica") cin >> calcu;
            if (calcu=="Operacion") {

cout << endl << endl << endl;

cout << "       # ###                                                                                                           " << endl;
cout << "       /  /###                                                     #                                                   " << endl;
cout << "      /  /  ###                                                   ###                                                  " << endl;
cout << "     /  ##   ###                                                   #                                                   " << endl;
cout << "    /  ###    ###                                                                                                      " << endl;
cout << "   ##   ##     ##    /###     /##  ###  /###     /###     /###   ###       /###   ###  /###     /##       /###         " << endl;
cout << "   ##   ##     ##   / ###  / / ###  ###/ #### / / ###  / / ###  / ###     / ###  / ###/ #### / / ###     / #### /      " << endl;
cout << "   ##   ##     ##  /   ###/ /   ###  ##   ###/ /   ###/ /   ###/   ##    /   ###/   ##   ###/ /   ###   ##  ###/       " << endl;
cout << "   ##   ##     ## ##    ## ##    ### ##       ##    ## ##          ##   ##    ##    ##    ## ##    ### ####            " << endl;
cout << "   ##   ##     ## ##    ## ########  ##       ##    ## ##          ##   ##    ##    ##    ## ########    ###           " << endl;
cout << "    ##  ##     ## ##    ## #######   ##       ##    ## ##          ##   ##    ##    ##    ## #######       ###         " << endl;
cout << "     ## #      /  ##    ## ##        ##       ##    ## ##          ##   ##    ##    ##    ## ##              ###       " << endl;
cout << "      ###     /   ##    ## ####    / ##       ##    /# ###     /   ##   ##    ##    ##    ## ####    /  /###  ##       " << endl;
cout << "       ######/    #######   ######/  ###       ####/ ## ######/    ### / ######     ###   ### ######/  / #### /        " << endl;
cout << "         ###      ######     #####    ###       ###   ## #####      ##/   ####       ###   ### #####      ###/         " << endl;
cout << "                  ##                                                                                                   " << endl;
cout << "                  ##                                                                                                   " << endl;
cout << "                  ##                                                                                                   " << endl;
cout << "                   ##                                                                                                  " << endl;

cout << endl << endl << endl;

                while (minicalcurep==true) {
                        cout << endl;
                        cin >> operador1;
                        while (cuenta!="+" and cuenta!="-" and cuenta!="*" and cuenta!="/" and cuenta!="sqrt") {
                        cin >> cuenta;
                        }//while cuenta!= + and - and * and / and ^ and sqrt
                        if (cuenta!="sqrt") cin >> operador2;

                        if (cuenta=="+") resultado=operador1+operador2;
                        else if (cuenta=="-") resultado=operador1-operador2;
                        else if (cuenta=="*") resultado=operador1*operador2;
                        else if (cuenta=="/") resultado=operador1/operador2;
                        else if (cuenta=="sqrt") resultado=sqrt(operador1);

                        if (cuenta!="sqrt") cout << endl << operador1 << " " << cuenta << " " << operador2 << " = " << resultado;
                        else if (cuenta=="sqrt") cout << endl << "sqrt(" << operador1 << ")" << " = " << resultado;

                    cout << endl << "Quieres repetir??   [Si/No]" << endl << endl;
                    while (cres!="No" and cres!="Si") {
                        cin >> cres;
                    }//while cres != no and si
                  cuenta="";
                  if (cres=="No") minicalcurep=false;
                  cres="";
                }//while minicalcurep == true
              minicalcurep=true;
          } //if calcu == operacion
            if (calcu=="Ecuacion")  {

cout << endl << endl << endl;

cout << "           ##### ##                                                                                                    " << endl;
cout << "         ######  /### /                                            #                                                   " << endl;
cout << "        /#   /  / ###/                                            ###                                                  " << endl;
cout << "       /    /  /   ##                                              #                                                   " << endl;
cout << "           /  /                                                                                                        " << endl;
cout << "          ## ##            /###   ##   ####      /###     /###   ###       /###   ###  /###     /##       /###         " << endl;
cout << "          ## ##           / ###  / ##    ###  / / ###  / / ###    ###     / ###  / ###/ #### / / ###     / #### /      " << endl;
cout << "          ## ######      /   ###/  ##     ###/ /   ###/ /   ###/   ##    /   ###/   ##   ###/ /   ###   ##  ###/       " << endl;
cout << "          ## #####      ##         ##      ## ##    ## ##          ##   ##    ##    ##    ## ##    ### ####            " << endl;
cout << "          ## ##         ##         ##      ## ##    ## ##          ##   ##    ##    ##    ## ########    ###           " << endl;
cout << "          #  ##         ##         ##      ## ##    ## ##          ##   ##    ##    ##    ## #######       ###         " << endl;
cout << "             /          ##         ##      ## ##    ## ##          ##   ##    ##    ##    ## ##              ###       " << endl;
cout << "         /##/         / ###     /  ##      /# ##    /# ###     /   ##   ##    ##    ##    ## ####    /  /###  ##       " << endl;
cout << "        /  ##########/   ######/    ######/ ## ####/ ## ######/    ### / ######     ###   ### ######/  / #### /        " << endl;
cout << "       /     ######       #####      #####   ## ###   ## #####      ##/   ####       ###   ### #####      ###/         " << endl;
cout << "       #                                                                                                               " << endl;
cout << "       ##                                                                                                              " << endl;

cout << endl << endl << endl;
              while (minicalcurep==true) {
                cout << "Da los valores de la ecuacion en estructura ax^2+bx+c=0" << endl << endl;
                cout << "a:";
                    cin >> a;
                cout << "b:";
                    cin >> b;
                cout << "c:";
                    cin >> c;
                    disc=dis(a, b, c);
                    x1=sol1(a, b, disc);
                    x2=sol2(a, b, disc);
                        if (x1==x2) cout << "X tiene una solucion DOBLE: " << x1 << "." << endl;
                        else if (disc<eps) cout << "No existe ninguna solucion real para x." << endl;
                        else cout << "Existen 2 soluciones reales para x: " << x1 << " y " << x2 << "." << endl;
                cout << "Quieres repetir??   [Si]   [No]" << endl;
                while (cres!="No" and cres!="Si") {
                    cin >> cres;
                }//while cres != no and si
                if (cres=="No") minicalcurep=false;
                cres="";
             }//while minicalcurep == true
            minicalcurep=true;
          }//if calcu == ecuacion
            if (calcu=="Grafica") {

cout << endl << endl << endl;

cout << "                    # ###                             /##                                                                  " << endl;
cout << "                   /  /###  /                        #/ ###   #                                                            " << endl;
cout << "                  /  /  ###/                        ##   ### ###                                                           " << endl;
cout << "                 /  ##   ##                         ##        #                                                            " << endl;
cout << "                /  ###                              ##                                                                     " << endl;
cout << "               ##   ##        ###  /###     /###    ######  ###       /###      /###      /###                             " << endl;
cout << "               ##   ##   ###   ###/ #### / / ###  / #####    ###     / ###  /  / ###  /  / #### /                          " << endl;
cout << "               ##   ##  /###  / ##   ###/ /   ###/  ##        ##    /   ###/  /   ###/  ##  ###/                           " << endl;
cout << "               ##   ## /  ###/  ##       ##    ##   ##        ##   ##        ##    ##  ####                                " << endl;
cout << "               ##   ##/    ##   ##       ##    ##   ##        ##   ##        ##    ##    ###                               " << endl;
cout << "                ##  ##     #    ##       ##    ##   ##        ##   ##        ##    ##      ###                             " << endl;
cout << "                 ## #      /    ##       ##    ##   ##        ##   ##        ##    ##        ###                           " << endl;
cout << "                  ###     /     ##       ##    /#   ##        ##   ###     / ##    /#   /###  ##                           " << endl;
cout << "                   ######/      ###       ####/ ##  ##        ### / ######/   ####/ ## / #### /                            " << endl;
cout << "                     ###         ###       ###   ##  ##        ##/   #####     ###   ##   ###/                             " << endl;

cout << endl << endl << endl;

             while (minicalcurep==true) {
              dibuja(-2*pi,2*pi, -1,1, 100, 15, 'X'); //xmin xmax ymin ymax xres yres
              cout << endl;
              cout << endl << "Quieres repetir??   [Si]   [No]" << endl;
                    while (cres!="No" and cres!="Si") {
                        cin >> cres;
                    }//while cres != no and si
                  if (cres=="No") minicalcurep=false;
                  cres="";
                }//while minicalcurep == true
              minicalcurep=true;
          }//if calcu == grafica

        elegir=false;
        calcurep=false;
        calcu="";
        juego="";
        cout << "Cambiar:  [Operacion]   [Minijuego]   [Abandonar]" << endl << endl;
        while (calcurespuesta!="Operacion" and calcurespuesta!="Minijuego" and calcurespuesta!="Abandonar"){
            cin >> calcurespuesta;
           }//while calcurespuesta != cambiar operacion and cambiar minijuego and abandonar
           if (calcurespuesta=="Operacion") calcurep=true;
           if (calcurespuesta=="Minijuego") elegir=true;
           calcurespuesta="";
         }//while calcurep == true
         calcurep=true;
      }//if juego == calculadora
    } //while elegir == true
    cout << endl << endl << endl;

cout<<"                                        ##                                                                                   "<<endl;
cout<<"                                       ####                                                                                  "<<endl;
cout<<"                                     #######                                                                                 "<<endl;
cout<<"                                     ###  ##                                                                                 "<<endl;
cout<<"                                   ###    ##                                                                                 "<<endl;
cout<<"                                  ###      ##                                                                                "<<endl;
cout<<"                                  ###      ##                                                                                "<<endl;
cout<<"                                  ##       ##                                                                                "<<endl;
cout<<"                                   ##     ###                                                                                "<<endl;
cout<<"                                   ##   ####                                                                                 "<<endl;
cout<<"                                    ########                                                                                 "<<endl;
cout<<"                                    #######                                                                                  "<<endl;
cout<<"                                   ######                                                                                    "<<endl;
cout<<"                                 #######                                                                                     "<<endl;
cout<<"                                #######                                                                                      "<<endl;
cout<<"                              ######  #                                                                                      "<<endl;
cout<<"                             #####    ##                                                                                     "<<endl;
cout<<"                            #####     ## #                                                                                   "<<endl;
cout<<"                           #####    ##########                                                                               "<<endl;
cout<<"                          ####    #############                                                                              "<<endl;
cout<<"                          ###    ###   #  # ####                                                                             "<<endl;
cout<<"                          ###    ##    ##   ####                                                                             "<<endl;
cout<<"                           ##    ##    ##    ###                                                                             "<<endl;
cout<<"                           ###   ###    #    ###                                                                             "<<endl;
cout<<"                             ##    ###  ##   ##                                                                              "<<endl;
cout<<"                             ####       ## ###                                                                               "<<endl;
cout<<"                              ## #############                                                                               "<<endl;
cout<<"                                  #####   ####                                                                               "<<endl;
cout<<"                                          ###                                                                                "<<endl;
cout<<"                                         ###                                                                                 "<<endl;
cout<<"                             #######    ###                                                                                  "<<endl;
cout<<"                            #########   ##                                                                                   "<<endl;
cout<<"                            ######### ####                                                                                   "<<endl;
cout<<"                            #############                                                                                    "<<endl;
cout<<"                             ###########                                                                                     "<<endl;
cout<<"                               #######                                                                                       "<<endl;
    return 0;
} // main

