#include <iostream>
#include <ctime>
#include <windows.h>
#include <conio.h>

using namespace std;

std::string PL( const char * text )
{
    std::string result;
    for(; * text; text++ )
    switch( * text )
    {
    case 'π': result += static_cast < char >( 0xa5 ); break;
    case 'Ê': result += static_cast < char >( 0x86 ); break;
    case 'Í': result += static_cast < char >( 0xa9 ); break;
    case '≥': result += static_cast < char >( 0x88 ); break;
    case 'Ò': result += static_cast < char >( 0xe4 ); break;
    case 'Û': result += static_cast < char >( 0xa2 ); break;
    case 'ú': result += static_cast < char >( 0x98 ); break;
    case 'ø': result += static_cast < char >( 0xbe ); break;
    case 'ü': result += static_cast < char >( 0xab ); break;
    case '•': result += static_cast < char >( 0xa4 ); break;
    case '∆': result += static_cast < char >( 0x8f ); break;
    case ' ': result += static_cast < char >( 0xa8 ); break;
    case '£': result += static_cast < char >( 0x9d ); break;
    case '—': result += static_cast < char >( 0xe3 ); break;
    case '”': result += static_cast < char >( 0xe0 ); break;
    case 'å': result += static_cast < char >( 0x97 ); break;
    case 'Ø': result += static_cast < char >( 0xbd ); break;
    case 'è': result += static_cast < char >( 0x8d ); break;
        default: result += * text; break;
    }
    return result;
}

int main()
{
    start:;

    srand(time(NULL));

    HANDLE kolor;
    kolor=GetStdHandle(STD_OUTPUT_HANDLE);

    char _1a=0;
    char _2a=0;
    char _3a=0;

    char _1b=0;
    char _2b=0;
    char _3b=0;

    char _1c=0;
    char _2c=0;
    char _3c=0;


    string wybor;


    int los=0;


    poczatek:;

    for(;;)
    {
        _for:;
        SetConsoleTextAttribute(kolor, 15);
        cout<<"=================================================="<<endl;
        SetConsoleTextAttribute(kolor, 4);
        cout<<PL("                 K”£KO I KRZYØYK                  ")<<endl;
        SetConsoleTextAttribute(kolor, 15);
        cout<<"=================================================="<<endl;

        cout<<"   "; cout<<"||1||2||3||";
        cout<<endl;
        cout<<"  =||=||=||=||";
        cout<<endl;
        cout<<"  a||"; cout<<_1a; cout<<"||"; cout<<_2a; cout<<"||"; cout<<_3a; cout<<"||";
        cout<<endl;
        cout<<"  =||=||=||=||";
        cout<<endl;
        cout<<"  b||"; cout<<_1b; cout<<"||"; cout<<_2b; cout<<"||"; cout<<_3b; cout<<"||";
        cout<<endl;
        cout<<"  =||=||=||=||";
        cout<<endl;
        cout<<"  c||"; cout<<_1c; cout<<"||"; cout<<_2c; cout<<"||"; cout<<_3c; cout<<"||";
        cout<<endl;

        cout<<endl;

        SetConsoleTextAttribute(kolor, 5);
        cout<<PL("Jesteú krzyøykiem, wybierz pole (np. 1a, 2c itp.): ");
        cin>>wybor;

        if(wybor[0]=='1' && wybor[1]=='a' && _1a==0|| wybor[1]=='1' && wybor[0]=='a' && _1a==0)
        {
            _1a='X';
        }
        else if(wybor[0]=='2' && wybor[1]=='a' && _2a==0|| wybor[1]=='2' && wybor[0]=='a' && _2a==0)
        {
            _2a='X';
        }
        else if(wybor[0]=='3' && wybor[1]=='a' && _3a==0|| wybor[1]=='3' && wybor[0]=='a' && _3a==0)
        {
            _3a='X';
        }
        else if(wybor[0]=='1' && wybor[1]=='b' && _1b==0|| wybor[1]=='1' && wybor[0]=='b' && _1b==0)
        {
            _1b='X';
        }
        else if(wybor[0]=='2' && wybor[1]=='b' && _2b==0|| wybor[1]=='2' && wybor[0]=='b' && _2b==0)
        {
            _2b='X';
        }
        else if(wybor[0]=='3' && wybor[1]=='b' && _3b==0|| wybor[1]=='3' && wybor[0]=='b' && _3b==0)
        {
            _3b='X';
        }
        else if(wybor[0]=='1' && wybor[1]=='c' && _1c==0|| wybor[1]=='1' && wybor[0]=='c' && _1c==0)
        {
            _1c='X';
        }
        else if(wybor[0]=='2' && wybor[1]=='c' && _2c==0|| wybor[1]=='2' && wybor[0]=='c' && _2c==0)
        {
            _2c='X';
        }
        else if(wybor[0]=='3' && wybor[1]=='c' && _3c==0|| wybor[1]=='3' && wybor[0]=='c' && _3c==0)
        {
            _3c='X';
        }
        else
        {
            SetConsoleTextAttribute(kolor, 4);
            cout<<endl;
            cout<<PL("Nie ma takiej opcji, lub to pole jest juø zajÍte.");
            Sleep(3000);
            system("cls");
            goto _for;
        }

        system("cls");

        SetConsoleTextAttribute(kolor, 15);
        cout<<"=================================================="<<endl;
        SetConsoleTextAttribute(kolor, 4);
        cout<<PL("                 K”£KO I KRZYØYK                  ")<<endl;
        SetConsoleTextAttribute(kolor, 15);
        cout<<"=================================================="<<endl;

        cout<<"   "; cout<<"||1||2||3||";
        cout<<endl;
        cout<<"  =||=||=||=||";
        cout<<endl;
        cout<<"  a||"; cout<<_1a; cout<<"||"; cout<<_2a; cout<<"||"; cout<<_3a; cout<<"||";
        cout<<endl;
        cout<<"  =||=||=||=||";
        cout<<endl;
        cout<<"  b||"; cout<<_1b; cout<<"||"; cout<<_2b; cout<<"||"; cout<<_3b; cout<<"||";
        cout<<endl;
        cout<<"  =||=||=||=||";
        cout<<endl;
        cout<<"  c||"; cout<<_1c; cout<<"||"; cout<<_2c; cout<<"||"; cout<<_3c; cout<<"||";
        cout<<endl;

        cout<<endl;

        if(_1a=='X' && _2a=='X' && _3a=='X' || _1b=='X' && _2b=='X' && _3b=='X' || _1c=='X' && _2c=='X' && _3c=='X' || _1a=='X' && _1b=='X' && _1c=='X' || _2a=='X' && _2b=='X' && _2c=='X' || _3a=='X' && _3b=='X' && _3c=='X' || _1a=='X' && _2b=='X' && _3c=='X'  || _3a=='X' && _2b=='X' && _1c=='X')
        {
            SetConsoleTextAttribute(kolor, 5);
            cout<<PL("Brawo! Wygra≥eú/aú!");
            Sleep(10000);
            system("cls");
            goto start;
        }
        else if(_1a!=0 && _2a!=0 && _3a!=0 && _1b!=0 && _2b!=0 && _3b!=0 && _1c!=0 && _2c!=0 && _3c!=0)
        {
            SetConsoleTextAttribute(kolor, 5);
            cout<<PL("Remis, nikt nie wygra≥, sprÛbuj jeszcze raz.");
            Sleep(10000);
            system("cls");
            goto start;
        }



        if(_1a=='O' && _3a=='O' && _2a==0|| _2b=='O' && _2c=='O' && _2a==0)
        {
            _2a='O';

            goto O;
        }
        else if(_1a=='O' && _2a=='O' && _3a==0|| _3b=='O' && _3c=='O' && _3a==0|| _2b=='O' && _1c=='O' && _3a==0)
        {
            _3a='O';

            goto O;
        }
        else if(_2a=='O' && _3a=='O' && _1a==0|| _1b=='O' && _1c=='O' && _1a==0|| _2b=='O' && _3c=='O' && _1a==0)
        {
            _1a='O';

            goto O;
        }
        else if(_1a=='O' && _1b=='O' && _1c==0|| _2c=='O' && _3c=='O' && _1c==0|| _2b=='O' && _3a=='O' && _1c==0)
        {
            _1c='O';

            goto O;
        }
        else if(_1c=='O' && _2c=='O' && _3c==0|| _3a=='O' && _3b=='O' && _3c==0|| _2b=='O' && _1a=='O' && _3c==0)
        {
            _3c='O';

            goto O;
        }
        else if(_1c=='O' && _3c=='O' && _2c==0|| _2a=='O' && _2b=='O' && _2c==0)
        {
            _2c='O';

            goto O;
        }
        else if(_1a=='O' && _1c=='O' && _1b==0|| _2b=='O' && _3b=='O' && _1b==0)
        {
            _1b='O';

            goto O;
        }
        else if(_3a=='O' && _3c=='O' && _3b==0|| _1b=='O' && _2b=='O' && _3b==0)
        {
            _3b='O';

            goto O;
        }
        else if(_1a=='O' && _3c=='O' && _2b==0|| _3a=='O' && _1c=='O' && _2b==0|| _2a=='O' && _2c=='O' && _2b==0|| _1b=='O' && _3b=='O'&& _2b==0)
        {
            _2b='O';

            goto O;
        }



        if(_1a=='X' && _3a=='X' && _2a==0|| _2b=='X' && _2c=='X' && _2a==0)
        {
            _2a='O';

            goto O;
        }
        else if(_1a=='X' && _2a=='X' && _3a==0|| _3b=='X' && _3c=='X' || _2b=='X' && _1c=='X' && _3a==0)
        {
            _3a='O';

            goto O;
        }
        else if(_2a=='X' && _3a=='X' && _1a==0|| _1b=='X' && _1c=='X' && _1a==0|| _2b=='X' && _3c=='X' && _1a==0)
        {
            _1a='O';

            goto O;
        }
        else if(_1a=='X' && _1b=='X' && _1c==0|| _2c=='X' && _3c=='X' && _1c==0|| _2b=='X' && _3a=='X' && _1c==0)
        {
            _1c='O';

            goto O;
        }
        else if(_1c=='X' && _2c=='X' && _3c==0|| _3a=='X' && _3b=='X' && _3c==0|| _2b=='X' && _1a=='X' && _3c==0)
        {
            _3c='O';

            goto O;
        }
        else if(_1c=='X' && _3c=='X' && _2c==0|| _2a=='X' && _2b=='X' && _2c==0)
        {
            _2c='O';

            goto O;
        }
        else if(_1a=='X' && _1c=='X' && _1b==0|| _2b=='X' && _3b=='X' && _1b==0)
        {
            _1b='O';

            goto O;
        }
        else if(_3a=='X' && _3c=='X' && _3b==0|| _1b=='X' && _2b=='X' && _3b==0)
        {
            _3b='O';

            goto O;
        }
        else if(_1a=='X' && _3c=='X' && _2b==0|| _3a=='X' && _1c=='X' && _2b==0|| _2a=='X' && _2c=='X' && _2b==0|| _1b=='X' && _3b=='X' && _2b==0)
        {
            _2b='O';

            goto O;
        }
        else
        {
            _else:;

            los=rand()%9+1;

            if(los==1)
            {
                if(_1a!=0)
                {
                    goto _else;
                }

                _1a='O';
            }
            else if(los==2)
            {
                if(_2a!=0)
                {
                    goto _else;
                }

                _2a='O';
            }
            else if(los==3)
            {
                if(_3a!=0)
                {
                    goto _else;
                }

                _3a='O';
            }
            else if(los==4)
            {
                if(_1b!=0)
                {
                    goto _else;
                }

                _1b='O';
            }
            else if(los==5)
            {
                if(_2b!=0)
                {
                    goto _else;
                }

                _2b='O';
            }
            else if(los==6)
            {
                if(_3b!=0)
                {
                    goto _else;
                }

                _3b='O';
            }
            else if(los==7)
            {
                if(_1c!=0)
                {
                    goto _else;
                }

                _1c='O';
            }
            else if(los==8)
            {
                if(_2c!=0)
                {
                    goto _else;
                }

                _2c='O';
            }
            else if(los==9)
            {
                if(_3c!=0)
                {
                    goto _else;
                }

                _3c='O';
            }
        }

        O:;

        system("cls");

        SetConsoleTextAttribute(kolor, 15);
        cout<<"=================================================="<<endl;
        SetConsoleTextAttribute(kolor, 4);
        cout<<PL("                 K”£KO I KRZYØYK                  ")<<endl;
        SetConsoleTextAttribute(kolor, 15);
        cout<<"=================================================="<<endl;

        cout<<"   "; cout<<"||1||2||3||";
        cout<<endl;
        cout<<"  =||=||=||=||";
        cout<<endl;
        cout<<"  a||"; cout<<_1a; cout<<"||"; cout<<_2a; cout<<"||"; cout<<_3a; cout<<"||";
        cout<<endl;
        cout<<"  =||=||=||=||";
        cout<<endl;
        cout<<"  b||"; cout<<_1b; cout<<"||"; cout<<_2b; cout<<"||"; cout<<_3b; cout<<"||";
        cout<<endl;
        cout<<"  =||=||=||=||";
        cout<<endl;
        cout<<"  c||"; cout<<_1c; cout<<"||"; cout<<_2c; cout<<"||"; cout<<_3c; cout<<"||";
        cout<<endl;

        cout<<endl;

        if(_1a=='O' && _2a=='O' && _3a=='O' || _1b=='O' && _2b=='O' && _3b=='O' || _1c=='O' && _2c=='O' && _3c=='O' || _1a=='O' && _1b=='O' && _1c=='O' || _2a=='O' && _2b=='O' && _2c=='O' || _3a=='O' && _3b=='O' && _3c=='O' || _1a=='O' && _2b=='O' && _3c=='O'  || _3a=='O' && _2b=='O' && _1c=='O')
        {
            SetConsoleTextAttribute(kolor, 5);
            cout<<PL("Niestety przegra≥eú/aú, sprÛbuj ponownie.");
            Sleep(10000);
            system("cls");
            goto start;
        }

        system("cls");
    }






    return 0;
}
