//
//  LABOLATORIUM_NR-2.cpp
//  LABOLATORIUM_NR-2
//
//  Created by Paweł Gaborek on 28/03/2019.
//  Copyright © 2019 Paweł Gaborek. All rights reserved.
//
//
//  main.cpp
//  GABOREK_LABOLATORIUM_NR-1
//
//  Created by Paweł Gaborek on 11/03/2019.
//  Copyright © 2019 Paweł Gaborek. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

//ponizej uzywam "namespace std"
using namespace std;

class NumberWithClass
{
    
public:
    
    //ponizej definiuje metode "NumberWithClass" jako publiczna. Jest ona dostepna
    //dla wywolan w funkcji main.
    NumberWithClass(string);
    //ponizej tworze stringa dla klasy
    string number_number;
    
private:
    
    //ponizej tworze funkcje wewnatrz klasy jako prywatna. Bedzie dostepna wylacznie dla metod (funckji)
    //zdefiniowanych w klasie "NumberWithClass". Nie bedzie dostepna dla wywolania w funkcji main.
    //ponizsza metoda ma za zadanie przeliczac ilosc znakow po kropce (ilosc znakow do usuniecia ze stringa)
    //wedlug mnie lepiej w klasie definiowac metode poniewaz jest czytelniej (widac do jakiej klasy nalezy metoda)
    //dla przykladu metode "NumberWithClass" zdefiniowalem poza public (jednak sama definicja jest w public)
    int numberOfMark(std::string number)
    {
        //ponizej definiuje zmienne i ich typy
        int i=0;
        int zeroMarks;
        char point='.';
        int numberZero=0;
        for(i = 0; i < number.length(); i++)
            if (number[i] != point)
            {
                zeroMarks++;
            }
            else
            {
                zeroMarks=0;
            }
        return zeroMarks;
    }
    
};

//ponizej tworze metode przeliczania stringa. Metode zdefiniowalem jako publiczna w klasie "NumberWithClass"
NumberWithClass::NumberWithClass(string number)
{
    //jezli by nie bylo "using namespace std;"
    using namespace std;
    //ponizej definiuje typy zmiennych i ich nazwy
    string change (".");
    char choice;
    int i=0;
    int j=0;
    int numberMark;
    
    //ponizej przeliczam ilosc znakow znakow w stringi. Uzywam petli do momentu napotkania null terminatora
    //ostatni znak przekazuje do ponizej "if"
    while (number[i] != '\0')
    {
        choice = number[i];
        i++;
    }
    
    //ponizej przeliczam ile znakow jest do momentu napotkania kropki
    //uzywam petli oraz komendy nazwastringa.lengh by petla dzialala do konca stringa
    //tworzefunkcje przeliczajaca ilosc znakow do kropki
    //funkcja  numberOfMark zliczam ilosc zer do odjecia w stringu jakby
    //jak nie ma kropki zwraca else ilosc znakow do usuniecia 1. Czyli tylko litere.
    std::size_t found = number.rfind(change);
    if (found!=std::string::npos)
    {
        numberMark=numberOfMark(number);
    }
    else
    {
        numberMark=1;
    }
    
    //ponizej sprawdzam czy ostatni znak stringa jest litera tak by moc dokonac wyboru
    if (isalpha(choice))
    {
        switch (choice)
        {
            case 'M':
            {
                //funkcja insert wstawiam za liczbe ciag zer
                number.insert( i-1, "000000" );
                //usuwam ze stringa litere ktora przerzucilem na koniec stringa
                number.erase( number.size() -(numberMark) );
                //ponizej sprawdzam czy jest kropka w stringu, jezeli jest to w pozniejszym etapie programu
                //usuwam kropke i zamieniam ja spacja
                std::size_t found = number.rfind(change);
                if (found!=std::string::npos)
                    number.replace (found,change.length(),"");
                break;
            }
            case 'B':
            {
                //funkcja insert wstawiam za liczbe ciag zer
                number.insert( i-1, "000000000" );
                //usuwam ze stringa litere ktora przerzucilem na koniec stringa
                number.erase( number.size() -(numberMark) );
                //ponizej sprawdzam czy jest kropka w stringu, jezeli jest to w pozniejszym etapie programu
                //usuwam kropke i zamieniam ja spacja
                std::size_t found = number.rfind(change);
                if (found!=std::string::npos)
                    number.replace (found,change.length(),"");
                break;
            }
            case 'T':
            {
                //funkcja insert wstawiam za liczbe ciag zer
                number.insert( i-1, "000000000000" );
                //usuwam ze stringa litere ktora przerzucilem na koniec stringa
                number.erase( number.size() -(numberMark) );
                //ponizej sprawdzam czy jest kropka w stringu, jezeli jest to w pozniejszym etapie programu
                //usuwam kropke i zamieniam ja spacja
                std::size_t found = number.rfind(change);
                if (found!=std::string::npos)
                    number.replace (found,change.length(),"");
                break;
            }
            case 'Q':
            {
                //funkcja insert wstawiam za liczbe ciag zer
                number.insert( i-1, "000000000000000" );
                //usuwam ze stringa litere ktora przerzucilem na koniec stringa
                number.erase( number.size() -(numberMark) );
                //ponizej sprawdzam czy jest kropka w stringu, jezeli jest to w pozniejszym etapie programu
                //usuwam kropke i zamieniam ja spacja
                std::size_t found = number.rfind(change);
                if (found!=std::string::npos)
                    number.replace (found,change.length(),"");
                break;
            }
            case 'q':
            {
                //funkcja insert wstawiam za liczbe ciag zer
                number.insert( i-1, "000000000000000000" );
                //usuwam ze stringa litere ktora przerzucilem na koniec stringa
                number.erase( number.size() -(numberMark) );
                //ponizej sprawdzam czy jest kropka w stringu, jezeli jest to w pozniejszym etapie programu
                //usuwam kropke i zamieniam ja spacja
                std::size_t found = number.rfind(change);
                if (found!=std::string::npos)
                    number.replace (found,change.length(),"");
                break;
            }
            case 'S':
            {
                //funkcja insert wstawiam za liczbe ciag zer
                number.insert( i-1, "000000000000000000000" );
                //usuwam ze stringa litere ktora przerzucilem na koniec stringa
                number.erase( number.size() -(numberMark) );
                //ponizej sprawdzam czy jest kropka w stringu, jezeli jest to w pozniejszym etapie programu
                //usuwam kropke i zamieniam ja spacja
                std::size_t found = number.rfind(change);
                if (found!=std::string::npos)
                    number.replace (found,change.length(),"");
                break;
            }
            case 's':
            {
                //funkcja insert wstawiam za liczbe ciag zer
                number.insert( i-1, "000000000000000000000000" );
                //usuwam ze stringa litere ktora przerzucilem na koniec stringa
                number.erase( number.size() -(numberMark) );
                //ponizej sprawdzam czy jest kropka w stringu, jezeli jest to w pozniejszym etapie programu
                //usuwam kropke i zamieniam ja spacja
                std::size_t found = number.rfind(change);
                if (found!=std::string::npos)
                    number.replace (found,change.length(),"");
                break;
            }
            case 'O':
            {
                //funkcja insert wstawiam za liczbe ciag zer
                number.insert( i-1, "000000000000000000000000000" );
                //usuwam ze stringa litere ktora przerzucilem na koniec stringa
                number.erase( number.size() -(numberMark) );
                //ponizej sprawdzam czy jest kropka w stringu, jezeli jest to w pozniejszym etapie programu
                //usuwam kropke i zamieniam ja spacja
                std::size_t found = number.rfind(change);
                if (found!=std::string::npos)
                    number.replace (found,change.length(),"");
                break;
            }
            default:
            {
                number = "blad";
            }
        }
    }
    else
    {
        number_number = number;
    }
    number_number = number;
    //cout << "Twoja liczba to:\t" << number ;
}

int main()
{
    //jezli by nie bylo "using namespace std;" to bym musial zapisac std::string numberWithLetter;
    using namespace std;
    //ponizej okreslam typy zmiennych
    string numberWithLetter;
    string number;
    string temp;
    string change (".");
    string showString;
    
    int exit=0;
    char continuation;
    
    
    while(exit == 0)
    {
        //uzywam komende using namespace std;
        //opisuje instrukcje ktore uzytkownik musi wykonac
        cout << "\nWlasnie uruchomiles program nr 1/labolatoirum nr 1\n";
        cout << "Program w zaleznosci od wyboru / w pisania liczby plus znaku\n";
        cout << "Przeksztalci skrocona liczbe zapisana w formie liczb i liter\n";
        cout << "na jej liczbowy odpowiednik\n";
        cout << "Pamietaj ze dla ponizszych liter zostana przeprowadzone odpowiednie przeksztalcenia\n";
        cout << "\nM     przekszalcenie na Milion\n";
        cout << "B     przekszalcenie na Bilion\n";
        cout << "T     przekszalcenie na Trillion\n";
        cout << "Q     przekszalcenie na Quadrillion\n";
        cout << "q     przekszalcenie na Quintilion\n";
        cout << "S     przekszalcenie na sextilion\n";
        cout << "s     przekszalcenie na septilion\n";
        cout << "O     przekszalcenie na Octilion\n";
        cout << "\nPamietaj ! Wielkosc liter ma znaczenie !\n";
        cout << "\nPodaj liczbe i litere:\n";
        cout << "\Pamietaj ze przy podawaniu liczb po przecinku uzywaj wylacznie kropki:\n";
        
        //pobieram tekst za pomoca komendy getline(). Enter zamieniony na /0
        //aby zliczyc ile w stringu jest znakow
        getline (std::cin,numberWithLetter);
        cout << "\nPodana przez Ciebie liczba to: \t" << numberWithLetter << "\n";
        cout << "\nTeraz podana przez Ciebie liczba zostanie przekazana do metody zdefiniowanej w klasie";
        cout << "a nastepnie zstanie wyswietlona";
        
        //ponizej tworze obiekt "Number_One" do ktorego przekazuje wczesniej pobrany string i przekazuje
        //do metody zdefiniowanej w klasie "NumberWithClass"
        
        NumberWithClass Number_One(numberWithLetter);
        
        //ponizej wypisuje na ekranie efekt przetworzenia stringa przez metode "NemberWithClass"
        //jezeli w stringu pobranym nie bylo litery definiujacy wielkosc przeksztalcenia
        //badz nie bylo prawidlowej litery to ponizej definiuje mozliwosci i odpowiednie komunikaty
        //ktore wyswiatlane beda.
        
        showString = Number_One.number_number;
        
        if (showString == "blad")
            cout << "\n\nNiestety, liczba nie moze byc przeksztalcona. Podana liczba ma koncu nieprawidlowa litere";
        else
            cout << "Super ! Liczba zostala prawidlowo przeksztalcona. Po konwersji wynosi:\t "<< showString << endl;
        
        
        while(1)
        {
            cout << "\nCzy chcesz ponownie uruchomic program\n";
            cout << "Dla tak wpisz ''t'', dla nie wpisz ''n'': \n";
            //uzywam polecenia getchar() aby pobrac od uzytkownika znak do deklaracji dalszych krokow
            continuation=getchar();
            
            if(continuation == 't')
            {
                break;
            }
            else if(continuation == 'n')
            {
                exit= 1;
                break;
            }
            else
            {
                cout << "Podales  bledna litere!\n";
            }
        }
        cout << "\nSzkoda ze nie chcesz ponownie uruchomic programu labolatorium nr 1\n";
        cout << "\nMoze nastepnym razem. Powodzenia !!!\n";
    }
    return 0;
}
